#include <Wire.h> // Must include Wire library for I2C
#include <SparkFun_MMA8452Q.h> // Includes the SFE_MMA8452Q library
MMA8452Q accel; // Default MMA8452Q object create. (Address = 0x1D)
void setup(){
  Serial.begin(9600);
  accel.init();
  }

void loop(){

  accel.read();
  Serial.println();
  Serial.print(accel.cx, 3);
  Serial.print(",");
  Serial.print(accel.cy, 3);
  Serial.print(",");
  Serial.print(accel.cz, 3);
  Serial.println();
//  Serial.print(accel.x, 3);
//  Serial.print(",");
//  Serial.print(accel.y, 3);
//  Serial.print(",");
//  Serial.print(accel.z, 3);
  
  }
