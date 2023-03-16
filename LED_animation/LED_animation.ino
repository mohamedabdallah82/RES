const int led[8]={3,4,5,6,7,8,9,10};

int d1=1000;
int d2=500;

void setup() {
  
  for(int i=0 ; i<8 ; i++)
    pinMode(led[i],OUTPUT);

}

void loop() {
  
  //Flashing Leds
  for(int i=0 ; i<8 ; i++)
      digitalWrite(led[i],HIGH);
  delay(d2);
  for(int j=0 ; j<8 ; j++)
      digitalWrite(led[j],LOW);
  delay(d1);
  
  //Shifting left leds
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(d2);
    for(int j=0 ; j<8 ; j++)
      digitalWrite(led[j],LOW);  
  }
  delay(d1);

  //Shifting right leds
  for(int i=7 ; i>=0 ; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(d2);
    for(int j=0 ; j<8 ; j++)
      digitalWrite(led[j],LOW);
  }
  delay(d1);
  
  //2 LEDs converging & diverging
  for(int i=0 ; i<7 ; i++){
    if(i==3){
      delay(d2);
      continue;
    }
    digitalWrite(led[i],HIGH);
    digitalWrite(led[i+1],HIGH);
    digitalWrite(led[7-i],HIGH);
    digitalWrite(led[6-i],HIGH);
    delay(d2);
    for(int j=0 ; j<8 ; j++)
      digitalWrite(led[j],LOW);
  }
  delay(d1);

  //Ping Pong
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(d2);
    for(int j=0 ; j<8 ; j++)
      digitalWrite(led[j],LOW);  
  }
  for(int i=6 ; i>=0 ; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(d2);
    for(int j=0 ; j<8 ; j++)
      digitalWrite(led[j],LOW);
  }
  delay(d1);

  //Snake
  for(int i=0 ; i<8 ; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(d2);
  }  
  for(int j=0 ; j<8 ; j++)
      digitalWrite(led[j],LOW);  
  delay(d1);
  
}
