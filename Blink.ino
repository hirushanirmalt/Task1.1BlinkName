
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again
void loop() {
  //The First name should be DON
  //Letter D
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                      //Delay for a dash
  digitalWrite(LED_BUILTIN, LOW);   
  delay(700);                       // space between dots and a dashes
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);                       // delay for a dot
  digitalWrite(LED_BUILTIN, LOW);
  delay(700);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1200);                      // delay between letters
  //Letter O
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);       
  digitalWrite(LED_BUILTIN, LOW);   
  delay(700); 
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);  
  digitalWrite(LED_BUILTIN, LOW);   
  delay(700); 
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);  
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1200); 
  //Letter N 
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);       
  digitalWrite(LED_BUILTIN, LOW);   
  delay(700); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);

  digitalWrite(LED_BUILTIN, LOW); //Delay before the next loop
  delay(2000);
}
