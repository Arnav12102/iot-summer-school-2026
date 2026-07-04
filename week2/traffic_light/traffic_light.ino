// Traffic Light Controller

int red = 13;
int yellow = 12;
int green = 11;
int button = 7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop()
{
  // Check if pedestrian button is pressed
  if (digitalRead(button) == LOW)
  {
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);

    Serial.print(millis());
    Serial.println(" ms : Pedestrian Crossing - RED");

    delay(8000);
  }

  // RED Light
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);

  Serial.print(millis());
  Serial.println(" ms : RED");

  delay(5000);

  // YELLOW Light
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);

  Serial.print(millis());
  Serial.println(" ms : YELLOW");

  delay(2000);

  // GREEN Light
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);

  Serial.print(millis());
  Serial.println(" ms : GREEN");

  delay(4000);
}
