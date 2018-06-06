const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  }


void loop() {
  int sensorRead=analogRead(A0);
  if (sensorRead<655) {sensorRead=500;}
  else if (sensorRead>890) {sensorRead=700;}
  int ledDimming = map (sensorRead,655,890,0,255);
  analogWrite(9,ledDimming);
   Serial.println(ledDimming);
   delay (2);
}
