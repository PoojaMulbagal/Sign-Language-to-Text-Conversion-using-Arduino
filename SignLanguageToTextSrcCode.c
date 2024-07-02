#include <LiquidCrystal.h> 
#include "Wire.h" 
#include "I2Cdev.h" 
#include "MPU6050.h
String Al12 = "F"; 
String Al345 = "G"; 
String Al134 = "H"; 
String Al1234 = "I"; 
String Al45 ="K"; 
String Al145 = "U"; 
String Al15 = "W"; 

LiquidCrystal lcd(13, 12, 11, 10, 9,  8); 
const int buttonPin1 = A0; //Thumb  const int buttonPin2 = A1; //Index  Finger 
const int buttonPin3 = A2; //Middle  Finger 
const int buttonPin4 = A3; //Ring  Finger 
const int buttonPin5 = 2; //Little  Finger 
int buttonStatus1 = 0; 
int buttonStatus2 = 0; 
int buttonStatus3 = 0; 
int buttonStatus4 = 0; 
int buttonStatus5 = 0; 
int cnt = 0; 
MPU6050 mpu; 
int16_t ax, ay, az; 
int16_t gx, gy, gz; 
struct MyData { 
byte X; 
byte Y; 
}; 
MyData data; 
//Alphabets 
String Al2345 = "A"; 
String Al1 = "B"; 
String Al1345 = "D"; 
String Al12345 = "E"; 
String Al234 = "Y"; 
//Words 
String W3 = "Medicine"; 
String W34 = "I Love You"; 
void setup() { 
Wire.begin(); 
mpu.initialize(); 
lcd.begin(16, 2); 
lcd.setCursor(0, 0); 
Serial.begin(9600); 
pinMode(buttonPin1, INPUT_PULLUP); pinMode(buttonPin2, INPUT_PULLUP); pinMode(buttonPin3, INPUT_PULLUP); pinMode(buttonPin4, INPUT_PULLUP); pinMode(buttonPin5, INPUT_PULLUP); } 
void loop() { 
// lcd.clear(); 
mpu.getMotion6(&ax, &ay, &az, &gx,  &gy, &gz); 
data.X = map(ax, -17000, 17000, 0,  255); // X axis data 
data.Y = map(ay, -17000, 17000, 0,  255); // Y axis data 
delay(500); 
buttonStatus1 =  
digitalRead(buttonPin1); 
buttonStatus2 =  
digitalRead(buttonPin2); 
buttonStatus3 =  
digitalRead(buttonPin3);
buttonStatus4 =  
digitalRead(buttonPin4); buttonStatus5 =  
digitalRead(buttonPin5); 
//Al2345 = A 
if (buttonStatus1 == HIGH &&  buttonStatus2 == LOW &&  buttonStatus3 == LOW &&  buttonStatus4 == LOW &&  buttonStatus5 == LOW) 
{ 
lcd.clear(); 
Serial.println(Al2345); 
lcd.setCursor(0, 0); 
lcd.print(Al2345); 
delay(3000); 
lcd.clear(); 
} 
//Al1 = "B" 
if (buttonStatus1 == LOW &&  buttonStatus2 == HIGH &&  buttonStatus3 == HIGH &&  buttonStatus4 == HIGH &&  buttonStatus5 == HIGH) 
{ 
lcd.clear(); 
Serial.println(Al1); 
lcd.setCursor(0, 0); 
lcd.print(Al1); 
delay(3000); 
lcd.clear(); 
} 
//Al1345 = "D" 
if (buttonStatus1 == LOW &&  buttonStatus2 == HIGH &&  buttonStatus3 == LOW &&  buttonStatus4 == LOW &&  buttonStatus5 == LOW) 
{ 
lcd.clear(); 
Serial.println(Al1345); 
lcd.setCursor(0, 0); 
lcd.print(Al1345); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//Al12345 = "E" 
if (buttonStatus1 == LOW &&  buttonStatus2 == LOW &&  buttonStatus3 == LOW &&  buttonStatus4 == LOW &&  buttonStatus5 == LOW) 
{ 
lcd.clear(); 
Serial.println(Al12345); lcd.setCursor(0, 0); 
lcd.print(Al12345); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//Al12 = "F" 
if (buttonStatus1 == LOW &&  buttonStatus2 == LOW &&  buttonStatus3 == HIGH &&  buttonStatus4 == HIGH &&  buttonStatus5 == HIGH) 
{ 
lcd.clear(); 
Serial.println(Al12); 
lcd.setCursor(0, 0); 
lcd.print(Al12); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//Al345 = "G" 
if (buttonStatus1 == HIGH &&  buttonStatus2 == HIGH &&  buttonStatus3 == LOW &&  buttonStatus4 == LOW &&  buttonStatus5 == LOW) 
{
lcd.clear(); 
Serial.println(Al345); 
lcd.setCursor(0, 0); 
lcd.print(Al345); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//Al134 = "H" 
if (buttonStatus1 == LOW &&  buttonStatus2 == HIGH &&  buttonStatus3 == LOW &&  buttonStatus4 == LOW &&  buttonStatus5 == HIGH) 
{ 
lcd.clear(); 
Serial.println(Al134); 
lcd.setCursor(0, 0); 
lcd.print(Al134); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//Al1234 = "I" 
if (buttonStatus1 == LOW &&  buttonStatus2 == LOW &&  buttonStatus3 == LOW &&  buttonStatus4 == LOW &&  buttonStatus5 == HIGH) 
{ 
lcd.clear(); 
Serial.println(Al1234); 
lcd.setCursor(0, 0); 
lcd.print(Al1234); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//Al45 ="K" 
if (buttonStatus1 == HIGH &&  buttonStatus2 == HIGH &&  buttonStatus3 == HIGH &&  buttonStatus4 == LOW &&  buttonStatus5 == LOW) 
{ 
lcd.clear(); 
Serial.println(Al45); 
lcd.setCursor(0, 0); 
lcd.print(Al45); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//Al145 ="U" 
if (buttonStatus1 == LOW &&  buttonStatus2 == HIGH &&  buttonStatus3 == HIGH &&  buttonStatus4 == LOW &&  buttonStatus5 == LOW) 
{ 
lcd.clear(); 
Serial.println(Al145); 
lcd.setCursor(0, 0); 
lcd.print(Al145); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//Al15 = "W" 
if (buttonStatus1 == LOW &&  buttonStatus2 == HIGH &&  buttonStatus3 == HIGH &&  buttonStatus4 == HIGH &&  buttonStatus5 == LOW) 
{ 
lcd.clear(); 
Serial.println(Al15); 
lcd.setCursor(0, 0); 
lcd.print(Al15); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//Al234 = "Y" 
if (buttonStatus1 == HIGH &&  buttonStatus2 == LOW &&  buttonStatus3 == LOW && 
buttonStatus4 == LOW &&  buttonStatus5 == HIGH) 
{ 
lcd.clear(); 
Serial.println(Al234); 
lcd.setCursor(0, 0); 
lcd.print(Al234); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//W3 = "Medicine" 
if (buttonStatus1 == HIGH &&  buttonStatus2 == HIGH &&  buttonStatus3 == LOW &&  buttonStatus4 == HIGH &&  buttonStatus5 == HIGH) 
{ 
lcd.clear(); 
Serial.println(W3); 
lcd.setCursor(0, 0); 
lcd.print(W3); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
//W34 = "I Love You" 
if (buttonStatus1 == HIGH &&  buttonStatus2 == HIGH &&  buttonStatus3 == LOW &&  buttonStatus4 == LOW &&  buttonStatus5 == HIGH) 
{ 
lcd.clear(); 
Serial.println(W34); 
lcd.setCursor(0, 0); 
lcd.print(W34); 
delay(3000); 
lcd.clear(); 
// cnt = 0; 
} 
}

