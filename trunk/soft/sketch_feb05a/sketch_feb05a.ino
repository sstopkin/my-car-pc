int led7=7;
int led8=8;
int led9=9;
int led10=10;
int data1;
void setup(){
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(2,OUTPUT);
  Serial.begin(19200);
  Serial.println("i");
}

void loop() {
    char data[4];
    int i;
    for (i=0; i<4; i++)
    {
        while (!(Serial.available())) /* ����� �������� delay */ ;
        data[i] = (char) (Serial.read());
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

    handle(data[0], numb);
}

void beep(unsigned int val){
  analogWrite(2,30);
  delay(val);
  analogWrite(2,0);
}

void handle(char letter, int number)
{
    switch(letter)
    {
    case 'F':
        /* ��������� F */
        digitalWrite(led8,HIGH);     
        analogWrite(led10,number);
        break;
    case 'B':

        /* ��������� B */
        break;
    case 'R':
      digitalWrite(led8,LOW);
      analogWrite(led10,number);
      /* ��������� R */
    break;
    case 'I':
        if (number==1){
          beep(100);
        }
    break;
    case 'S':
        /* ��������� S */
        if (number<250){
          digitalWrite(led7,HIGH);
          analogWrite(led9,250-number);
        }
        if (number>=250){
          digitalWrite(led7,LOW);
          analogWrite(led9,number-250);
        }
        break;
    }
}
