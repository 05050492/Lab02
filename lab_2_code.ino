const byte startPin = 4;
const byte endPin = 11;
void setup() 
{
     for (byte i = startPin; i<= endPin; i++) 
    {
        pinMode(i, OUTPUT);
    }
}
void loop()
{
    byte i;
  
    for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
    }
  delay(1000);
    for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, HIGH);
    }
   delay(1000);
  for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
    }
  delay(1000);
  for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, HIGH);
    }
   delay(1000);
  //亮滅兩次
  
  
    for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
         delay (100);
         digitalWrite(i,HIGH);
         delay (100);
    }//右到左
  
      for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
    }
      delay(1000);
      for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, HIGH);
    }
      delay(1000);
      for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
    }
      delay(1000);
      for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, HIGH);
    }
      delay(1000);
  //亮滅兩次
  
  
    for (i=endPin; i>= startPin; i--) 
    {
         digitalWrite(i, LOW);
         delay (100);
         digitalWrite(i, HIGH);
         delay (100);
    }//左到右
}