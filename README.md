# Home Appliance Control via Bluetooth

This project allows for the wireless control of daily home appliances such as TVs, Fridges, ACs, and Lights using an Android device and Bluetooth communication.

## Hardware Required
* Arduino Uno
* HC-05 Bluetooth Module
* Relay Module (4-Channel or 8-Channel)
* Connecting Wires
* Home Appliances (for testing)

## How it Works
1. The **HC-05** module receives serial commands from a paired Bluetooth device.
2. The **Arduino Uno** processes these commands.
3. Depending on the input, the Arduino triggers specific pins connected to a **Relay Module** to turn appliances ON or OFF.

## Setup Instructions
1. Connect HC-05 VCC to 5V and GND to GND.
2. Connect HC-05 TX to Arduino RX and RX to Arduino TX.
3. Upload the `.ino` code provided in this repository.
