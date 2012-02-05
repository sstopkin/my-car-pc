int led1;
int data1;
void setup(){
  pinMode(led1,OUTPUT);
  Serial.begin(19200);
  Serial.println("i");
}

void loop{
   if (Serial.available()){ 
      data1 = Serial.read();  
      parse(data1);
   }
}

void parse(int data){
      switch (data) {
    case 1 :
      
        break;

}
