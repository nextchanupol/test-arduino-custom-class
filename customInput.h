#include <arduino.h>

class customInput{
  private:
    int _pin;
    
  public:
    //Contructor 
    customInput(int pin){
      _pin = pin;
      pinMode(_pin,INPUT);
    }

    char getStatus(){
      return 1-digitalRead(_pin);
      // SW->Activate ->1; 
    }

    char pressed(){
       if(getStatus()){
          return HIGH;
       }else{
          return LOW;
       }
    }

    char released(){
      if(getStatus()){
        return LOW;
      }else{
        return HIGH;
      }
    }

}; //end of the myInput class
