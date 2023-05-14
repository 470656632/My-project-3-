
//定义电机A引脚
int motorA1 = 12; 
int motorA2 = 14; 
//定义电机B引脚
int motorB1 = 27; 
int motorB2 = 26; 

//定义摇杆电位器的引脚
int potXPin = 34; 
int potYPin = 35; 

int potXValue = 0; 
int potYValue = 0; 

void setup() {
  //设置引脚模式为输出
  pinMode(motorA1, OUTPUT); 
  pinMode(motorA2, OUTPUT); 
  pinMode(motorB1, OUTPUT); 
  pinMode(motorB2, OUTPUT); 
}

void loop() {
  //读取摇杆电位器的值
  potXValue = analogRead(potXPin); 
  potYValue = analogRead(potYPin); 

  //比较摇杆电位器的值并控制车辆的运动
  if (potXValue < 1030) {
    digitalWrite(motorA1, HIGH);
    digitalWrite(motorA2, LOW);
    digitalWrite(motorB1, LOW);
    digitalWrite(motorB2, HIGH);
  } else if (potXValue > 2060) {
    digitalWrite(motorA1, LOW);
    digitalWrite(motorA2, HIGH);
    digitalWrite(motorB1, HIGH);
    digitalWrite(motorB2, LOW);
  } else if (potYValue < 1030) {
    digitalWrite(motorA1, HIGH);
    digitalWrite(motorA2, LOW);
    digitalWrite(motorB1, HIGH);
    digitalWrite(motorB2, LOW);
  } else if (potYValue > 2060) {
    digitalWrite(motorA1, LOW);
    digitalWrite(motorA2, HIGH);
    digitalWrite(motorB1, LOW);
    digitalWrite(motorB2, HIGH);
  } else {
    digitalWrite(motorA1, LOW);
    digitalWrite(motorA2, LOW);
    digitalWrite(motorB1, LOW);
    digitalWrite(motorB2, LOW);
  }
}
