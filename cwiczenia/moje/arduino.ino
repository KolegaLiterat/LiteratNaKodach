#include <LiquidCrystal.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 8
#define DHTTYPE DHT11
#define COMMON_ANODE

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
DHT dht(DHTPIN, DHTTYPE);
int rgbLED[3] = {9, 10, 11}; //blue = 9, green = 10, red = 11

void setup()
{
    int i;

    lcd.begin(16, 2);
    dht.begin();

    for (i = 0; i < 3; i++) {
        pinMode(rgbLED[i], OUTPUT);    
    }
}
 
void loop() 
{
    int hum = dht.readHumidity();
    int temp = dht.readTemperature();
    
    showData(hum, temp);
    checkTemp(temp);
}
void showData(int hum, int temp)
{
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temp);
    lcd.print(" ");
    lcd.print((char)223);
    lcd.print("C");

    lcd.setCursor(0, 1);
    lcd.print("Wilg: ");
    lcd.print(hum);
    lcd.print("%");
}
void setColor(int red, int green, int blue)
{
    #ifdef COMMON_ANODE
        red = 255 - red;
        green = 255 - green;
        blue = 255 - blue;
    #endif

    analogWrite(rgbLED[0], blue);
    analogWrite(rgbLED[1], green);
    analogWrite(rgbLED[2], red);
}
void checkTemp(int &temp)
{
    if (temp < 16) {
        setColor(0, 0, 255);
    } else if (temp >=16 && temp <=25) {
        setColor(0, 255, 0);
    } else if (temp > 25) {
        setColor(255, 0, 0);
    }
}