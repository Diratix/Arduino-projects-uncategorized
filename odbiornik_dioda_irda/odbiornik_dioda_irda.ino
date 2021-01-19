#include <IRremote.h>

#define irda 2
#define led 13
#define powerbtn 0x20DF10EF  

String odczyt;
IRrecv irrecv(irda);
decode_results results;
int btnvalue;
int isactive;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(led, OUTPUT);
  isactive = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  if(irrecv.decode(&results)){
    btnvalue = results.value;
    irrecv.resume();
  }
  if(btnvalue  == 4335 && isactive == 0){
    digitalWrite(led, HIGH);
    btnvalue = 0;
    isactive = 1;
  }
  if(btnvalue  == 4335 && isactive == 1){
    btnvalue = 0;
    digitalWrite(led, LOW);
    isactive = 0;
  }
  Serial.println(btnvalue);
  Serial.println(isactive);
  delay(500);
}
