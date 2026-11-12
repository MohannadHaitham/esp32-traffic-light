const int redPin = 15;
const int yellowPin = 16;
const int greenPin = 17;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Phase 1: Red bulb lights up for 5 seconds, the rest stay closed
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(5000);

  // Phase 2: Yellow bulb lights up for 10 seconds, the rest stay closed
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(10000);

  // Phase 3: Green bulb lights up for 30 seconds, the rest stay closed
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(30000);
}
