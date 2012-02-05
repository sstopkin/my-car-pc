int led9=9;
int led10=10;
int data1;
void setup(){
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  Serial.begin(19200);
  Serial.println("i");
}

void loop() {
    char data[4];
    int i;
    for (i=0; i<4; i++)
    {
        while (!(Serial.available())) /* можно добавить delay */ ;
        data[i] = (char) (Serial.read());
        //data[i] = Serial.read();
        //Serial.print("I received: ");
        Serial.println(data[i], DEC);
        Serial.println(data[i]);
        if (i==0)
        {
            if (data[i]<'A' || data[i]>'Z') return;
        }
        else {
            if (data[i]<'0' || data[i]>'9') return;
            
        }
    }
    int numb = 0;
    for (i=1; i<4; i++)
    {
        numb = numb * 10 + ((int) data[i]-'0');
    }
    if (numb>255) {
      numb=255;      
    }
    handle(data[0], numb);
}

void handle(char letter, int number)
{
    switch(letter)
    {
    case 'F':
        /* обработка F */
        analogWrite(led9,number);
        break;
    case 'B':
        /* обработка B */
        analogWrite(led9,number);
        break;
    case 'R':
        /* обработка R */
        break;
    case 'S':
        /* обработка S */
        analogWrite(led10,number);
        break;
    }
}
