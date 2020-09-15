/*
Elijah Abang
Fall 2020
1 sept
Lab 2
*/

// directives to include iostream and string keywords
#include <iostream>
#include <string>

using namespace std;
void printday1(); //directives that lets me input indentifiers 
void printday2();
void printday3();
void printday4();
void printday5();
void printC1();
void printC2();
void printC3();
void printC4();
void printSTRs1();
void printSTRs2();

const string day1 = "Monday     ";
const string day2 = "Tuesday    ";
const string day3 = "Wednesday ";
const string day4 = "Thursday   ";
const string day5 = "Friday     ";
const string C1 = "  8:00am Calculus 1";
const string C2 = "  1:00pm C++";
const string C3 = "  9.00am Engineering problems";
const string C4 = "  2:00pm classical physics";
const string STRs1 = "   *   *   *   *";
const string STRs2 = " *   *   *   *";
int main()
{

	// outputing week schedule 
	cout << day1 << C1 << C2 << endl;
	cout << day2 << C3 << C2 << endl;
	cout << day3 << C1 << C4 << endl;
	cout << day4 << C4 << endl;
	cout << day5 << C1 << endl;

	// outputting star pattern 
	cout << STRs1 << endl;
	cout << STRs2 << endl;
	cout << STRs1 << endl;
	cout << STRs2 << endl;
	cout << STRs1 << endl;
	cout << STRs2 << endl;

	return 0;
}