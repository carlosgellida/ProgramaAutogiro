#include <BasicLinearAlgebra.h>
using namespace BLA;
#include <BNOfunctions.h>
#include <RadioPayload.h>

Matrix<4, 1> qDeseado = {1.0, 1.0, 1.0, 1.0}; 

Matrix<4, 1> qCurrent = {1.0, 1.0, 1.0, 1.0}; 

void setup() {

  Serial.begin(115200);
  
  InitialiceRadio() ;

  delay(1000) ; 

  InitialiceMPU(bno) ; 
} // setup

void loop() {

  sended = send(bno, qCurrent) ; 
  
  recieved = recieve(qDeseado);  

} // loop
