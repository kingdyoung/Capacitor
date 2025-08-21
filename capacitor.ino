const int capPin = 32;
const int dischargePin = 33;

void setup() {
  Serial.begin(115200);
  pinMode(dischargePin, OUTPUT);
  digitalWrite(dischargePin, LOW);
}

void loop() {
  digitalWrite(dischargePin, HIGH);
  delay(100);
  digitalWrite(dischargePin, LOW);
  
  int reading = analogRead(capPin);
  float voltage = (reading * 3.3) / 4095;
  
  Serial.print("Reading: ");
  Serial.print(reading);
  Serial.print(" Voltage: ");
  Serial.println(voltage);
  
  delay(1000);
}