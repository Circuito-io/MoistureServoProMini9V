#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	servo.attach(SERVO_SIGNAL_PIN);
	Serial.println("start");
  
}

void loop() 
{	
	if(soilMoisture.read() > 400)
	{
		Serial.println("High moisture");
		servo.write(150);
		delay(500);
		servo.write(30);
	
    
	}
		
	delay(20);
}
