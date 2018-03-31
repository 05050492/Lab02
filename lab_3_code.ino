const byte total =8;
const byte LED[] = {8,9,10,11,12,13,14,15};
byte i;
void setup()
{
  
  for (i=0;i<total;i++) 
  {
  pinMode(LED[i],OUTPUT);
  }
  pinMode(6,INPUT);
}
  
  
  
void loop()  
{

  boolean val = digitalRead(6);
  if(val){
     for (i=0;i<total;i++) 
    {
      digitalWrite(LED[i], LOW);
    }
      delay(200);
    for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], HIGH);
    }
      delay(200);
    for (i=0;i<total;i++)
    {  
      digitalWrite(LED[i], LOW);
    }
    delay(200);
    for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], HIGH);
    }
      delay(200);
    for (i=total-1;i>0;i--)
    {
      digitalWrite(LED[i],LOW);
      delay(200);
      digitalWrite(LED[i], HIGH);
      delay(200);
    }
  for (i=0;i<total;i++) 
    {
      digitalWrite(LED[i], LOW);
    }
      delay(200);
    for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], HIGH);
    }
      delay(200);
    for (i=0;i<total;i++)
    {  
      digitalWrite(LED[i], LOW);
    }
    delay(200);
    for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], HIGH);
    }
      delay(200);
  
  for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], LOW);
      delay(200);
      digitalWrite(LED[i], HIGH);
      delay(200);
    }  
  }
  else
  {
     for (i=0;i<total;i++)
    {
     digitalWrite(LED[i],LOW);
      delay(500);
      digitalWrite(LED[i], HIGH);
      delay(500);
    }
     for (i=total-1;i>0;i--)
    {
      digitalWrite(LED[i],LOW);
      delay(500);
      digitalWrite(LED[i], HIGH);
      delay(500);
    }
  }
}