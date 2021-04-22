// Arduino pin numbers
//const int DO_pin = 2;
const int AO_pin = 0;
int sound;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;

 
void setup() {
  //pinMode(DO_pin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {

  delay(20);
 
    sound = analogRead(AO_pin);

    if (sound >= 0) {
    digitalWrite(led1, HIGH);
    }
  delay(20);
    if (sound >= 34) {
    digitalWrite(led2, HIGH);
  }
    if (sound < 34) {
    digitalWrite(led2, LOW);
  }
  delay(20);
    if (sound >= 37) {
    digitalWrite(led3, HIGH);
  }
    if (sound < 37) {
    digitalWrite(led3, LOW);
  }
  delay(10);
    if (sound >= 1014) {
    digitalWrite(led4, HIGH);
  }
    if (sound < 1014) {
    digitalWrite(led4, LOW);
  }
  delay(10);
    if (sound >= 1016) {
    digitalWrite(led5, HIGH);
  }
    if (sound < 1016) {
    digitalWrite(led5, LOW);
  }
  
  //Serial.print(digitalRead(DO_pin));
  //Serial.print("----");
  Serial.println(sound);
  
}
