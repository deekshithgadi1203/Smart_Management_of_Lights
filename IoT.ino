


#define ldr 13
#define led1 3
#define led2 5
#define led3 6
#define ir1 7
#define ir2 8
#define ir3 9
void setup() {
  pinMode(ldr, INPUT);

  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
 
}

void loop() {
 int sens = digitalRead(ldr);
 int val1 = digitalRead(ir1);
 int val2 = digitalRead(ir2);
 int val3 = digitalRead(ir3);
 if (sens == HIGH)
 {
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  if (val1 == LOW)
  {
    analogWrite(led1, 255);
    analogWrite(led2, 10);
    analogWrite(led3, 10);
    delay(3000);
  }
  else if (val2 == LOW)
  {
    analogWrite(led1, 10);
    analogWrite(led2, 255);
    analogWrite(led3, 10);
    delay(3000);  
  }
 
  else if (val3 == LOW)
  {
   analogWrite(led1, 10);
   analogWrite(led2, 10);
   analogWrite(led3, 255);
   delay(3000);  
  }
  else
  {  
  analogWrite(led1, 10);
  analogWrite(led2, 10);
  analogWrite(led3, 10);
  delay(100);
  }
 }
 else
 {
 
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  delay(100);
 }
}
