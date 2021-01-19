#include <LiquidCrystal.h> // załączenie biblioteki liquid
#define BUZZER_PIN 8 //definicja pinu buzzera

//nutki!
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392 
#define NOTE_A4  440
#define NOTE_H4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698

//tempo
#define NOTE_SIXTEENTH      150                 // milliseconds
#define NOTE_EIGHTH         2*NOTE_SIXTEENTH    // milliseconds
#define NOTE_DOTTED_EIGHTH  3*NOTE_SIXTEENTH    // milliseconds
#define NOTE_QUARTER        4*NOTE_SIXTEENTH    // milliseconds
#define NOTE_DOTTED_QUARTER 6*NOTE_SIXTEENTH    // milliseconds
#define NOTE_HALF           8*NOTE_SIXTEENTH    // milliseconds
#define NOTE_DOTTED_HALF    12*NOTE_SIXTEENTH   // milliseconds
#define NOTE_WHOLE          16*NOTE_SIXTEENTH   // milliseconds
#define NOTE_DOTTED_WHOLE          24*NOTE_SIXTEENTH   // milliseconds   

//setup wyswietlacza
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN, OUTPUT); //ustawienie pinu buzzera na wyjscie
  
  //inicjalizacka wyświetlacza
  lcd.begin(16, 2);
  lcd.clear();
  //piosenka!
  
  //tekst
  lcd.setCursor(0, 0);
  lcd.print("Cicha Noc");
  lcd.setCursor(0, 1);
  lcd.print("Swieta Noc");
  //tekst
  
  play(NOTE_G4, NOTE_DOTTED_QUARTER);
  play(NOTE_A4, NOTE_EIGHTH);
  play(NOTE_G4, NOTE_QUARTER);
  play(NOTE_E4, NOTE_DOTTED_HALF);         //cicha noc

  play_Pause(390);
  
  play(NOTE_G4, NOTE_DOTTED_QUARTER);
  play(NOTE_A4, NOTE_EIGHTH);
  play(NOTE_G4, NOTE_QUARTER);
  play(NOTE_E4, NOTE_DOTTED_HALF);        //święta noc
  
  //tekst
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Pokoj Niesie");
  lcd.setCursor(0, 1);
  lcd.print("Ludzia wszem");
  //tekst
  
  play_Pause(390);

  play(NOTE_D5, NOTE_HALF);
  play(NOTE_D5, NOTE_QUARTER);
  play(NOTE_H4, NOTE_DOTTED_HALF);        //pokoj niesie

  play_Pause(390);

  play(NOTE_C5, NOTE_HALF);
  play(NOTE_C5, NOTE_QUARTER);
  play(NOTE_G4, NOTE_DOTTED_HALF);       //ludziom wszem
  
  //tekst
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("A u zlubka");
  lcd.setCursor(0, 1);
  lcd.print("Matka swieta");
  //tekst
  
  play_Pause(390);

  play(NOTE_A4, NOTE_HALF);
  play(NOTE_A4, NOTE_QUARTER);
  play(NOTE_C5, NOTE_DOTTED_QUARTER);
  play(NOTE_H4, NOTE_EIGHTH);
  play(NOTE_A4, NOTE_QUARTER);

  play(NOTE_G4, NOTE_DOTTED_QUARTER);
  play(NOTE_A4, NOTE_EIGHTH);
  play(NOTE_G4, NOTE_QUARTER);
  play(NOTE_E4, NOTE_DOTTED_HALF);
  
  //tekst
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Czuwa sama");
  lcd.setCursor(0, 1);
  lcd.print("Usmiechnieta");
  //tekst
  
  play_Pause(390);
  
  
  play(NOTE_A4, NOTE_HALF);
  play(NOTE_A4, NOTE_QUARTER);
  play(NOTE_C5, NOTE_DOTTED_QUARTER);
  play(NOTE_H4, NOTE_EIGHTH);
  play(NOTE_A4, NOTE_QUARTER);

  play(NOTE_G4, NOTE_DOTTED_QUARTER);
  play(NOTE_A4, NOTE_EIGHTH);
  play(NOTE_G4, NOTE_QUARTER);
  play(NOTE_E4, NOTE_DOTTED_HALF);
  
  //tekst
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nad dzieciatka");
  lcd.setCursor(0, 1);
  lcd.print("snem");
  //tekst
  
  play_Pause(390);

  play(NOTE_D5, NOTE_HALF);
  play(NOTE_D5, NOTE_QUARTER);
  play(NOTE_F5, NOTE_DOTTED_QUARTER);
  play(NOTE_D5, NOTE_EIGHTH);
  play(NOTE_H4, NOTE_QUARTER);
  play(NOTE_C5, NOTE_DOTTED_HALF);
  play(NOTE_E5, NOTE_DOTTED_HALF);

  //tekst
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nad dzieciatka");
  lcd.setCursor(0, 1);
  lcd.print("snem");
  //tekst
  
  play_Pause(390);

  play(NOTE_C5, NOTE_QUARTER);
  play(NOTE_G4, NOTE_QUARTER);
  play(NOTE_E4, NOTE_QUARTER);
  play(NOTE_G4, NOTE_DOTTED_QUARTER);
  play(NOTE_F4, NOTE_EIGHTH);
  play(NOTE_D4, NOTE_QUARTER);
  play(NOTE_C4, NOTE_DOTTED_WHOLE);  
}

void loop() {
}

void play(unsigned int frequency, unsigned long duration) {
  tone(BUZZER_PIN, frequency);
  delay(duration);
  noTone(BUZZER_PIN);
}

void play_Pause(int czas){
   noTone(BUZZER_PIN);
   delay(czas);
}
