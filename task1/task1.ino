#define BTN 33
#define red 4
#define green 5
#define yellow 19
#define blue 22 

void setup() {
  pinMode (BTN, INPUT);
  Serial.begin(115200);
  
  pinMode(RED,OUTPUT);
  pinMode(GRN,OUTPUT);
  pinMode(YLW,OUTPUT);
  pinMode(BLU,OUTPUT);
}


void loop ()  {
  static int count=0 ;
  static int prev_btn = LOW;
  int btn = digitalRead(BTN);
  
  // detect button pressed moment
  if (btn == HIGH && prev_btn == LOW) {
    count++;
    Serial.println(count);
    
  pinMode(RED,OUTPUT);
  pinMode(GRN,OUTPUT);
  pinMode(YLW,OUTPUT);
  pinMode(BLU,OUTPUT);

  if (count ==1) {
    digitalWrite(RED,HIGH);
  }
  else if (count == 2){
     digitalWrite(GRN,HIGH);
  } else if (count == 3){
     digitalWrite(YLW,HIGH);
  } else if (count == 4){
     digitalWrite(BLU,HIGH);

 }
 if( count >=5){
      count =0;

  // save current btn state into a varible to be used in next loop 
  prev_btn = btn;
  delay(100);
}

