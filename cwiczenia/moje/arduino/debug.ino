#include <LiquidCrystal.h> //Dołączenie bilbioteki
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); 

void setup()
{
    lcd.begin(16, 2);
}

void loop()
{
    lcd.setCursor(0 0);
    lcd.print("IT");

    lcd.setCursor(0, 1);
    lcd.print("WORKS");
}
