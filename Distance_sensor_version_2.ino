const int trigPin = 9;
const int echoPin = 10;
const int GreenLED = 8;
const int RedLED = 7;
const int buzzerPin = 6;

long duration;
int distance;

void setup() {
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(GreenLED, OUTPUT);
 pinMode(RedLED, OUTPUT);
 pinMode(buzzerPin, OUTPUT);
}

void loop() {
  //Ultrasonic sensor algo
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = duration * 0.034 / 2;

if (distance < 10){
  tone(buzzerPin, 1000);
  digitalWrite(RedLED, HIGH);
  digitalWrite(GreenLED, LOW);  
  } else {noTone(buzzerPin);
  digitalWrite(GreenLED, HIGH);
  digitalWrite(RedLED, LOW);
  }
}


