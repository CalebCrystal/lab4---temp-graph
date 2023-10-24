#include <iostream>
#include "string"
#include "fstream"
#include <iomanip>
#include <cctype> // all #include statments 
#ifndef LAB4TEMP_H 
#define LAB4TEMP_H // defines all variables if they have not yet been defined 

class temp // creates class "temp"
{

public:

	temp(); //constructor 
	~temp(); // destructor

	void starPrint(); // makes starprint 

	void settemp1(int temp1_); // allows the temp1 to be set 

	int count; // makes count 

private:

	int temp1; // make int temp1 


};
#endif //ends the definitions 
