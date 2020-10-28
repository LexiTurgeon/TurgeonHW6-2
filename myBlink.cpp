//Third File
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

#include "derek_LED.h"

int main(int argc, char* argv[]){
   if(argc!=4){
        cout << "Usage is makeLEDs <command>" << endl;
        cout << "   command is one of: on, off, flash or status" << endl;
        cout << " e.g. makeLEDs flash" << endl;
   }
   cout << "Starting the makeLEDs program" << endl;

   string cmd = argv[1];
   
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   int num = stoi(argv[2]);
   //for(int i=0; i<=3; i++){
      if(cmd=="on"){
	leds[num].turnOn();
      }
      else if(cmd=="off"){
	leds[num].turnOff();
      }
      else if(cmd=="flash"){
	leds[num].flash("100"); //default is "50"
      }
      else if(cmd=="status"){
	leds[num].outputState();
      }
      else if(cmd=="blink"){
	int numberofBlinks = stoi(argv[3]);
	leds[num].blink(numberofBlinks);
	}
      else{ cout << "Invalid command!" << endl; }
   //}
   cout << "Finished the makeLEDs program" << endl;
   return 0;
}

