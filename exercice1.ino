int led = 13; 
void setup() { 
    pinMode(led, OUTPUT);      
} 
// Définit la pin 13 comme pin de sortie 
// Boucle qui s'exécute à l’infini : 
void loop() { 
    digitalWrite(led, HIGH);   // Allume la LED 
    delay(1000);               
    digitalWrite(led, LOW);    
    delay(1000);               
} 