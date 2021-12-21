#include<Adafruit_MLX90614.h>
#include<wire.h>
Adafruit_MLX90614 mlx=Adafruit_MLX90614
void setup();
{
 serial.begin(9600);
 mlx.begin();
 }
 void loop(){
 serial.print("Temperature: ");
 serial.print(mlx.readambientTempC());
 serial.print(mlx.readObjectTempC());
 serial.println("Celcius: ");
 
 serial.print("Temperature: ");
 serial.print(mlx.readambientTempF());
 serial.print(mlx.readObjectTempF());
 serial.println("Fahrenheit: "); 
  
  serial.println():
  delay(500);
  }
