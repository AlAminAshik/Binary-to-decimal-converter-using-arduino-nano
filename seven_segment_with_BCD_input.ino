//declaring output for the seven segment display
const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;

//declaring input for the switches
 int A = 9;
 int B = 10;
 int C = 11;
 int D = 12;

void setup() {
//setting pins for output
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
//setting pins for input and removing float value
pinMode(A, INPUT_PULLUP);
pinMode(B, INPUT_PULLUP);
pinMode(C, INPUT_PULLUP);
pinMode(D, INPUT_PULLUP);
}

void loop() {
//storing value from switch
int Astate = digitalRead(A);
int Bstate = digitalRead(B);
int Cstate = digitalRead(C);
int Dstate = digitalRead(D);

//HIGH = not pressed
//LOW = pressed

//0001 ; This is will display 1
if (Astate == HIGH && Bstate == HIGH && Cstate == HIGH && Dstate == LOW) {
   digitalWrite(a, LOW);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(d, LOW);
   digitalWrite(e, LOW);
   digitalWrite(f, LOW);
   digitalWrite(g, LOW);
}
//0010 ; This is will display 2
  else if (Astate == HIGH && Bstate == HIGH && Cstate == LOW && Dstate == HIGH){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);

  }
//0011 ; This is will display 3
else  if (Astate == HIGH && Bstate == HIGH && Cstate == LOW && Dstate == LOW) {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(e, LOW);
   digitalWrite(f, LOW);
   digitalWrite(g, HIGH);
  }
//0100 ; This is will display 4
  else if (Astate == HIGH && Bstate == LOW && Cstate == HIGH && Dstate == HIGH){
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);    
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
//0101 ; This is will display 5
else if (Astate == HIGH && Bstate == LOW && Cstate == HIGH && Dstate == LOW) {
   digitalWrite(a, HIGH);
   digitalWrite(b, LOW);
   digitalWrite(c, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(e, LOW);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH);   
}
//0110 ; This is will display 6
  else if (Astate == HIGH && Bstate == LOW && Cstate == LOW && Dstate == HIGH){
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);    
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
//0111 ; This is will display 7
else  if (Astate == HIGH && Bstate == LOW && Cstate == LOW && Dstate == LOW) {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(d, LOW);
   digitalWrite(e, LOW);
   digitalWrite(f, LOW);
   digitalWrite(g, LOW);
  }
//1000 ; This is will display 8
else if (Astate == LOW && Bstate == HIGH && Cstate == HIGH && Dstate == HIGH) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
}
//1001 ; This is will display 9
  else if (Astate == LOW && Bstate == HIGH && Cstate == HIGH && Dstate == LOW){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

//0000 ; This is will display 0
else if(Astate == HIGH && Bstate == HIGH && Cstate == HIGH && Dstate == HIGH){
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH); 
   digitalWrite(d, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(f, HIGH);
   digitalWrite(g, LOW); 
  }
 delay(10); //wait for 10 millisecond
  }
