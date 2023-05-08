#include<SoftwareSerial.h>
SoftwareSerial mySerial(3,2);

int led1=4;
int led2=5;
int led3=6;
int led4=7;
int buzzer=13;

int pir1=8;
int pir2=9;
int pir3=10;
int pir4=11;
int pir5=12;

int val1=0;
int val2=0;
int val3=0;
int val4=0;
int val5=0;

void setup(){
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
 pinMode(buzzer,OUTPUT);
 pinMode(buzzer, OUTPUT);

pinMode(pir1,INPUT);
pinMode(pir2,INPUT);
pinMode(pir3,INPUT);
pinMode(pir4,INPUT);
pinMode(pir4,INPUT);

Serial.begin(9600);

}

void message(){
   
}

void updateSerial(){
   delay(500);
   while(Serial.available())
   {
      mySerial.write(Serial.read());
   }
  while(mySerial.available())
{
   Serial.write(mySerial.read());
}
}

void north(){
    vall=digitalRead(pirl);
    if(vall==HIGH){
        digitalWrite(led1,HIGH);
        //digitalWrite(buzzer,HIGH);
        mySerial.begin(9600);
        Serial.println("Intializing..");
        delay(1000);
        mySerial.println("AT");
        updateSerial();
        mySerial.println("AT+CMGF=1");
        updateSerial();
        mySerial.println("AT+CMGS=\"+918875124824\"");
        updateSerial();
        mySerial.print("Motion detected in NORTH Zone");
        updateSerial();
        mySerial.write(26);
    }
    else{
        digitalWrite(led1,LOW);
        digitalWrite(buzzer,LOW);
    }
}

void east(){
    val2=digitalRead(pir2);
    if(val2==HIGH){
        digitalWrite(led2,HIGH);
        //digitalWrite(buzzer,HIGH);
        mySerial.begin(9600);
        Serial.println("Initializing..");
        delay(1000);
        mySerial.println("AT");
        updateSerial();
        mySerial.println("AT+CMGF=1");
        updateSerial();
        mySerial.println("AT+CMGS=\"+918875124824\"");
        updateSerial();
        mySerial.print("Motion detected in EAST Zone");
        updateSerial();
        mySerial.write(26);
    }
    else{
        digitalWrite(led2,LOW);
        digitalWrite(buzzer,LOW);
    }
}

void south(){
    val3=digitalRead(pir3);
    if(val3==HIGH){
        digitalWrite(led3,HIGH);
        //digitalWrite(buzzer,HIGH);
        mySerial.begin(9600);
        Serial.println("Initializing..");
        delay(1000);
        mySerial.println("AT");
        updateSerial();
        mySerial.println("AT+CMGF=1");
        updateSerial();
        mySerial.println("AT+CMGS=\"+918875124824\"");
        updateSerial();
        mySerial.print("Motion detected in SOUTH Zone");
        updateSerial();
        mySerial.write(26);
    }
    else{
        digitalWrite(led3,LOW);
        digitalWrite(buzzer,LOW);
    }
}

void west(){
    val4=digitalRead(pir4);
    if(val4==HIGH){
        digitalWrite(led4,HIGH);
        //digitalWrite(buzzer,HIGH);
        mySerial.begin(9600);
        Serial.println("Initializing..");
        delay(1000);
        mySerial.println("AT");
        updateSerial();
        mySerial.println("AT+CMGF=1");
        updateSerial();
        mySerial.println("AT+CMGS=\"+918875124824\"");
        updateSerial();
        mySerial.print("Motion detected in WEST Zone");
        updateSerial();
        mySerial.write(26);
    }
    else{
        digitalWrite(led4,LOW);
        digitalWrite(buzzer,LOW);
    }
}

void up(){
     val5=digitalRead(pir5);
    if(val5==HIGH){
        digitalWrite(buzzer,HIGH);
        mySerial.begin(9600);
        Serial.println("Initializing..");
        delay(1000);
        mySerial.println("AT");
        updateSerial();
        mySerial.println("AT+CMGF=1");
        updateSerial();
        mySerial.println("AT+CMGS=\"+918875124824\"");
        updateSerial();
        mySerial.print("Motion detected in SKY");
        updateSerial();
        mySerial.write(26);
    }
    else{
        // digitalWrite(led5,LOW);
        digitalWrite(buzzer,LOW);
    }
}

void loop(){
    north();
    east();
    south();
    west();
    up();
}