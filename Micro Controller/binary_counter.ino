int Counter = 0;
int temp=0;
int mod=0;
int b1=LOW;
int b2=LOW;
int b3=LOW;
int b4=LOW;


void setup()
{
  pinMode(3, OUTPUT);	 				//LED 1
  pinMode(4, OUTPUT);	 				//LED 2
  pinMode(5, OUTPUT);					//LED 3
  pinMode(6, OUTPUT);    				//LED 4
  
  Serial.begin(9600);
}

void loop()
{ 
  Serial.println(Counter);
  mod=Counter%2;
  temp=Counter/2;
  //Serial.println(temp);
  if(mod==1){				//LED1
  	b1=HIGH;
  }
  else{
    b1=LOW;
  }
  mod=temp%2;
  temp=temp/2;
  //Serial.println(temp);
  if(mod==1){				//LED2
  	b2=HIGH;
  }
  else{
    b2=LOW;
  }
  mod=temp%2;
  temp=temp/2;
  //Serial.println(temp);
  if(mod==1){				//LED3
  	b3=HIGH;
  }
  else{
    b3=LOW;
  }
  mod=temp%2;
  //Serial.println(temp);
  if(mod==1){				//LED4
  	b4=HIGH;
  }
  else{
    b4=LOW;
  }
  digitalWrite(3, b4);
  digitalWrite(4, b3);
  digitalWrite(5, b2);
  digitalWrite(6, b1);
  Counter++;
  delay(1000);
  if(Counter>15){
    Counter=0;
    b1=LOW;
    b2=LOW;
    b3=LOW;
    b4=LOW;
  }
}