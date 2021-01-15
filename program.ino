#include <LiquidCrystal.h>
#define MQ135 A0
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int gas_val;
void setup() 
{                
  Serial.begin(9600); //  serial data transmission at Baudrate of 9600
  lcd.begin(16, 2);  // to intialize LCD
  lcd.setCursor(5,0); //cursor will goto first row fifth coloumn
  lcd.print("Welcome");
  lcd.setCursor(7,1); //cursor will goto second row seventh coloumn
  lcd.print("To"); 
  delay(3000);
  lcd.clear();
  lcd.setCursor(7,0);//cursor will goto first row seventh coloumn
  lcd.print("AIR"); 
  lcd.setCursor(1,1);
  lcd.print("QUALITY MONITOR");   
  delay(1000);
  lcd.clear();//Clear the lcd screen 
 }
void loop()
{
  delay(1000);
  gas_val= analogRead(MQ135);  // Read sensor value and stores in a variable gas value
  Serial.print("Air quality = ");
  Serial.print(gas_val);
  lcd.clear();
  lcd.setCursor (0,0);
  lcd.print("Air Qual:");
  lcd.print(gas_val);
  lcd.print(" PPM");
  lcd.setCursor (1,1);
   if (gas_val<=660) //if the air quality is less than or equal to 660 ppm
   {
   lcd.print("Fresh Air");
   Serial.println("Fresh Air ");
  }
  else if( gas_val>660 && gas_val<=900 ) //if the air quality is more than 660 ppm less than 900 ppm
  {
   lcd.print(" Poor Air");
   Serial.println(" Poor Air");
   delay(1000);
  }
  else if(gas_val>=900 ) //if the air quality is more than or equal to 900 ppm 
  {
  lcd.print("Very Poor");
  Serial.println("Very Poor"); 
  }
  delay(2000);
  lcd.clear();
}
