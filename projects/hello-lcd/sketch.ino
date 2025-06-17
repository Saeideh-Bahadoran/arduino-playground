#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  lcd.setCursor(2,1);
  lcd.print("Hi Saeideh!");

}

void loop() {
  lcd.setCursor(0,2);
  lcd.print("your time is running out");
  lcd.setCursor(7,3);
  lcd.print(millis()/1000);
}
