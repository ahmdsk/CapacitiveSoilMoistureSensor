const int sensor_pin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float moisture_percentage;
  moisture_percentage = (100.00 - ((analogRead(sensor_pin) / 1023.00) * 100.00));
  
  Serial.print("Soil Moisture (%): ");
  Serial.print(moisture_percentage);
  Serial.println("%");

  delay(1000);
}
