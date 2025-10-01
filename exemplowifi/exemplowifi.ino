#include <WiFi.h>
const String SSID = "iphone";
const Strinf PSWD = "";

void setup() {
  Serial.begin(115200);
  scanLocalNetworks()
  WiFi.begin(SSID, PSWD);
  While(WiFi.status() ! = wt_CONNECTED){
    Serial.print(".");
    delay(200);
  }
  Serial.println("\nConectado!"); 
}

void loop()


void scanLocalNetworks();{
  Serial.println("Iniciando Scan de redes Wi-Fi");
 int number = WiFi.scanNetworks();  
  if (number == -1) {
    Serial.println("Erro. Não deu bom");
  } else {
    for (int net = 0; net < number; net++) {
      Serial.printf("%d - %s | %d dB\n", net, WiFi.SSID(net).c_str(), WiFi.RSSI(net));
    }
    Serial.printf("Número de redes encontradas: %d\n", number);
  }
}
