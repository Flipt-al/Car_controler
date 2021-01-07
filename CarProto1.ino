/*
  Car
  Runs a motor for 10 minutes and then off for 1.
 */
 

int Motor  = A0;//make  A0 motor

 
void setup() {  // the setup routine runs once when you press reset:             
 pinMode(Motor, OUTPUT);  // initialize the Anolog pin as an output.
}


void loop() // the loop routine runs over and over again forever:
{
  digitalWrite(Motor,HIGH);// turn the motor on (HIGH is the voltage level)
  delay(600000);// wait for 10 min
  digitalWrite(Motor,LOW); // turn off motor
  delay(60000);//wait 1 min
}
