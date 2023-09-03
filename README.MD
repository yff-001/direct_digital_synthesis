# Direct Digital Synthesis

Table of Contents
- [Theory](#theory)
- [Circuit](#circuit)
- [Operation](#operation)
- [Conclusion](#conclusion)

---

## Theory

Direct Digital Synthesis (DDS) is a method used to generate accurate analog waveforms from digital data. It works by converting digital phase information into continuous analog signals. This process involves selecting digital phase values from an accumulator in a sequential manner, and these values are then transformed into analog voltages through a digital-to-analog converter (DAC). DDS is highly valued for its flexibility and precision in generating different frequencies, making it an essential technology in a wide range of electronic applications.

The fundamental theory behind DDS revolves around its capacity to create analog waveforms by digitally controlling phase information. A reference clock signal determines the size of phase increments, and by adjusting the rate at which the phase accumulator increments, DDS can produce various frequencies. The key advantage of DDS lies in its ability to rapidly change frequencies, exhibit low phase noise, and enable precise frequency and phase adjustments, making it an indispensable tool in many electronic systems.

![Alt Text](./image/phase_wheel.png)

In its simplest form, a direct digital synthesizer can be implemented from a phase accumulator, a D/A converter, and a reference clock.

### Phase Accumulator

The phase accumulator is driven by the clock and steps through the phase cycle. Its output represents the phase information of the waveform being generated. In this example, it is implemented with a 32-bit word.

### D/A Converter

Phase information from phase accumulator is converted to analog voltage by D/A converter.

###  Reference Clock

The clock provides timing reference.

## Circuit

Explain the necessary steps to get started with the project. Include any dependencies or tools required for development.

## Operation

Describe the structure of the project directory and highlight the key files and folders. 

## Conclusion

With an extremely low part count (one MCU and four passive components), this solution is suitable for ad-hoc waveform generation.

![Alt Text](./image/SDS00003.png)
60 Hz Sine Wave

![Alt Text](./image/SDS00004.png)
500 Hz Sine Wave

---