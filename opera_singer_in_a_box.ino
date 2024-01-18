/*  EX1 - Music Instrument - IOT Course
 *   "Opera Singer In A Box"
 * -----------------------------------------------------------------------  
 *   "Opera Singer in a Box" is inspired by the expressive vocal range and vibrato of an opera singer.
 *   in this project we used Mozzi library for sound synthesis.
 *   The circuit:
 *   *  the light sensor effects the frequency.
 *   *  the distance measured by ultrasonic sensor effects the intensity of the vibrato effect.
 *   *  the joystick used as a button key - when pressed, it stops the audio output.
 *   
 *   Video link: https://drive.google.com/file/d/1SAQzNu1yqwE_BtpHf2YD7__loRM4NWMq/view?usp=sharing
 *   
*/


#include <MozziGuts.h>
#include <Oscil.h> // oscillator template
#include <tables/sin2048_int8.h> // sine table for oscillator

// distance
#define MAX_DISTANCE 30

//ultra sonic sensor
#define trigPin 16  
#define echoPin 17 

//light sensor
#define LIGHT_SENSOR_PIN 34

// speaker output
#define SPEAKER_PIN 26

//joystick
#define JOYSTICK_SW_PIN 15 


// mozzi oscillators
Oscil <SIN2048_NUM_CELLS, AUDIO_RATE> aSin(SIN2048_DATA);
Oscil<SIN2048_NUM_CELLS, AUDIO_RATE> aVibrato(SIN2048_DATA);


//for pause effect 0/1 
char gain = 1;

// intensity of vibrato effect
byte intensity;

// distance calculations vars
float duration, distance; 
int weighedDistance = 0;


void setup(){
  
  pinMode(trigPin, OUTPUT);  
  pinMode(echoPin, INPUT);  
  pinMode(LIGHT_SENSOR_PIN, INPUT);
  pinMode(JOYSTICK_SW_PIN, INPUT_PULLUP);
  Serial.begin(115200); 
  aVibrato.setFreq(7.5f);
  startMozzi(); 
}

void update_distance(){
  
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);  
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH,  10000); 
  distance = (duration*.0343)/2;
  if (distance > MAX_DISTANCE){
    distance = MAX_DISTANCE;
  }
  
  weighedDistance = 0.9 * weighedDistance + 0.1 * distance;
}

void updateControl(){
   

    // set the frequency
    
    int light_level = mozziAnalogRead(LIGHT_SENSOR_PIN);
    light_level = map(light_level, 0, 4095, 4095, 0);
    
    aSin.setFreq(light_level);
    
    
    // joy stick
    
    int sw = digitalRead(JOYSTICK_SW_PIN);

    // pause key
    
    if (sw == 0) { // Check if joystick switch is pressed
      gain = 0;
    }
    else{
      gain = 1;     
    }


    
    // vibrato by distance
    update_distance();
    intensity = weighedDistance;
    intensity = map(intensity, 1, MAX_DISTANCE, 255, 0);

    // dubuging prints
    Serial.print("pause = ");
    Serial.println(sw*1000);
    Serial.print("intensity = ");
    Serial.println(intensity);
    Serial.print("freq = ");
    Serial.println(light_level);


}


int updateAudio(){
  Q15n16 vibrato = (Q15n16) intensity * aVibrato.next();
  int aSinOutput = aSin.phMod(vibrato) * gain;

  return MonoOutput::from8Bit((aSinOutput));
 
}


void loop(){
  audioHook(); 
}
