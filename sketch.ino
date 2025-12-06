unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
const long interval1 = 500;
const long interval2 = 1500;

void loop() {
    unsigned long currentMillis = millis();
    
    if (currentMillis - previousMillis1 >= interval1) {
        previousMillis1 = currentMillis;
        // Toggle LED1
    }
    
    if (currentMillis - previousMillis2 >= interval2) {
        previousMillis2 = currentMillis;
        // Toggle LED2
    }
}