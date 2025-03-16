void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

}
  void dash(){
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                      //Delay for a dash
  digitalWrite(LED_BUILTIN, LOW);   
  delay(700);      

  }
void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);                       // delay for a dot
  digitalWrite(LED_BUILTIN, LOW);
  delay(700);
}
void morsecode(String massege){
  
  int i = 0;
  //loop runs untill the end of the text input
  while (i<massege.length()){
  char c= massege[i];
  switch (c)
  { //This part can be designed to contain all the letters of the alphebet
    case 'D': dash();dot();dot(); break;
    case 'O' : dash(); dash(); dash(); break;
    case 'N' : dash(); dot(); break;
  }
  
  i++;}
}
// the loop function runs over and over again
void loop() {
 // morse code will be shown for whatever word that input here
  morsecode("DON");
  // delay between massege repeat 
  delay(2000);
  
