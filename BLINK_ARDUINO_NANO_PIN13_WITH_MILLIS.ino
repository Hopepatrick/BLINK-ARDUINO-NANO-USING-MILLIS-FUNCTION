/*
Blink Arduino pin 13 (port 5) using millis() function 
Author: Patrick NDAYIKUNDA
Date 20/11/2021
Institution: IPRC KIGALI
*/

unsigned long previous = 0;
unsigned long current_time = 0;
uint32_t interval = 100;
bool ledstate = false;

void setup() {
  // put your setup code here, to run once:
  DDRB |= (1<<5);

}

void loop() {
  // put your main code here, to run repeatedly:

current_time = millis();
if(current_time - previous > interval){
  previous = current_time;
  ledstate = !ledstate;
  if(ledstate){
    PORTB |= (1<<5);
  }
  else{
    PORTB &= (~(1<<5));
  }
}

}
