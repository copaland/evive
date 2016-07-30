/*
 * userDefinedFunctions.cpp
 *
 *  Created on: Jul 30, 2016
 *      Author: dhrups
 */
 #include "userDefinedFunctions.h"

// the setup function runs once when you selct the user defined function
void setup_user_def_fun(){
  // put your setup code here, to run once:
}

void user_def_fun_1(){
	// put your user defined (custom) code here, to run repeatedly:
	Serial.println("Hurray! User Def Fun 1 Works");
}

void user_def_fun_2(){
	// put your user defined (custom) code here, to run repeatedly:
	Serial.println("Hurray! User Def Fun 2 Works");
}

void user_def_fun_3(){
	// put your user defined (custom) code here, to run repeatedly:
}

void user_def_fun_4(){
	// put your user defined (custom) code here, to run repeatedly:
}

void user_def_fun_5(){
	// put your user defined (custom) code here, to run repeatedly:
}

void add_user_def_fun(uint8_t funNum){
  setup_user_def_fun();
  if(funNum==1) actionAdd(user_def_fun_1, 1);
  else if(funNum==2)  actionAdd(user_def_fun_2, 1);
  else if(funNum==3)  actionAdd(user_def_fun_3, 1);
  else if(funNum==4)  actionAdd(user_def_fun_4, 1);
  else if(funNum==5)  actionAdd(user_def_fun_5, 1); 
}

///////////////////// Write other sub functions below this ////////////////////
