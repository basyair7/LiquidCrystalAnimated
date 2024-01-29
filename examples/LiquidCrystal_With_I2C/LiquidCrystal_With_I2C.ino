#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal_animated.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
LiquidCrystal_animated ChrAnimated;

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.clear();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 12; i++) {
    lcd.setCursor(0, 0);
    lcd.print(ChrAnimated.Scroll_LCD_Right("Basyair7"));
    delay(350);
  }
  
  for (int i = 0; i <= 50; i++) {
    lcd.setCursor(0, 1);
    lcd.print(ChrAnimated.Scroll_LCD_Left("Cara Membuat Text Berjalan...."));
    delay(350);
  }

  ChrAnimated.Clear_Scroll_LCD_Left();

  for (int i = 16; i <= 30; i++) {
    lcd.setCursor(0, 0);
    lcd.print(ChrAnimated.Scroll_LCD_Right("Basyair7"));
    delay(350);
  }

  ChrAnimated.Clear_Scroll_LCD_Right();
  
  for (int i = 0; i <= 12; i++) {
    lcd.setCursor(0, 0);
    lcd.print(ChrAnimated.Scroll_LCD_Right("Basyair7"));
    delay(350);
  }

  for (int i = 0; i <= 73; i++) {
    lcd.setCursor(0, 1);
    lcd.print(ChrAnimated.Scroll_LCD_Left("Hello World!!..."));
    delay(350);
  }

  ChrAnimated.Clear_Scroll_LCD_Left();

  for (int i = 13; i <= 24; i++) {
    lcd.setCursor(0, 0);
    lcd.print(ChrAnimated.Scroll_LCD_Right("Basyair7"));
    delay(350);
  }
  ChrAnimated.Clear_Scroll_LCD_Right();
}
