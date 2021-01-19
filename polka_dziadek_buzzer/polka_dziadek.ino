#define  BUZZER_PIN 8 //definicja pinu buzzera

//nutki!
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_H4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_H5  988
#define NOTE_C6  1047

//tempo 122 bmp
#define NOTE_SIXTEENTH      122                 // milliseconds
#define NOTE_32             NOTE_SIXTEENTH/2    // milliseconds
#define NOTE_EIGHTH         2*NOTE_SIXTEENTH    // milliseconds
#define NOTE_DOTTED_EIGHTH  3*NOTE_SIXTEENTH    // milliseconds
#define NOTE_QUARTER        4*NOTE_SIXTEENTH    // milliseconds
#define NOTE_DOTTED_QUARTER 6*NOTE_SIXTEENTH    // milliseconds
#define NOTE_HALF           8*NOTE_SIXTEENTH    // milliseconds
#define NOTE_DOTTED_HALF    12*NOTE_SIXTEENTH   // milliseconds
#define NOTE_WHOLE          16*NOTE_SIXTEENTH   // milliseconds
#define NOTE_DOTTED_WHOLE   24*NOTE_SIXTEENTH   // milliseconds


void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

  //muza
  intro();
  first();
  first();
}

void loop() {}

void play(unsigned int frequency, unsigned long duration) {
  tone(BUZZER_PIN, frequency);
  delay(duration);
  noTone(BUZZER_PIN);
}

void play_Pause(int czas) {
  noTone(BUZZER_PIN);
  delay(czas);
}

void intro(){
  play(NOTE_G4, NOTE_QUARTER);
  play(NOTE_E4, NOTE_QUARTER);
}

void first(){
  play(NOTE_E4, NOTE_SIXTEENTH);
  play(NOTE_G4, NOTE_SIXTEENTH);
  play(NOTE_C5, NOTE_SIXTEENTH);
  play(NOTE_E5, NOTE_SIXTEENTH);
  play(NOTE_G4, NOTE_SIXTEENTH);
  play(NOTE_C5, NOTE_SIXTEENTH);
  play(NOTE_E5, NOTE_SIXTEENTH);
  play(NOTE_G5, NOTE_SIXTEENTH);

  play(NOTE_E5, NOTE_EIGHTH);
  play(NOTE_E5, NOTE_EIGHTH);
  play(NOTE_E5, NOTE_EIGHTH);

  play(NOTE_C5, NOTE_SIXTEENTH);
  play(NOTE_G5, NOTE_SIXTEENTH);

  play(NOTE_E5, NOTE_EIGHTH);

  play(NOTE_C5, NOTE_SIXTEENTH);
  play(NOTE_G5, NOTE_SIXTEENTH);

  play(NOTE_E5, NOTE_EIGHTH);

  play(NOTE_C5, NOTE_SIXTEENTH);
  play(NOTE_E5, NOTE_SIXTEENTH);

  play(NOTE_G5, NOTE_SIXTEENTH);
  play(NOTE_F5, NOTE_SIXTEENTH);
  play(NOTE_D5, NOTE_SIXTEENTH);
  play(NOTE_H4, NOTE_SIXTEENTH);

  play(NOTE_G4, NOTE_EIGHTH);

  play(NOTE_H4, NOTE_SIXTEENTH);
  play(NOTE_A4, NOTE_SIXTEENTH);

  play(NOTE_G4, NOTE_SIXTEENTH);
  play(NOTE_H4, NOTE_SIXTEENTH);
  play(NOTE_D5, NOTE_SIXTEENTH);
  play(NOTE_F5, NOTE_SIXTEENTH);
  play(NOTE_H4, NOTE_SIXTEENTH);
  play(NOTE_D5, NOTE_SIXTEENTH);
  play(NOTE_F5, NOTE_SIXTEENTH);
  play(NOTE_G5, NOTE_SIXTEENTH);

  play(NOTE_H5, NOTE_EIGHTH);
  play(NOTE_H5, NOTE_EIGHTH);
  play(NOTE_H5, NOTE_EIGHTH);

  play(NOTE_F5, NOTE_SIXTEENTH);
  play(NOTE_G5, NOTE_SIXTEENTH);

  play(NOTE_H5, NOTE_32);
  play(NOTE_C6, NOTE_32); 

  play(NOTE_C6, NOTE_SIXTEENTH);
  play(NOTE_F5, NOTE_SIXTEENTH);
  play(NOTE_G5, NOTE_SIXTEENTH);

  play(NOTE_H5, NOTE_32);
  play(NOTE_C6, NOTE_32);

  play(NOTE_C6, NOTE_SIXTEENTH);
  play(NOTE_H4, NOTE_SIXTEENTH);
  play(NOTE_C6, NOTE_SIXTEENTH);

  play(NOTE_A5, NOTE_SIXTEENTH);
  play(NOTE_G5, NOTE_SIXTEENTH);
  play(NOTE_E5, NOTE_SIXTEENTH);
  play(NOTE_C5, NOTE_SIXTEENTH);
  
  play(NOTE_G4, NOTE_EIGHTH);
  
  play(NOTE_G4, NOTE_SIXTEENTH);
  play(NOTE_F4, NOTE_SIXTEENTH);
}
