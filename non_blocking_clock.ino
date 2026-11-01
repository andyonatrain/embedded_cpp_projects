unsigned long currentMillis = 0;
unsigned long lastTick = 0;
unsigned long tickCount = 0;
const unsigned long stepInterval = 125;
int stepIndex = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  currentMillis = millis();
  if (currentMillis - lastTick >= stepInterval) {
    tickCount++;
    Serial.print("Tick ");
    Serial.println(tickCount);
    lastTick += stepInterval;
    Serial.print("Step: ");
    Serial.println(stepIndex);
    if (stepIndex <= 14) {
      stepIndex++;
    }
      else {
        stepIndex = 0;
      }
  }

}
