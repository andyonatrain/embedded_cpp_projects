unsigned long currentMillis = 0;
unsigned long lastTick = 0;
unsigned long tickCount = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  currentMillis = millis();
  if (currentMillis - lastTick >= 250) {
    tickCount++;
    Serial.print("Tick ");
    Serial.println(tickCount);
    lastTick = currentMillis;
  }

}
