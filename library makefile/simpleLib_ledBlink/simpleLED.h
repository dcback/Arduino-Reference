/**********************************************
    #ifndef abc_H
    #define abc_H
    #include <Arduino.h> 
    class abc { 
       public:  functions  for main code 
           abc::abc() { } 
           abc::~abc() { }  
           functions for main code
       private: 
           variables, functions within library
    };   
************************************************/
#ifndef simpleLED_H
#define simpleLED_H

#include <Arduino.h>            // necessary for arduino codes

class simpleLED
{   public:                     // functions
        simpleLED(void) {};     // Constructor for function parameter 
        ~simpleLED(void) {};    // Constructor for function parameter 
        
        void    LED( byte pin, int times, int onTime);  // same Function var & Not _var
        boolean Switch(int digitalPin);

    private:            // variables & function within library
        byte _pin;      // must types _aaa
        int  _times;    // must types _bbb
        int  _onTime;   // must types _ccc
};

#endif
