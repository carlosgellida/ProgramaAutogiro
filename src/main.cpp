#include <Mathfunctions.h>
#include <BNOfunctions.h>
#include <RadioPayload2.h>

Matrix<4, 1> qDeseado = {1.0, 1.0, 1.0, 1.0}; 

Matrix<4, 1> qCurrent = {1.0, 1.0, 1.0, 1.0};  

unsigned long timeLast ; 

void setup() {

  Serial.begin(115200);
  
  InitialiceRadio() ;

  delay(1000) ; 

  InitialiceMPU(bno) ; 

  timeLast = micros(); 
} // setup

void loop() {

    if(micros() - timeLast > 10000){
    timeLast = micros(); 
    sended = send(bno, qCurrent) ;  
  
    recieved = recieve(qDeseado);  

  } //if time

} // loop
