/*
Yezen Hijazin- 9/21/2017- 4th Period
Display Text
Introduction to C++ Visual Studios
Printing out statements to Console from Code
*/

// Libraries
#include <iostream> // cout, cin, endl, <<, >> 
#include <conio.h> // pause() fun access to _getch() and _kbhit()
// Namespaces
using namespace std;

// Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
/*
// First Words (my name and period)
void First Words(my name and period) () {
	char Y = 'Y'
	char E = 'E'
	char Z = 'Z'
	char N = 'N'
	char H = 'H'
	char I = 'I'
	char J = 'J'
	char A = 'A' 
	char 4 = '4'
		cout << "Ye" << z << e << "n" << noel << "d!" << endl;
	cout << Y << e << z << e << n << " " << H << i << j << a << z << i << n << end1;
	pause();// pause() so we can see the text
	return; // ends program
}
*/

// MAIN
void main() {
	char H = 'H';
	char e = 'e';
	char l = 'l';
	char o = 'o';
	char W = 'W';
	char r = 'r';
	char d = 'd';
	char noel = 'l';
	// Display Text "Hello World"
	char pSymbol = '4';
	int pNum = 4;
	cout << "Yezen Hijazin, " << pNum << "th Period." << endl;
	cout << "He" << noel << noel << "o Wor" << noel << "d!" << endl;
	cout << "Yezen Hijazin, " << pSymbol << "th Period." << endl;
	cout << H << e << l << l << o << " " << W << o << r << l << d << "!" << endl;
	pause();// pause() so we can see the text
	return; // ends program
}