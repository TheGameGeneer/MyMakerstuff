int led = 13;                               // variable for Pin 13
 
 
void setup () {                             // the void- method run once
 
  pinMode(led, OUTPUT);                     // define Pin 13 as output
 
}
 
 
void loop () {                              // the loop- method run in a loop
 
  digitalWrite(led, HIGH);                  // define Pin 13 as HIGH = 5 Volt, so turn LED on
  delay(1000);                              // for 1000 milliseconds (1 second) do nothing
  digitalWrite(led, LOW);                   // define Pin 13 as LOW = 0 Volt, so turn LED off
  delay(1000);                              // for 1000 milliseconds, (1 second) do nothing
 
}    
