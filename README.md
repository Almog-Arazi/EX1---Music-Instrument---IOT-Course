# Opera Singer in a Box
<a href="https://ibb.co/WH7GNJh"><img src="https://i.ibb.co/b6YQj90/Whats-App-Image-2024-01-10-at-11-43-33-AM-1.jpg" alt="Whats-App-Image-2024-01-10-at-11-43-33-AM-1" border="0" size="50" /></a>
## Project Overview
"Opera Singer in a Box" is a unique and innovative project inspired by the rich and expressive vocal qualities of an opera singer. Utilizing the ESP32 microcontroller and Mozzi library for sound synthesis, this IoT project aims to mimic the dynamic range and vibrato of an opera singer, providing an interactive musical experience.

 Video link: https://drive.google.com/file/d/1SAQzNu1yqwE_BtpHf2YD7__loRM4NWMq/view?usp=sharing

## Features
- **Expressive Sound Synthesis**: Harnessing the power of the Mozzi library, our project emulates the captivating vibrato of an opera singer.
- **Light Sensor**: Modulates the frequency of the sound, mimicking the pitch changes in an opera singer's performance.
- **Ultrasonic Distance Sensor**: Alters the intensity of the vibrato effect, adding depth and variation to the audio output.
- **Joystick Control**: Acts as a pause/resume button for the audio output, offering user interactivity with the system.

## Circuit Components
- **ESP32 Microcontroller**: The brain of the project, managing sensor inputs, sound synthesis, and output modulation.
- **Ultrasonic Sensor (Pins 16 and 17)**: Measures distance to control the vibrato intensity.
- **Light Sensor (Pin 34)**: Modifies the frequency of the sound based on light intensity.
- **Speaker Output (Pin 26)**: Delivers the audio output from the ESP32.
- **Joystick (Pin 15)**: Provides user interaction, allowing the audio output to be paused or resumed.

## How to Use
- **Setup:** Assemble the circuit as per the schematic provided, connecting the sensors, joystick, and speaker to the designated pins on the ESP32.
- **Programming:** Upload the provided code to the ESP32 using the Arduino IDE or your preferred development environment.
- **Interaction:**
Alter the light intensity near the light sensor to change the pitch of the sound (open the box).
Move your hand closer or further from the ultrasonic sensor to adjust the vibrato intensity.
Use the joystick button to pause or resume the sound output.

<a href="https://ibb.co/qybQ2WY"><img src="https://i.ibb.co/h7pzTZF/20240117-210347.jpg" alt="20240117-210347" border="0" /></a>
