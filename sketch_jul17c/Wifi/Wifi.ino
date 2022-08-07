 #include <SoftwareSerial.h>

SoftwareSerial wifi(2, 3);
 
 void setup() {
  Serial.begin(9600);
  wifi.begin(9600);
  wifi.setTimeout(5000);
  delay(1000);
}

void loop() {
  if(Serial.available()){
    wifi.write(Serial.read());
  }
  if(wifi.available()){
    Serial.write(wifi.read());
  }
}
