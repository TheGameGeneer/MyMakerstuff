//Die Anleitung findest du unter: https://www.mymakerstuff.de/arduinotutorial-blinkende-led/

int led = 13;                              // Variable für Pin 13
 
 
void setup () {                            // die void- Methode wird einmal ausgeführt
 
  pinMode(led, OUTPUT);                    // definiere Pin 13 als Ausgang
 
}
 
 
void loop () {                             // die loop- Methode wird immer wieder ausgeführt
 
  digitalWrite(led, HIGH);                 // definiere Pin 13 als HIGH = 5 Volt, also mach LED an
  delay(1000);                             // mach 1000 Millisekunden, also 1 Sekunde, nichts
  digitalWrite(led, LOW);                  // definiere Pin 13 als LOW = 0 Volt, also mach LED aus
  delay(1000);                             // mach 1000 Millisekunden, also 1 Sekunde, nichts
 
}    
