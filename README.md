<p align="center">
  <h1 align="center">🌞 Solar Powered Water Purifier</h1>
  <h3 align="center">With Solar Tracking & Obstacle Detection</h3>
</p>

# 🌞 Solar Powered Water Purifier with Solar Tracking & Obstacle Detection

## 🧠 Overview

This project presents an intelligent solar-powered water purification system designed to provide sustainable and automated water purification using renewable energy. The system integrates solar tracking, obstacle detection, and IoT-based monitoring to improve efficiency and reliability.

The project was developed and presented at **National Science Day 2026**, where it secured **1st Position** among competing teams.

---

## ❓ Problem Statement

Many rural and remote areas lack reliable electricity and access to clean drinking water. This project aims to develop a sustainable solar-powered purification system capable of operating independently using renewable energy.

---

## 🏆 Achievement

🥇 **1st Position — National Science Day 2026**  
Organized by **Regional Science and Technology Centre (RSTC), Ghaziabad** in collaboration with **KIET Group of Institutions**

---

## 🚀 Features

- 🌞 Solar-powered water purification system  
- 🔄 Automatic solar tracking mechanism  
- 🚧 Obstacle detection system  
- 📡 IoT-based monitoring and control  
- ⚡ Energy-efficient and sustainable design  
- 💧 Real-world water purification implementation

---

## 🛠 Technologies & Components Used

### Hardware Components

- Arduino Uno Microcontroller  
- Solar Panel  
- Servo Motor  
- LDR Sensors (Light Detection)  
- Ultrasonic Sensor (HC-SR04)  
- Buzzer Module  
- LCD Display (I2C Interface)  
- Water Filtration Unit
- WiFi Module / IoT Monitoring Interface (for remote monitoring capability)

### Software Tools

- Arduino IDE  
- Embedded C / Arduino Programming  
- Servo Library  
- LiquidCrystal_I2C Library

---

## 🧪 Working Principle

1. Solar panels generate energy.
2. Solar tracking mechanism adjusts panel direction for maximum sunlight.
3. The purification unit filters water using integrated filtration stages.
4. Obstacle detection prevents mechanical interference.
5. IoT system monitors system performance and enables remote observation.

---

## 🧩 System Architecture (Block Diagram)

Below is the block-level architecture of the Solar Powered Water Purifier System:

Solar Panel → Charge Controller → Microcontroller →  
→ Solar Tracking Motor System  
→ Water Purification Unit  
→ Ultrasonic Sensor (Obstacle Detection)  
→ Buzzer Alert System  
→ IoT Monitoring Module

![Block Diagram](block_diagram.png)

---

## 🔄 System Flow Explanation

1. Solar panels capture sunlight and generate electrical energy.
2. LDR sensors detect sunlight intensity and send data to Arduino.
3. Arduino processes sensor values and rotates the servo motor accordingly.
4. The water purification unit operates using solar energy.
5. Ultrasonic sensor continuously checks for nearby obstacles.
6. If an obstacle is detected within threshold distance, buzzer activates.
7. LCD displays real-time distance and sensor readings.

---

## 📊 Output Results

- Solar panel successfully tracked sunlight using LDR-based tracking system.
- Ultrasonic sensor detected obstacles within 15 cm distance.
- Buzzer activated automatically during obstacle detection.
- LCD displayed real-time system data.
- Water purification system operated using solar energy.

This demonstrated the system’s reliability and real-time functionality.

---

## 📸 Project Images

![Solar Tracking](https://github.com/user-attachments/assets/d9be99c4-08b2-4b3d-8f4a-1ebf5004453e)
![Water Purifier](https://github.com/user-attachments/assets/31070d90-fd3b-4c10-9b8b-672480a41d01)
![Solar Powered Water Purifier](https://github.com/user-attachments/assets/1f55c157-8c3d-4764-9dae-1acf99c99609)
![Innotech&#39;25](https://github.com/user-attachments/assets/357f2403-2967-4722-aa96-3e0fb052d563)

---

## 👨‍👩‍👦 Team Members

- Ayushman Pathak  
- Abhinav Singh  
- Mohd Arshan Saifi  
- Shritij Jaiswal  

This project was developed collaboratively as part of a multidisciplinary team, combining skills in electronics, mechanical design, and system integration.

## 🌍 Real-World Impact

This project aims to provide an eco-friendly and sustainable water purification solution for rural and remote areas where electricity access is limited.

---

## 👨‍💻 My Role in the Project

As a team leader, my contributions included:

- Assisted in assembling and integrating hardware components including solar tracking and purification units  
- Worked on sensor setup including ultrasonic sensor integration for obstacle detection  
- Supported implementation of Arduino-based control logic  
- Performed system testing, debugging, and troubleshooting  
- Helped calibrate solar tracking movement for optimized sunlight alignment  
- Actively participated in project demonstration and technical explanation during exhibition

---

## 📌 Future Improvements

- Mobile app monitoring  
- Automated water quality sensing  
- Enhanced efficiency optimization  

---

---

## 💻 Arduino Code Implementation

The system control logic was implemented using Arduino programming to automate solar tracking and obstacle detection.

### Functional Modules:

🌞 Solar Tracking using LDR sensors  
🚧 Obstacle Detection using Ultrasonic Sensor  
🔔 Buzzer Alert System  
📟 LCD Monitoring Display  

### 📂 Code File:

Available inside:

code/TeamSolarixCODE.ino

### Libraries Used:

- Wire.h  
- LiquidCrystal_I2C.h  
- Servo.h  
