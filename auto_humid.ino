#include "U8glib.h"
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE);//Set the device name: I2C-SSD1306-128*64 (OLED)

#include "DHT.h"

#define DHTPIN A0

#define DHTTYPE DHT11 

#define jiashi 2

#define button 12


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  
  Serial.begin(9600);
  pinMode(jiashi,OUTPUT);
  pinMode(button,INPUT);
  dht.begin();

}

void loop() {
  float Humid = dht.readHumidity();
  float Temp = dht.readTemperature();
  
  Serial.print("Temp");
  Serial.print(Temp);
  delay(1000);
  Serial.print("Humid");
  Serial.print(Humid);
  delay(1000);

  
  u8g.firstPage();
  do
  {
    u8g.setFont(u8g_font_gdr14r);
    u8g.setPrintPos(25,18);
    u8g.print("DKARDU");
    u8g.setFont(u8g_font_9x18);
    u8g.setPrintPos(1,40);
    u8g.print("Temp: ");
    u8g.print(Temp);
    u8g.print("'C");
    u8g.setPrintPos(1,60);
    u8g.print("Humid: ");
    u8g.print(Humid);
    u8g.print("%");
  }while(u8g.nextPage());

if(Humid<80){
  digitalWrite(jiashi,LOW);
}else
{
  digitalWrite(jiashi,HIGH);

}


}



  
