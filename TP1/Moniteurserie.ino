void setup() 
{ 
    Serial.begin(9600) ;// initialisation de la communication 
    Serial.println("Communication initialisée");// envoi d'un message 
} 
void loop() 
{ 
    Serial.println("Je suis dans la boucle !”);
}