#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

// LCD Setup
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Ultrasonic Pins
const int trigPin = 7;
const int echoPin = 6;
const int buzzerPin = 8;

// LDR Pins
const int ldrLeft = A0;
const int ldrRight = A1;

// Servo
Servo myServo;
int servoPin = 9;
int servoPos = 90;  // Start at center

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  myServo.attach(servoPin);
  myServo.write(servoPos);

  lcd.init();
  lcd.backlight();

  Serial.begin(9600);
}

void loop() {

  // ---------------- ULTRASONIC ----------------
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // ---------------- LDR READING ----------------
  int leftValue = analogRead(ldrLeft);
  int rightValue = analogRead(ldrRight);

  int threshold = 50;  // Sensitivity difference

  // If left LDR detects more light
  if (leftValue > rightValue + threshold) {
    servoPos--;
    if (servoPos < 0) servoPos = 0;
    myServo.write(servoPos);
  }

  // If right LDR detects more light
  else if (rightValue > leftValue + threshold) {
    servoPos++;
    if (servoPos > 180) servoPos = 180;
    myServo.write(servoPos);
  }

  // ---------------- LCD DISPLAY ----------------
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Dist:");
  lcd.print(distance);
  lcd.print("cm");

  lcd.setCursor(0, 1);
  lcd.print("L:");
  lcd.print(leftValue);
  lcd.print(" R:");
  lcd.print(rightValue);

  // ---------------- BUZZER LOGIC ----------------
  if (distance > 0 && distance <= 15) {
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(100);
}
