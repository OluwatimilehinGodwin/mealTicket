#include <Arduino.h>
#include <TFT_eSPI.h> 
TFT_eSPI tft = TFT_eSPI();

void setup() 
{
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0,0,4);
  tft.setTextColor(TFT_WHITE);
  tft.println ("Hello World!");
}

void loop() 
{
  // put your main code here, to run repeatedly:
}