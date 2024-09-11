#include "Arduino.h"
uint8_t pin = 12;
// The setup function is called once at startup of the sketch
void setup() {
	Serial.begin(921600);
	pinMode(LED_BUILTIN, OUTPUT);
	pinMode(pin, INPUT);
}

// The loop function is called in an endless loop
void loop() {
//	if (Serial.available()) {
//	    Serial.println(Serial.readString());
//	}
//	digitalWrite(LED_BUILTIN, HIGH);
//	Serial.println("HIGH");
//	delay(1000);
//	digitalWrite(LED_BUILTIN, LOW);
//	Serial.println("LOW");
//	delay(1000);

	if (digitalRead(pin) == HIGH) {
	    Serial.println("HIGH");
	} else {
	    Serial.println("LOW");
	}
	delay(1000);
}
