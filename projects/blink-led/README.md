# 🔦 Blink LED – Day 2 Project

This is a simple Arduino project for beginners that demonstrates how to blink the built-in LED on an Arduino Uno board.

## 📁 Project Structure

blink-led/
blink-led.ino # Arduino sketch to blink the LED

diagram.json # Wokwi circuit diagram

README.md # Project documentation


## 💡 Overview

This project turns the built-in LED on and off every 1 second. It helps beginners get familiar with:

- Basic Arduino sketch structure
- Using `digitalWrite()` and `delay()`
- Simulating circuits in [Wokwi](https://wokwi.com)

## 🚀 Getting Started

1. Open the `.ino` file in the [Arduino IDE](https://www.arduino.cc/en/software) or [Wokwi online simulator](https://wokwi.com).
2. Upload it to your Arduino board or run it in the simulator.

## 🔧 Code Snippet

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // LED ON for 1 second
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // LED OFF for 1 second
}
📌 Dependencies
No external libraries required.

Uses the built-in Arduino LED_BUILTIN pin.

🧪 Simulated With
Wokwi Arduino Simulator

Microcontroller: Arduino Uno

📸 Screenshot
You can add a screenshot of your Wokwi simulation here.

🧠 What I Learned
How to configure a digital output pin

Using delay() to control timing

The basic cycle of a microcontroller program (setup + loop)

👩‍💻 Author
Saeideh Bahadoran
