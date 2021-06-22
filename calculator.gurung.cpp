/*
 * basiccalc.cpp
 *
 *  Created on: Oct 22, 2020
 *      Author: gurun
 */

#include <iostream>
#include <cmath>
#include <string>

/*
  Assingment:

  1. Add the ability to multiply two numbers. Create a multiply function to do so.
  2. Add the ability to divide two numbers. Create a divide function to do so.
     Your function should not allow division by zero.
  3. Update the current functions to support the new functionality you have added.

*/

// internal function declarations . . .
void    help_screen();
char    menu();
double multiply();
double division();
void prompt(std::string order);

/*
* main
*    Runs a command loop that allows users to
*    perform simple arithmetic.
*/

int main() {

     double result = 0.0, arg1, arg2;
     bool done = false; // Initially not done

     do {
          switch (menu()) {
            case 'A': // Addition
            case 'a':
					prompt("first");
					std::cin >> arg1;
					prompt("second");
					std::cin >> arg2;
					result = arg1 + arg2;
					std::cout << result << '\n';
					break;
            case 'S': // Subtraction
            case 's':
					prompt("first");
					std::cin >> arg1;
					prompt("second");
					std::cin >> arg2;
					result = arg1 - arg2;
					std::cout << result << '\n';
					break;
            case 'M': //multiplication
            case 'm':
					result = multiply();
            		std::cout << result << '\n';
					break;
			case 'D':
			case 'd':
					result = division();
			 // Fall through, so it prints the result
            case 'P': // Print result
            case 'p':
                 std::cout << result << '\n';
                 break;
            case 'H': // Display help screen
            case 'h':
                 help_screen();
                 break;
            case 'Q': // Quit the program
            case 'q':
                 done = true;
                 break;
          } // end-switch
     } while (!done);

} // end-main

/*
* help_screen
*     Displays information about how the program work
*     Accepts no parameters
*     Returns nothing
*/
void help_screen() {
     std::cout << "Add: Adds two numbers\n";
     std::cout << "          Example: a 2.5 8.0\n";
     std::cout << "Subtract: Subtracts two numbers\n";
     std::cout << "          Example: s 10.5 8.0\n";
	 std::cout << "Multiplication: multiply two numbers\n";
	 std::cout << "			  Example: m 10.5 3.2\n";
	 std::cout << "Division: devide two numbers\n";
	 std::cout << "           Example: m 10 5\n";
     std::cout << "Print: Displays the result of the latest operation\n";
     std::cout << "          Example: p\n";
     std::cout << "Help: Displays this help screen\n";
     std::cout << "          Example: h\n";
     std::cout << "Quit: Exits the program\n";
     std::cout << "          Example: q\n";
} // end-help_screen

/*
* menu
*    Display a menu
*    Accepts no parameters
*    Returns the character entered by the user.
*/

char menu() {
     // Display a menu
     std::cout << "=== A)dd S)ubtract M) multiplication d)division P)rint H)elp Q)uit ===\n";
     // Return the char entered by user
     char ch;
     std::cin >> ch;
     return ch;
} // end-menu
//it ask user to input the value.
void prompt(std::string order){
	std::cout << "please enter the " << order << " value: " << '\n';
}

double multiply() {
	//multiply the numbers
	double total;
	double a;
	double b;
		prompt("first");
			std::cin >> a;
		prompt("second");
			std::cin >> b;
		total = a * b;
	return total;
}// end- multiply

double division() {
	//division between two numbers
	double divinded;
	double divisor;
	double quotient;
	prompt("first");
		std::cin >> divinded;
	prompt("second");
		std::cin >> divisor;
	//std::cin >> divinded >> divisor;
	if( divisor != 0){
		quotient = divinded / divisor;
	}
	else {
		quotient = divinded;   
	}
	return quotient;
}//end- division



