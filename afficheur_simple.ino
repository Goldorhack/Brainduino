
// Buttons states
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

// Compteur
int ValeurSEG = 0;

// Digit
int A   = 11;
int B   = 10;
int C   = 9;
int D   = 8;

// Leds :
// Vert
int bled1 = 7;
// Orange
int bled2 = 6;
// Rouge
int bled3 = 5;

// Boutons :
// Valider
int b1 = 4;
// Moins
int b2 = 3;
// Plus
int b3 = 2;

// Good anwser
int PASSWORD = 2 ;

void setup()
{     
    // Declare all the pins as OUTPUT pins

  // Button
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);

  // Leds
  pinMode(bled1, OUTPUT);
  pinMode(bled2, OUTPUT);
  pinMode(bled3, OUTPUT);

  // Digit Screen
  pinMode(A , OUTPUT);
  pinMode(B  , OUTPUT);
  pinMode(C  , OUTPUT); 
  pinMode(D, OUTPUT);

}

void loop()
{


 // read the state of the pushbutton value:
   buttonState1 = digitalRead(b1);
   buttonState2 = digitalRead(b2);
   buttonState3 = digitalRead(b3);

   // Check if button if checked
   // Valider
   if (buttonState1 == HIGH){     
    if ( ValeurSEG == PASSWORD ) {
       digitalWrite(bled1, HIGH);
       delay (10000);
       digitalWrite(bled1, LOW);
     } else {
       digitalWrite(bled3, HIGH);
       delay (10000);
       digitalWrite(bled3, LOW);
    }  
   }

   // Moins
   if (buttonState2 == HIGH){    
     ValeurSEG -- ;
   }

   // Plus
   if (buttonState3 == HIGH){     
     ValeurSEG ++ ;
   }

   // Create Digit Display
    if (ValeurSEG == 0) {
  digitalWrite(A , LOW); 
  digitalWrite(B , LOW);   
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  delay(1000) ;
  }
  
    if (ValeurSEG == 1) {
  digitalWrite(A , HIGH); 
  digitalWrite(B , LOW);   
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  delay(1000) ;
  }
  
    
    if (ValeurSEG == 2) {
  digitalWrite(A , LOW); 
  digitalWrite(B , HIGH);   
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  delay(1000) ;
  }
  
    
    if (ValeurSEG == 3) {
  digitalWrite(A , HIGH); 
  digitalWrite(B , HIGH);   
  digitalWrite(C , LOW);
  digitalWrite(D , LOW);
  delay(1000) ;
  }
    
}


