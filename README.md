# 📏 Distance-Based Alarm System (Arduino)

A simple distance detection system using an **ultrasonic sensor**, **three LEDs**, and a **buzzer**. This project triggers different visual and sound alerts based on the object's distance, making it useful for parking assistance, obstacle detection, or security systems.

---

## ✅ Features

- Detects distance using an ultrasonic sensor
- Red, yellow, and green LEDs show proximity level
- Buzzer sounds when an object is too close (less than 15 cm)
- Real-time monitoring via Serial Monitor

---

## 🧰 Components Used

- Arduino Uno (or compatible board)
- HC-SR04 Ultrasonic Sensor
- Piezo Buzzer
- 3 LEDs (Red, Yellow, Green)
- Jumper wires
- Breadboard

---

## 🔌 Circuit Wiring

- **LEDs:**
  - Green → Pin 13
  - Yellow → Pin 12
  - Red → Pin 11
- **Buzzer:**
  - Positive (+) → Pin 10
  - Negative (–) → GND
- **Ultrasonic Sensor (HC-SR04):**
  - TRIG → Pin 7
  - ECHO → Pin 7 *(combined for simplicity)*
  - VCC → 5V
  - GND → GND

---

## 🧠 How It Works

1. The ultrasonic sensor measures the distance to a nearby object.
2. Based on the distance:
   - **< 15 cm**: Red LED on, buzzer on (danger)
   - **15–30 cm**: Yellow LED on (warning)
   - **> 30 cm**: Green LED on (safe)
3. Distance is printed to the Serial Monitor in cm and inches.


