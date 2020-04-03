void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  //s0
  digitalWrite(2, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  //s1
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  //s2
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  //s3
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  //s4
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  //s5
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  //Next s0
}