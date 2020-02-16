const int SW_pin = 3;
const int X_pin = 0;
const int Y_pin = 1;
const int A_buttonPin = 11;
const int B_buttonPin = 10;
const int C_buttonPin = 9;

void setup(){
  pinMode(SW_pin, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(A_buttonPin, INPUT_PULLUP);
  pinMode(B_buttonPin, INPUT_PULLUP);
  pinMode(C_buttonPin, INPUT_PULLUP);
  
}


void loop(){
  int A_buttonState = digitalRead(A_buttonPin);
  int B_buttonState = digitalRead(B_buttonPin);
  int C_buttonState = digitalRead(C_buttonPin);
  int SW_state = digitalRead(SW_pin);

  if (A_buttonState == LOW){
    Serial.print("Button A Pushed");
    Serial.print("\n");
  }

  if (B_buttonState == LOW){
    Serial.print("Button B Pushed");
    Serial.print("\n");
  }
      
  if (C_buttonState == LOW){
    Serial.print("Button C Pushed");
    Serial.print("\n");
  }
  
  if (SW_state == LOW){
    Serial.print("JoyStick Button Pushed");
    Serial.print("\n");
  }

  Serial.print("X-axis");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis");
  Serial.print(analogRead(Y_pin));
  Serial.print("\n\n");

  delay(500);
}
