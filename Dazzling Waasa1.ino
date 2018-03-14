byte LED[]={4,5,8,9,10,11,12,13},x=0;

void setup()
{
	for (byte i = 0; i<= 7; i++) 
    {
      pinMode(LED[i], OUTPUT);
    }
}

void loop()
{
  byte i;
  
  for(i=0;i<=7;i++)
  {
    digitalWrite(LED[i],LOW);
  }
  digitalWrite(LED[x++],HIGH);
  delay(200);
  
  if (x==8) 
  {
    x-=1;
    while(x!=0)
    {
    for(i=0;i<=8;i++)
    {
      digitalWrite(LED[i],LOW);
    }
      digitalWrite(LED[x--],HIGH);
      delay(200);
    }
  }
}