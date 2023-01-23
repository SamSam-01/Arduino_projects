#include <SoftwareSerial.h>

SoftwareSerial HC06(11,12);
 int LED1 = 2;
 int LED2 = 3;
 int LED3 = 4;
 int LED4 = 5;
 String messageRecu;

void setup() {
   Serial.begin(9600);
   HC06.begin(9600);  
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
 }
  
 void loop()
 {
     while(HC06.available())

     {
  delay(3);
 char c = HC06.read();
       messageRecu += c;
     }
     if (messageRecu.length() >0)
     {
       Serial.println(messageRecu);
       if (messageRecu == "LED1:1")     
         {digitalWrite(LED1, HIGH);}
       if (messageRecu == "LED1:0")
         {digitalWrite(LED1, LOW);}
      
       
       if (messageRecu == "LED2:1")     
         {digitalWrite(LED2, HIGH);}
       if (messageRecu == "LED2:0")
         {digitalWrite(LED2, LOW);}
      
       
       if (messageRecu == "LED3:1")     
         {digitalWrite(LED3, HIGH);}
       if (messageRecu == "LED3:0")
         {digitalWrite(LED3, LOW);}
       
       
       if (messageRecu == "LED4:1")     
         {digitalWrite(LED4, HIGH);}
       if (messageRecu == "LED4:0")
         {digitalWrite(LED4, LOW);}
       messageRecu="";
     }
 }

