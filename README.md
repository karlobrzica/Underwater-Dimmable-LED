# Underwater Dimmable LED

<p align="center">
  <img src="Photos/FInal.gif" alt="Underwater Dimmable LED" width="500">
</p>

<table>
  <tr>
    <td width="45%" valign="top">

### Key Information

- **Colour Temperature:** 5000 K  
- **Input Voltage:** 12–40 V DC  
- **Max. Power Consumption:** 9 W  
- **Luminosity:** ~1700 lm 
- **Brightness Control:** Servo PWM signal  
- **Mounting:** M4 threaded mounting hole  

    </td>
    <td width="55%" align="center">
      <img src="Photos/Fish_Bowl_Zoom.jpg" alt="Underwater Dimmable LED module" width="400">
    </td>
  </tr>
</table>

---

## Overview

The **Underwater Dimmable LED** is a compact, high-power lighting module designed specifically for underwater applications.  
LED brightness is controlled using a standard servo/PWM signal, allowing easy integration with RC systems and microcontrollers.

All electronics are fully **encapsulated in epoxy**, providing electrical insulation and protection against water ingress.  
When no control signal is present, the LED operates at approximately 1% output power.

<p align="center">
  <img src="Photos/PCB.jpg" alt="Gross dimensions" width="400">
</p>


---

## Mechanical & Construction Details

### Housing

The housing is machined from 6061 aluminum, providing good mechanical strength and thermal conductivity.

<table>
  <tr>
    <td align="center">
      <img src="Photos/Outiside_milling.jpeg" alt="Aluminum milling" width="340"><br>
      <sub>Milling process</sub>
    </td>
    <td align="center">
      <img src="Photos/Machined_Housings.jpg" alt="Housings" width="455"><br>
      <sub>Finished housings</sub>
    </td>
  </tr>
</table>

---

### Electronics

The PCB and all electronic components are **fully potted in epoxy** and connected using shielded high-performance PUR cable, ensuring mechanical robustness and resistance to harsh environments.

<table>
  <tr>
    <td align="center">
      <img src="Photos/Epoxy_Backside.jpg" alt="Epoxy backside" width="450"><br>
      <sub>Backside</sub>
    </td>
    <td align="center">
      <img src="Photos/Epoxy_Frontside.jpg" alt="Epoxy frontside" width="450"><br>
      <sub>Frontside</sub>
    </td>
  </tr>
</table>

---

### Mounting & Dimensions

The module is mounted using an M4 threaded hole.  
Mechanical dimensions are shown below.

<p align="center">
  <img src="Photos/Gross_dimensions.jpg" alt="Gross dimensions" width="600">
</p>

---

## Repository Structure

### Firmware
Firmware for the STM32 microcontroller.

### Hardware
PCB design related documentation.

### Photos
Project images, the joys of machining process and testing.

<table>
  <tr>
    <td align="center">
      <img src="Photos/Making_chips.jpeg" alt="Manufacturing process" width="340"><br>
      <sub>Making chips</sub>
    </td>
    <td align="center">
      <img src="Photos/First_fail.jpg" alt="First prototype failure" width="450"><br>
      <sub>Eating chips</sub>
    </td>
  </tr>
</table>