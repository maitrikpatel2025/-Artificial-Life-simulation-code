#include <iostream>
#include <iomanip>

#include "menu.hpp"
#include "ant.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
  	cout << "\tPRG355 Final Project" << endl;
		cout << "\tMaitrik Patel" << endl;
    cout << "\t147497176" << endl;
    cout << "\tProf. Shahriar Khosravi, Ph.D." << endl;
    cout << "\tDate : 08/13/2020" << endl;
    cout << "\tVersion : 40 (number of trial to complete project)\n\n" << endl;
//Calls menu to get user choice to start or quit
int choice = outerMenu();
//If user wants to start the program
while (choice == 1)
{
// Variable declerations for user inputs
int rows, cols, steps, rowStart, colStart;
innerMenu(&rows, &cols, &steps, &rowStart, &colStart);
cout << "calculating Steps" << endl;
Ant ant(rowStart, colStart, rows, cols);
cout << "Proccesing Image .... " << endl;
// Execute the simulation for the specified number of steps and
// save the final 
ant.move(steps);
cout << "completed" << endl;
choice = outerMenu();
}
//Quits the program if user's initial choice was to quit
if (choice == 2)
{
cout << "Thank You and Goodbye!" << endl;
return 0;
}
return 0;

}
