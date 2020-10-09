<a href="https://youtu.be/NbHkHOqMG8Y">
<img src="http://dkardu.oss-cn-hongkong.aliyuncs.com/automatic%20humidity/fengmianYOUTUBE.jpg" /> 
</a></br>
  
Today we will make an automatic air humidifier with Arduino!
</br></br>

► Components</br></br>
The following parts were used in this project:</br>
Arduino UNO, https://amzn.to/3ihYFBl</br>
1.3 inch 128 x 64 I2C OLED Display Module, https://amzn.to/3gTMZnW</br>
DHT11 Temperature & Humidity sensor, https://amzn.to/2FhCAVh</br>
MB-102 3.3V/5V Power module, https://amzn.to/30cZzIL</br>
5V relay module, https://amzn.to/30dlK1n</br>
DV 5V, 300mA, 2W, 108KHz Atomization humidifier</br>
DC 12V charger (6.5V-12V) </br>
Breadboard, https://amzn.to/33yEavN</br>
Jumper wires, https://amzn.to/3jCHhZd</br></br>

#Arduino #Arduinoproject #Covid-19</br>
<img src="http://dkardu.oss-cn-hongkong.aliyuncs.com/automatic%20humidity/Circuit%20diagram.jpg" />
/br></br>

Note</br></br>
The atomizing humidifier module has two working modes, the first is that it can work independently after power on. The second is that after power on, you must press the switch to work. In order to allow the atomizing humidifier module to work independently, this project chose the first working method of the atomizing humidifier.
At the beginning, I wanted to connect pin 2 of the arduino uno directly to the atomizing humidifier, and control the high level of pin 2 to make the atomizing humidifier work, and the low level to make it not work. However, the current of the digital signal port of the arduino uno is too small to support the normal operation of the atomizing humidifier, and there is too little fog when working. So a 5V relay and MB102 power module are used to make the atomizing humidifier work normally.</br>
<img src="http://dkardu.oss-cn-hongkong.aliyuncs.com/automatic%20humidity/humidifier%20Instructions.jpg" />
Production</br></br>
install the Library file: Open "Tools"-"Library Manager" in the Arduino development software, then search for “ DHT sensor ”, and then install it.</br>
<img src="http://dkardu.oss-cn-hongkong.aliyuncs.com/automatic%20humidity/01.jpg" />
<img src="http://dkardu.oss-cn-hongkong.aliyuncs.com/automatic%20humidity/02.jpg" />
Choose the development board as Arduino UNO, this is to choose the right.</br>
<img src="http://dkardu.oss-cn-hongkong.aliyuncs.com/automatic%20humidity/03.jpg" />
Select the serial port corresponding to the development board, you can burn the code into the development board.</br>
<img src="http://dkardu.oss-cn-hongkong.aliyuncs.com/automatic%20humidity/04.jpg" />
