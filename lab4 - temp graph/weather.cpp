# include "header.h" // includes header file with all #include statments 

temp::temp() //constructor 
{
	temp1 = 0; // sets temp to zero at construction
	count = 0; // sets count to zero for inital value
}

temp :: ~temp() {} // destructor 

void temp::settemp1(int temp1_) { // sets temp1 when called 
	temp1 = temp1_;
}

void temp::starPrint(){ // activates when starPrint is called 
	
		std::cout << std::setw(8); // pushes the graph over 8 spaces to allow room for the temp 
		std::cout << temp1 << ": "; // outputs the real temp before the bar 
		
		if (temp1 < -30 || temp1 > 120) { // validates the inputs to the code 
			std::cout << "data not valid"; // if not valid outputs an error message but continues with the code 
			std::cout << std::endl;
		}
		
		if (temp1 >= -30 && temp1 <= 120) { // if the number is valid takes the temp and divides the temp by three and adds
											// ten to make the negative numbers positive since you can print negative stars
			while (((temp1 / 3) + 10) > count)  // in this while statment it will continue to print stars untill the count is
												// greater than the equation 
			{
				std::cout << "*";				// outputs a star everytime the while loop is completed 
				count++;						// this adds one to the count every time 
			}
			std::cout << std::endl;				// ends the lines after the while loop is done 
			count = 0;							// resets count to zero 
		}

}