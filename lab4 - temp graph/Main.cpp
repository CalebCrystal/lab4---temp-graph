/*
Caleb Crystal 

C++

LAB4 - Temperature Output

Description: Design and write a C++ program that inputs a series of hourly temperature
from a file, and outputs a bar chart (using stars) of the temperatures. The temperature
should be printed to the left of the corresponding bar, and there should be a heading
that gives the scale of the chart. The range of temperatures should be from -30 to 120.
Because it is hard to display 150 characters on the screen, you should have each star
represent a range of 3 degrees. That way, the bars will be at most 50 characters wide.
Use meaningful variable names, proper indentation, and appropriate comments.
Thoroughly test the program using your own data sets. Make sure to vet the values from
the input file. Use good programming practices including, classes, comments, and
pre/post conditions.

*/




# include "header.h" //includes header file with most of the #include statments 
using namespace std; // using namespace std 


int main() 
{
	temp t; // class temp is connected to t
	ifstream inFile; // knows a infile is coming 
	inFile.open("tempfile.int"); // opens infile 
	int temp1; // activates temp1 variable
	
	cout << setw(47) << "Hourly Temp Graph * = 3 degrees in F" << endl << setw(11) << "-30" << 
		setw(6) << "-10" << setw(3) << "0" << setw(4) << "10" << setw(6) << "30" << setw(6) << "50" << setw(7) << "70" <<
		setw(8) << "90" << setw(10) << "120" << endl; // outputs the header of the graph, the scale and reference points 


	while (true) { // while true the loop will run untill a break in the code 
		inFile >> temp1; // infile will read the first data value and store that as data1 
		t.settemp1(temp1); // sets temp1 in class 
		
		if (!inFile) // if failed to open file at any point outputs "failed to open" and exits the loop
		{
			cout << "Failed to Open File...";
			return 9999;
		}

		if (inFile.eof()) { // checks if the file is at its end if so it breaks the code and outputs 
			cout << "the end of file has been reached."; // this 
			break;  // Ends the loop when the end of the file is reached.
		}

		

		t.starPrint(); // if the first two conditions are not meet than the while loop will continue here and calls star print

		temp1 = 0; // once done with printing stars resets temp1 to 0 and restarts untill the end of file has been reached 
	}

	inFile.close(); // closes in file 
	return 0; // returns zero 
}
