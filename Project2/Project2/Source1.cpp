/*
Yezen Hijazin , 4th period, 9/25/2017
Problem number 2: Take_In_Data
Ask specific questions to get specific answers
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
#include "Source1.h"
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Define and Assign your variable(s)

	bool liftBro;
	bool supplements;
	bool whey;

	cout << "Do you even lift bro?\n  1 :hell yeah \n  0 :No I'm weak \n Response: ";
	cin >> liftBro;
	if (liftBro) {
		cout << "You take supplements? \n 1: yah bro I get artifical gains \n 0: nah I'm all natural/not fake \n Response: ";
		cin >> supplements;
	}
	else {
		cout << "Lemme hook you up with some whey then! \n 1: YEET bouta get some GAINZ \n 0: HA no, I don't need help to get gainz \n Response: ";
		cin >> whey;
	}

	int benchMax;
	cout << "Whats your bench max? \n Response: \n";
	cin >> benchMax;

	char C;
	cout << "Weak... Do you hate leg day? \n A. YES \n B. Nope legs are life \n C.  I have acccepted my chicken legs \n D. You're giving me flashbacks with that question please stop \n Response: ";
	cin >> C;
	if (C == 'A' || C == 'a') {
		cout << "How can you hold your weight? \n";
	}
	else if (C == 'B' || C == 'b') {
		cout << "Are you a cyborg or something? \n";
	}
	else if (C == 'C' || C == 'c') {
		cout << "I'm pretty sure KFC has bigger chicken legs than yours. \n";
	}
	else if (C == 'D' || C == 'd') {
		cout << "Me too, lol. \n";
	}
	else{
		cout << "¿Tu habla ingles? \n"; 
	} 
	double gymMembership; 
	cout << "How much do you pay for your gym membership? \n Response: "; 
	cin >> gymMembership;
// Display Text
	pause(); // pauses to see the displayed text
}