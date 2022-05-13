## M3_WiperSystem

## Introduction

Wiper system is automatically ON during the time of rainfall. The senor is fixed in the vehicle glass. The conductive (Touch) sensor is used in this project. It senses the rainfall and giving control signal to the control unit. The control unit activates the wiper motor automatically.

## Components Used

## Stm32F4
The STM32F4DISCOVERY Discovery kit allows users to easily develop applications withthe STM32F407VG high-performance microcontroller with the Arm® Cortex®-M4 32-bit
core. It includes everything required either for beginners or experienced users to get startedquickly.Based on STM32F407VG, it includes an ST-LINK/V2-A embedded debug tool, one STMEMS digital accelerometer, one digital microphone, one audio DAC with integrated class Dspeaker driver, LEDs, push-buttons and a USB OTG Micro-AB connector. Specialized addon boards can be connected by means of the extension header connectors. TheSTM32F4DISCOVERY Discovery kit comes with the STM32 comprehensive free softwarelibraries and examples available with the STM32CubeF4 MCU Package.
The STM32 family of 32-bit microcontrollers based on the Arm® Cortex®-M processor is designed to offer new degrees of freedom to MCU users. It offers products combining very high performance, real-time capabilities, digital signal processing, low-power / low-voltage operation, and connectivity, while maintaining full integration and ease of development.

![Screenshot 2022-05-13 180959](https://user-images.githubusercontent.com/102678112/168285076-bf64b0d3-5455-432f-a06b-9f0082f10029.png)


![image](https://user-images.githubusercontent.com/102678112/167770911-b81487e4-ff98-461d-ad48-6cf34fb3f297.png)

## Servo Motor

A servomotor is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration. It consists of a suitable motor coupled to a sensor for position feedback.

![image](https://user-images.githubusercontent.com/102678112/167772572-4d88ecf4-1bdf-468e-a997-ee7a3d892c26.png)


## Resistors

A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. In electronic circuits, resistors are used to reduce current flow.

![image](https://user-images.githubusercontent.com/102678112/167771801-68dfad5d-0ba3-4eec-a920-124934a40410.png)


## Capacitor

A capacitor is a device that stores electrical energy in an electric field. It is a passive electronic component with two terminals. The effect of a capacitor is known as capacitance.

![image](https://user-images.githubusercontent.com/102678112/167771908-31d64fea-4c18-4444-97e0-68cf25ac7c54.png)

## LED's Blinker

LED flashers are semiconductor integrated circuits used to turn on and off groups of light emitting diodes either sequentially or according to a programmed pattern. They are found in circuits used as indicators and controllers, as well as in home-built projects.

![image](https://user-images.githubusercontent.com/102678112/168279129-2204d164-edcd-4f95-8c6f-74d2066f1ddd.png)


## Cables and Connector

A cable, also known as a cord, plug, or connector transmits power or data between devices or positions, which is covered in plastic by one or more wires.

![image](https://user-images.githubusercontent.com/102678112/167772180-8ae89217-0607-4c44-b4ff-9f2be223eb10.png)

## Push Button

A push-button or simply button is a simple switch mechanism to control some aspect of a machine or a process. Buttons are typically made out of hard material, usually plastic or metal. 

![image](https://user-images.githubusercontent.com/102678112/167772326-b28c886c-9916-49bc-9325-9d8650434ced.png)

## High Level Requirements

| ID | Description | Status |
|----|--------------|-------|
| HLR01 | Detecting rainfall and active automobile rain wiper | Implemented |
| HLR02 | It operate manually | Implemented |
| HLR03 | Displaying the information in led | Implemented |

## Low Level Requirements

| ID | Description | Status |
|----|--------------|--------|
| LLR01 | It work functionally according to outside water | Implemented |
| LLR02 | Consume less power | Implemented |

## 4W's and 1H

## What:
Wipers system are operated by an electric motor. The electric motor is attached to a worm gear, which transmits the necessary force to a long rod that sets the wiper arms in motion.

##Why
The main purpose of the wiper system is to clean the windscreen sufficiently to provide suitable visibility at all times.

## When 
American inventor Mary Anderson received credit for the first operational windshield wiper, back in 1903. Anderson's “window cleaning device” used a rubber squeegee blade on an arm, operated via a hand-cranked lever from inside the vehicle.

## Where
Wipers system can be activated by a lever located to the right of the steering wheel. Pulling the lever down should activate the windshield wipers on their lowest setting

## How
When we turn the wiper on, the wiper switch sends the signal to the control module. The control module operates the wiper relay. The relay sends 12-volt power to the wiper motor.
