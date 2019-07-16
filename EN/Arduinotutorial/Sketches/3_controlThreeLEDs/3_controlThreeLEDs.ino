//You can find the description on: https://www.mymakerstuff.com/3-control-three-leds/

int ledRot   = 13;                      // define variable for pin 13
int ledGelb  = 12;                      // define variable for pin 12
int ledGruen = 11;                      // define variable for pin 11

void setup() {

  pinMode(ledRot, OUTPUT);              //
  pinMode(ledGelb, OUTPUT);             // define pin 11,12,13 as output
  pinMode(ledGruen, OUTPUT);            //
}

void loop() {

  digitalWrite(ledRot, LOW);            //
  digitalWrite(ledGelb, LOW);           // turn every LED off
  digitalWrite(ledGruen, LOW);          //

  digitalWrite(ledRot, HIGH);           // turn the red LED on
  delay(1000);                          // wait a second

  digitalWrite(ledRot, LOW);            // turn the red LED off
  digitalWrite(ledGelb, HIGH);          // after that turn the yellow LED on
  delay(1000);                          // wait a second

  digitalWrite(ledGelb, LOW);           // turn the yellow LED off
  digitalWrite(ledGruen, HIGH);         // after that turn the green LED on
  delay(1000);                          // wait a second
}
