#include <LiquidCrystal.h> //Dołączenie bilbioteki
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

byte car_1[8] = {
  B00000,
  B00000,
  B00111,
  B00101,
  B11111,
  B11111,
  B00110,
  B00110,
};

byte car_2[8] = {
    B00000;
    B00000;
    B11100;
    B00100;
    B11111;
    B11111;
    B01100;
    B01100;
}

void setup()
{
    lcd.createChar(0, car_1);
    lcd.creatChar(1, car_2);
    lcd.begin(16, 2);
}

void loop()
{
    lcd.write(byte(0));
    lcd.write(byte(1));
}