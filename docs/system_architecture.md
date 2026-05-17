# 6 Axis Robotic Arm System Architecture

```text
          User Device
      (Phone / Laptop)
               |
           Wi-Fi Control
               |
             ESP32
      Main Control Unit
               |
        I2C Communication
               |
           PCA9685
        Servo Controller
               |
        Servo Motor Array
               |
        6 Axis Robotic Arm
```

## Main System Components

### ESP32
Handles:
- Wi-Fi communication
- command processing
- robotic arm logic

### PCA9685
Used for:
- controlling multiple servos
- stable PWM generation
- reducing ESP32 load

### Servo Motors
Provide movement for:
- base rotation
- shoulder movement
- elbow movement
- wrist movement
- gripper control

## Planned Future Features

- Web dashboard control
- Real-time robotic arm movement
- Movement recording/playback
- Remote internet control
- Expandable modular architecture
```
