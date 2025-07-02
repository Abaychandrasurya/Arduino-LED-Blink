int LED1 = 3;
int LED2 = 4;
int LED3 = 5;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH );
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);    
  delay(300);                      
  digitalWrite(LED1, HIGH );
  digitalWrite(LED_BUILTIN, LOW );
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW);   
  delay(300);                      
  digitalWrite(LED2, HIGH );
  digitalWrite(LED1, LOW); 
  digitalWrite(LED3, LOW); 
  digitalWrite(LED_BUILTIN, LOW );  
  delay(300);                      
  digitalWrite(LED_BUILTIN, LOW );
  digitalWrite(LED2, LOW); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED3, HIGH );
  delay(300);   
}
