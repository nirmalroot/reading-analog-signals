void setup() {
  pinMode(8,OUTPUT);
  pinMode (9,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (analogRead(A0)>620)
  {     
    digitalWrite (8,HIGH);
    digitalWrite (8,HIGH);
    }
   else if (analogRead(A0)<620)
    {
     digitalWrite (8,LOW);
     digitalWrite (8,LOW);
      }
  Serial.println(analogRead(A0));
  delay (100);
  }
