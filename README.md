# 6 Axis Robotic Arm

A multipurpose internet-controlled 6-axis robotic arm powered by ESP32 and PCA9685 servo control.

---

## Project Overview

This project aims to build a low-cost robotic arm capable of remote wireless operation through Wi-Fi. The robotic arm is designed for robotics learning, automation experiments, embedded systems development, and remote manipulation tasks.

The system uses an ESP32 as the main control unit and a PCA9685 servo driver for stable multi-servo control.

---

## Features

- 6-axis articulated robotic arm
- Wi-Fi based remote control
- ESP32 powered control system
- PCA9685 servo management
- Modular firmware structure
- Planned movement recording/playback
- Expandable architecture for future upgrades

---

## Main Components

| Component | Purpose |
|---|---|
| ESP32 | Main controller |
| PCA9685 | Servo driver |
| Servo Motors | Joint movement |
| Power Supply | Servo power |
| Bearings & Structure | Mechanical support |

---

## System Architecture

```text
          User Device
      (Phone / Laptop)
               |
           Wi-Fi Control
               |
             ESP32
               |
        I2C Communication
               |
           PCA9685
               |
        Servo Motor Array
               |
        6 Axis Robotic Arm
```

---

## Repository Structure

```text
firmware/      → ESP32 firmware
cad/           → CAD and design files
electronics/   → wiring and circuit documentation
docs/          → project documentation
images/        → project images and screenshots
```

---

## Current Progress

- Repository setup completed
- Initial servo control firmware added
- Wi-Fi connectivity testing completed
- System architecture documented
- Electronics documentation started

---

## Future Plans

- Web dashboard control
- Real-time robotic arm movement
- Servo calibration system
- Remote internet-based operation
- Movement recording/playback
- Mechanical structure optimization

---

## Goals

This project is intended to improve skills in:
- robotics
- embedded systems
- firmware development
- networking
- mechanical design
- automation systems
