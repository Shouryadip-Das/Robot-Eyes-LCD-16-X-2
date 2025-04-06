// Robot Eyes Animation using LCD 16 X 2
// Code written by Shouryadip Das
// If you are not using potentiometer to control brightness then you can upload the code as it is
// otherwise remove the "//" to enable the v0 pin connected to pin 10 and the analogWrite(v0,10)
// follow the circuit diagram and do the proper connection

#include <LiquidCrystal.h>

const int rs = 8, en = 9, d4 = 4, d5 =5 , d6 =6 , d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// int v0 = 10;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  // analogWrite(v0,10);

}

void loop() {
  // put your main code here, to run repeatedly:
  eyes();
  delay(1000);
  lcd.clear();

  for (int i=1;i<=2;i++) { // Eye Blinking
    eyesclosed();
    delay(100);
    lcd.clear();

    eyes();
    delay(100);
    lcd.clear();
  }


  eyes();
  delay(1000);
  lcd.clear();

  eyesleft();
  delay(500);
  lcd.clear();

  eyes();
  delay(500);
  lcd.clear();

  eyesright();
  delay(500);
  lcd.clear();

  eyes();
  delay(500);
  lcd.clear();

  eyesleftdown();
  delay(1000);
  lcd.clear();

  eyesleftup();
  delay(1000);
  lcd.clear();

  eyes();
  delay(1000);
  lcd.clear();

  for (int i=1;i<=3;i++) { // Eye Blinking
    eyesclosed();
    delay(100);
    lcd.clear();

    eyes();
    delay(100);
    lcd.clear();
  }

  eyes();
  delay(500);
  lcd.clear();

  eyesrightup();
  delay(1000);
  lcd.clear();

  eyesrightdown();
  delay(1000);
  lcd.clear();



}

void eyes() {
  byte name0x7[] = { B00000, B00000, B00000, B10000, B11000, B11100, B11100, B11100 };
  byte name0x6[] = { B00000, B00000, B00000, B00001, B00011, B00111, B00111, B00111 };
  byte name0x8[] = { B00000, B00000, B00000, B00001, B00011, B00111, B00111, B00111 };
  byte name0x9[] = { B00000, B00000, B00000, B10000, B11000, B11100, B11100, B11100 };
  byte name1x6[] = { B00111, B00111, B00011, B00011, B00001, B00000, B00000, B00000 };
  byte name1x7[] = { B11100, B11100, B11000, B11000, B10000, B00000, B00000, B00000 };
  byte name1x8[] = { B00111, B00111, B00011, B00011, B00001, B00000, B00000, B00000 };
  byte name1x9[] = { B11100, B11100, B11000, B11000, B10000, B00000, B00000, B00000 };

  lcd.createChar(0, name0x7);
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  
  lcd.createChar(1, name0x6);
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  
  lcd.createChar(2, name0x8);
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  
  lcd.createChar(3, name0x9);
  lcd.setCursor(9, 0);
  lcd.write(byte(3));
  
  lcd.createChar(4, name1x6);
  lcd.setCursor(6, 1);
  lcd.write(byte(4));
  
  lcd.createChar(5, name1x7);
  lcd.setCursor(7, 1);
  lcd.write(byte(5));
  
  lcd.createChar(6, name1x8);
  lcd.setCursor(8, 1);
  lcd.write(byte(6));
  
  lcd.createChar(7, name1x9);
  lcd.setCursor(9, 1);
  lcd.write(byte(7));
}

void eyesclosed() {
  byte name1x9[] = { B11100, B00000, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte name0x6[] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00111 };
  byte name0x7[] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B11100 };
  byte name0x8[] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00111 };
  byte name0x9[] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B11100 };
  byte name1x6[] = { B00111, B00000, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte name1x7[] = { B11100, B00000, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte name1x8[] = { B00111, B00000, B00000, B00000, B00000, B00000, B00000, B00000 };

  lcd.createChar(0, name1x9);
  lcd.setCursor(9, 1);
  lcd.write(byte(0));
  
  lcd.createChar(1, name0x6);
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  
  lcd.createChar(2, name0x7);
  lcd.setCursor(7, 0);
  lcd.write(byte(2));
  
  lcd.createChar(3, name0x8);
  lcd.setCursor(8, 0);
  lcd.write(byte(3));
  
  lcd.createChar(4, name0x9);
  lcd.setCursor(9, 0);
  lcd.write(byte(4));
  
  lcd.createChar(5, name1x6);
  lcd.setCursor(6, 1);
  lcd.write(byte(5));
  
  lcd.createChar(6, name1x7);
  lcd.setCursor(7, 1);
  lcd.write(byte(6));
  
  lcd.createChar(7, name1x8);
  lcd.setCursor(8, 1);
  lcd.write(byte(7));


}

void eyesleft() {
  byte name0x7[] = { B00000, B00000, B00000, B00000, B00000, B10000, B10000, B10000 };
  byte name0x6[] = { B00000, B00000, B00000, B00110, B01111, B11111, B11111, B11111 };
  byte name0x8[] = { B00000, B00000, B00000, B00110, B01111, B11111, B11111, B11111 };
  byte name0x9[] = { B00000, B00000, B00000, B00000, B00000, B10000, B10000, B10000 };
  byte name1x6[] = { B11111, B11111, B01111, B01111, B00110, B00000, B00000, B00000 };
  byte name1x7[] = { B10000, B10000, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte name1x8[] = { B11111, B11111, B01111, B01111, B00110, B00000, B00000, B00000 };
  byte name1x9[] = { B10000, B10000, B00000, B00000, B00000, B00000, B00000, B00000 };

  lcd.createChar(0, name0x7);
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  
  lcd.createChar(1, name0x6);
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  
  lcd.createChar(2, name0x8);
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  
  lcd.createChar(3, name0x9);
  lcd.setCursor(9, 0);
  lcd.write(byte(3));
  
  lcd.createChar(4, name1x6);
  lcd.setCursor(6, 1);
  lcd.write(byte(4));
  
  lcd.createChar(5, name1x7);
  lcd.setCursor(7, 1);
  lcd.write(byte(5));
  
  lcd.createChar(6, name1x8);
  lcd.setCursor(8, 1);
  lcd.write(byte(6));
  
  lcd.createChar(7, name1x9);
  lcd.setCursor(9, 1);
  lcd.write(byte(7));
}

void eyesright() {
  byte name0x7[] = { B00000, B00000, B00000, B00011, B00111, B01111, B01111, B01111 };
  byte name0x8[] = { B00000, B00000, B00000, B00000, B10000, B11000, B11000, B11000 };
  byte name0x9[] = { B00000, B00000, B00000, B00011, B00111, B01111, B01111, B01111 };
  byte name0x10[] = { B00000, B00000, B00000, B00000, B10000, B11000, B11000, B11000 };
  byte name1x7[] = { B01111, B01111, B00111, B00111, B00011, B00000, B00000, B00000 };
  byte name1x8[] = { B11000, B11000, B10000, B10000, B00000, B00000, B00000, B00000 };
  byte name1x9[] = { B01111, B01111, B00111, B00111, B00011, B00000, B00000, B00000 };
  byte name1x10[] = { B11000, B11000, B10000, B10000, B00000, B00000, B00000, B00000 };
  lcd.createChar(0, name0x7);
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  
  lcd.createChar(1, name0x8);
  lcd.setCursor(8, 0);
  lcd.write(byte(1));
  
  lcd.createChar(2, name0x9);
  lcd.setCursor(9, 0);
  lcd.write(byte(2));
  
  lcd.createChar(3, name0x10);
  lcd.setCursor(10, 0);
  lcd.write(byte(3));
  
  lcd.createChar(4, name1x7);
  lcd.setCursor(7, 1);
  lcd.write(byte(4));
  
  lcd.createChar(5, name1x8);
  lcd.setCursor(8, 1);
  lcd.write(byte(5));
  
  lcd.createChar(6, name1x9);
  lcd.setCursor(9, 1);
  lcd.write(byte(6));
  
  lcd.createChar(7, name1x10);
  lcd.setCursor(10, 1);
  lcd.write(byte(7));
}

void eyesleftdown() {
  byte name1x7[] = { B00001, B00011, B00011, B00011, B00011, B00001, B00001, B00000 };
  byte name0x5[] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00001 };
  byte name0x6[] = { B00000, B00000, B00000, B00000, B00000, B00000, B11000, B11100 };
  byte name0x7[] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00001 };
  byte name0x8[] = { B00000, B00000, B00000, B00000, B00000, B00000, B11000, B11100 };
  byte name1x5[] = { B00001, B00011, B00011, B00011, B00011, B00001, B00001, B00000 };
  byte name1x6[] = { B11100, B11110, B11110, B11110, B11110, B11100, B11100, B11000 };
  byte name1x8[] = { B11100, B11110, B11110, B11110, B11110, B11100, B11100, B11000 };

  lcd.createChar(0, name1x7);
  lcd.setCursor(7, 1);
  lcd.write(byte(0));
  
  lcd.createChar(1, name0x5);
  lcd.setCursor(5, 0);
  lcd.write(byte(1));
  
  lcd.createChar(2, name0x6);
  lcd.setCursor(6, 0);
  lcd.write(byte(2));
  
  lcd.createChar(3, name0x7);
  lcd.setCursor(7, 0);
  lcd.write(byte(3));
  
  lcd.createChar(4, name0x8);
  lcd.setCursor(8, 0);
  lcd.write(byte(4));
  
  lcd.createChar(5, name1x5);
  lcd.setCursor(5, 1);
  lcd.write(byte(5));
  
  lcd.createChar(6, name1x6);
  lcd.setCursor(6, 1);
  lcd.write(byte(6));
  
  lcd.createChar(7, name1x8);
  lcd.setCursor(8, 1);
  lcd.write(byte(7));

}

void eyesleftup() {
  byte name1x7[] = { B00001, B00001, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte name0x5[] = { B00000, B00000, B00001, B00001, B00011, B00011, B00011, B00011 };
  byte name0x6[] = { B00000, B11000, B11100, B11100, B11110, B11110, B11110, B11110 };
  byte name0x7[] = { B00000, B00000, B00001, B00001, B00011, B00011, B00011, B00011 };
  byte name0x8[] = { B00000, B11000, B11100, B11100, B11110, B11110, B11110, B11110 };
  byte name1x5[] = { B00001, B00001, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte name1x6[] = { B11100, B11100, B11000, B00000, B00000, B00000, B00000, B00000 };
  byte name1x8[] = { B11100, B11100, B11000, B00000, B00000, B00000, B00000, B00000 };

  lcd.createChar(0, name1x7);
  lcd.setCursor(7, 1);
  lcd.write(byte(0));
  
  lcd.createChar(1, name0x5);
  lcd.setCursor(5, 0);
  lcd.write(byte(1));
  
  lcd.createChar(2, name0x6);
  lcd.setCursor(6, 0);
  lcd.write(byte(2));
  
  lcd.createChar(3, name0x7);
  lcd.setCursor(7, 0);
  lcd.write(byte(3));
  
  lcd.createChar(4, name0x8);
  lcd.setCursor(8, 0);
  lcd.write(byte(4));
  
  lcd.createChar(5, name1x5);
  lcd.setCursor(5, 1);
  lcd.write(byte(5));
  
  lcd.createChar(6, name1x6);
  lcd.setCursor(6, 1);
  lcd.write(byte(6));
  
  lcd.createChar(7, name1x8);
  lcd.setCursor(8, 1);
  lcd.write(byte(7));

}

void eyesrightup() {
  byte name1x7[] = { B00001, B00001, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte name0x7[] = { B00000, B00000, B00001, B00001, B00011, B00011, B00011, B00011 };
  byte name0x8[] = { B00000, B11000, B11100, B11100, B11110, B11110, B11110, B11110 };
  byte name0x9[] = { B00000, B00000, B00001, B00001, B00011, B00011, B00011, B00011 };
  byte name0x10[] = { B00000, B11000, B11100, B11100, B11110, B11110, B11110, B11110 };
  byte name1x8[] = { B11100, B11100, B11000, B00000, B00000, B00000, B00000, B00000 };
  byte name1x9[] = { B00001, B00001, B00000, B00000, B00000, B00000, B00000, B00000 };
  byte name1x10[] = { B11100, B11100, B11000, B00000, B00000, B00000, B00000, B00000 };

  lcd.createChar(0, name1x7);
  lcd.setCursor(7, 1);
  lcd.write(byte(0));
  
  lcd.createChar(1, name0x7);
  lcd.setCursor(7, 0);
  lcd.write(byte(1));
  
  lcd.createChar(2, name0x8);
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  
  lcd.createChar(3, name0x9);
  lcd.setCursor(9, 0);
  lcd.write(byte(3));
  
  lcd.createChar(4, name0x10);
  lcd.setCursor(10, 0);
  lcd.write(byte(4));
  
  lcd.createChar(5, name1x8);
  lcd.setCursor(8, 1);
  lcd.write(byte(5));
  
  lcd.createChar(6, name1x9);
  lcd.setCursor(9, 1);
  lcd.write(byte(6));
  
  lcd.createChar(7, name1x10);
  lcd.setCursor(10, 1);
  lcd.write(byte(7));
}

void eyesrightdown() {
  byte name1x7[] = { B00000, B00001, B00001, B00001, B00001, B00000, B00000, B00000 };
  byte name0x8[] = { B00000, B00000, B00000, B00000, B00000, B00000, B01100, B11110 };
  byte name0x10[] = { B00000, B00000, B00000, B00000, B00000, B00000, B01100, B11110 };
  byte name1x8[] = { B11110, B11111, B11111, B11111, B11111, B11110, B11110, B01100 };
  byte name1x9[] = { B00000, B00001, B00001, B00001, B00001, B00000, B00000, B00000 };
  byte name1x10[] = { B11110, B11111, B11111, B11111, B11111, B11110, B11110, B01100 };

  lcd.createChar(0, name1x7);
  lcd.setCursor(7, 1);
  lcd.write(byte(0));
  
  lcd.createChar(1, name0x8);
  lcd.setCursor(8, 0);
  lcd.write(byte(1));
  
  lcd.createChar(2, name0x10);
  lcd.setCursor(10, 0);
  lcd.write(byte(2));
  
  lcd.createChar(3, name1x8);
  lcd.setCursor(8, 1);
  lcd.write(byte(3));
  
  lcd.createChar(4, name1x9);
  lcd.setCursor(9, 1);
  lcd.write(byte(4));
  
  lcd.createChar(5, name1x10);
  lcd.setCursor(10, 1);
  lcd.write(byte(5));
}

// void leftear() {
//   byte name1[] = { B00000, B00000, B00000, B00000, B00000, B01100, B10010, B10001 };
//   byte name2[] = { B00100, B00100, B00100, B00100, B00100, B00100, B00100, B11100 };
//   byte name3[] = { B10001, B10010, B01100, B00000, B00000, B00000, B00000, B00000 };
//   byte name4[] = { B11100, B00100, B00100, B00100, B00100, B00100, B00100, B00100 };

//   lcd.createChar(0, name1);
//   lcd.setCursor(4, 0);
//   lcd.write(byte(0));
  
//   lcd.createChar(1, name2);
//   lcd.setCursor(5, 0);
//   lcd.write(byte(1));
  
//   lcd.createChar(2, name3);
//   lcd.setCursor(4, 1);
//   lcd.write(byte(2));
  
//   lcd.createChar(3, name4);
//   lcd.setCursor(5, 1);
//   lcd.write(byte(3));

// }