# Opera Singer in a Box
![Whats-App-Image-2024-01-10-at-11-43-33-AM-1](https://github.com/user-attachments/assets/704792a3-2d50-4e79-aa55-44f1d903de8b)

## Project Overview
"Opera Singer in a Box" is a unique and innovative project inspired by the rich and expressive vocal qualities of an opera singer. Utilizing the ESP32 microcontroller and Mozzi library for sound synthesis, this IoT project aims to mimic the dynamic range and vibrato of an opera singer, providing an interactive musical experience.

<a href="https://www.youtube.com/embed/gcxdpc_Ur-Q?si=Y8IK-ynnRDHlXFkQ">
  <img src="https://img.youtube.com/vi/gcxdpc_Ur-Q/maxresdefault.jpg" alt="Watch the Video" width="600" height="400">
</a>

### [Watch the Video Here](https://www.youtube.com/embed/gcxdpc_Ur-Q?si=Y8IK-ynnRDHlXFkQ)

In this video, you'll see:
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
![20240117-210347](https://github.com/user-attachments/assets/e8babe29-1b81-4f87-a940-8e2da0db8ae8)


