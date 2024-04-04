void setup() {
  for (int i = 2; i<=8; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  sevseg(1,1,1,1,1,1,0); // 0
  sevseg(0,1,1,0,0,0,0); // 1
  sevseg(1,1,0,1,1,0,1); // 2
  sevseg(1,1,1,1,0,0,1); // 3
  sevseg(0,1,1,0,0,1,1); // 4
  sevseg(1,0,1,1,0,1,1); // 5
  sevseg(1,0,1,1,1,1,1); // 6
  sevseg(1,1,1,0,0,0,0); // 7
  sevseg(1,1,1,1,1,1,1); // 8
  sevseg(1,1,1,1,0,1,1); // 9
}

void sevseg(bool a,bool b,bool c,bool d,bool e,bool f,bool g) {
  digitalWrite(2, a);
  digitalWrite(3, b);
  digitalWrite(4, c);
  digitalWrite(5, d);
  digitalWrite(6, e);
  digitalWrite(7, f);
  digitalWrite(8, g);
  delay(1000);
}
