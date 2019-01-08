# easysmu
A working UI prototype for the Analog Device EasySMU (DC2561A) board (https://www.analog.com/en/design-center/evaluation-hardware-and-software/evaluation-boards-kits/dc2591a.html). Part of my efforts to create a "poor man's SMU". Further UI development will continue in https://github.com/hellange/poor-mans-smu.git independently on EasySMU. The EasySMU repo will not receive major updates because the Arduino UNO has limited memory capabilities.

It works togehter with Arduino UNO + EasySMU (DC2561A) and FT81x based 5" 800x480 capacitive touch screen. Demostrates full resolution test with capacitive touch and simple gesture/swipe to left and right on the lower part of the screen.

It can also be run without DC2561 by commenting out the #define EASYSMU line in the .ino file.

References:

https://www.analog.com/en/design-center/evaluation-hardware-and-software/evaluation-boards-kits/dc2591a.html

https://poormanssmu.wordpress.com/2018/09/19/easysmu/

http://www.hotmcu.com/5-graphical-lcd-capacitive-touch-screen-800x480-spi-ft811-p-301.html?cPath=6_16

https://weatherhelge.wordpress.com/2018/02/06/5-800x480-capacitive-touch-lcd-with-built-in-ft811-graphics-controller/




