int ir = 3;
int led = 2;

int ledState = LOW;
int irState = HIGH;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(ir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, ledState);
  if(digitalRead(ir) == LOW && irState == HIGH){
    ledState = HIGH;
    irState = LOW;
    delay(500);
  } else if(digitalRead(ir) == LOW && irState == LOW){
    ledState = LOW;
    irState = HIGH;
    delay(500);
  }
  
}
