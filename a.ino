#define BLYNK_TEMPLATE_ID "TMPLBtXFKFd-"
#define BLYNK_DEVICE_NAME "vary"
#define BLYNK_AUTH_TOKEN "ljqImcS4PBLRps5Ih8ShVKZ3InO4xuVw"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "Vempati";
char pass[] = "Anirudh@8935";

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  if(value == 1)
  {

    digitalWrite(D7, LOW);
    Serial.println("On");
       
  }

  if(value == 0)
  {

    digitalWrite(D7, HIGH);
    Serial.println("Off");
       
  }


  
}


void setup() {
  // put your setup code here, to run once:

   Serial.begin(115200);
   Blynk.begin(auth, ssid, pass);
   pinMode(D7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


   Blynk.run();
   
}
