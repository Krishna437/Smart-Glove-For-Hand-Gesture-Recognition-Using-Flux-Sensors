-

#include <LiquidCrystal.h>
#include <SoftwareSerial.h>


SoftwareSerial BTserial(5, 6); // RX | TX



const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
 
  lcd.begin(16, 2);
  
    BTserial.begin(9600);

  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
 pinMode(4,OUTPUT);   // LED FOR CHECKING THE FUNCTIONALITY OF THE CODE

 Serial.begin(9600);
  
}

void loop() {

  int a,b,c,d,e;
  a=analogRead(A0);
  b=analogRead(A1);
  c=analogRead(A2);
  d=analogRead(A3);
  e=analogRead(A4);
  
  Serial.print("a = ");                
   Serial.println(a);
    
    Serial.print("b = ");
   Serial.println(b);
   
   Serial.print("c = ");                         
   Serial.println(c);
   
   Serial.print("d = ");
   Serial.println(d);
    Serial.print("e = ");
   Serial.println(e);
  digitalWrite(4,HIGH);    // LED WILL HIGH IF THE CODE IS WORKING AND THE ATMEGA IS WAITING FOR THE INPUT
  
  if( ( a>200) &&( b>110 && b<175) && ( c>110 && c<175) && ( d>110 && d<175)&& ( e>110 && e<175))  //    PREDETERMINED VALUES
  {
    digitalWrite(7,HIGH);   // LED WILL BE HIGH IF THE ATMEGA RECOGNIZES AN INPUT
    
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("HELLO !");    // PRINTING CORRESPONDING VALUES TO LCD
    BTserial.println("HELLO !");  // PRINTING CORRESPONDING VALUES TO BLUETOOTH
    delay(3000);
    digitalWrite(7,LOW); 
    lcd.clear();
    
  }
    
  if( ( a>110 && a<175) && (b>110 && b<175) && (c>110 && c<175) && ( d>110 && d<175)&& ( e>200))
  {
    digitalWrite(7,HIGH);
    
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("COFFEE");
    BTserial.println("COFFEE");
    delay(3000);
    digitalWrite(7,LOW); 
    lcd.clear();
    
  }
    
  if( ( a>110 && a<175) && b>200 && (c>110 && c<175)  && (d>110 && d<175) && ( e>110 && e<175))
  {
    digitalWrite(7,HIGH);
    
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("WATER");
    BTserial.println("WATER");
    delay(3000);
    digitalWrite(7,LOW); 
    lcd.clear();
    
  }
    if( ( a>200) && b>200 && (c>110 && c<175) &&  (d>110 && d<175) &&  e>200 )
  {
    digitalWrite(7,HIGH);
    
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("THANKS");
    BTserial.println("THANKS");
    delay(3000);
    digitalWrite(7,LOW); 
    lcd.clear();
    
  }

      if( (a>110 && a<175) && b>200 && (c>200) &&  (d>110 && d<175) && (e>110 && e<175) )
  {
    digitalWrite(7,HIGH);
    
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("YES");
    BTserial.println("YES");
    delay(3000);
    digitalWrite(7,LOW); 
    lcd.clear();
    
  }

        if( (a>110 && a<175) && b>200 && (c>200) &&  (d>200) && (e>200) )
  {
    digitalWrite(7,HIGH);
    
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("NO");
    BTserial.println("NO");
    delay(3000);
    digitalWrite(7,LOW); 
    lcd.clear();
    
  }

          if( (a>110 && a<175) && b>200 && (c>200) &&  (d>200) && (e>110 && e<175) )
  {
    digitalWrite(7,HIGH);
    
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("GOODBYE");
    BTserial.println("GOODBYE");
    delay(3000);
    digitalWrite(7,LOW); 
    lcd.clear();
    
  }

            if( (a>110 && a<175) && (b>110 && b<175) && (c>200) &&  (d>200) && (e>200) )
  {
    digitalWrite(7,HIGH);
    
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("PLEASE");
    BTserial.println("PLEASE");
    delay(3000);
    digitalWrite(7,LOW); 
    lcd.clear();
    
  }
   
   
  
  
  
  delay(1000);

  


}
