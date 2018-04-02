#include <stdint.h>
#include <LCD.h>
#include <SPI.h>

void setup()
{
    SPI.setDataMode(SPI_MODE3);
    SPI.setBitOrder(MSBFIRST);
    SPI.setClockDivider(SPI_CLOCK_DIV4);
    SPI.begin();
    
    Tft.lcd_init();                                      // init TFT library

    randomSeed(analogRead(0));
}

void loop()
{
  int xPos = 100, yPos = 100, wait = 1000, i = 0, randY = 0, randRad = 0;

  randY = random(50, 100);
  randRad = random(10, 80);
  xPos = random(50, 320);

  while (i == 0) {
    Tft.lcd_draw_circle(xPos, randY, randRad, BLUE);
    delay(wait);
    xPos++;
    Tft.lcd_draw_circle(xPos - 1, randY, randRad, WHITE);
    randY = random(50, 100);
    randRad = random(10, 80);
    xPos = random(50, 100);
    
  }
  
  
}

