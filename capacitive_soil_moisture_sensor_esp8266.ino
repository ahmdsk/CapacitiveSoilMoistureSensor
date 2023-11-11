// Belajar Menghubungkan Sensor Kelembapan Tanah Dengan ESP8266
// dan Sensor Tanah (Soil Misture Sensor v2.0)

// Tabel Setup Alur Pin
// Sensor | ESP8266
// ----------------
// GND    | G
// VCC    | D8
// AUOT   | AO

// Kode
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
