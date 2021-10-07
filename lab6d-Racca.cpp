// Emerson Racca
// 10/06/2021
// Lab 6d - Magic 8-Ball

/*
Modify the "Mad Libs" class notes to create a "Magic 8-Ball" app.

User types in a question and random predefined answers appear.  Let the user play again.

https://en.wikipedia.org/wiki/Magic_8-Ball
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Function Prototypes
bool runAgain(void);

int main(void) {
	srand((unsigned int) time(0)); // Solves the unsigned int error.
	string question;

	cout << "Magic 8-Ball\n";
	cout << "Ask any yes-no question, and this app will provide an answer.\n";

	// Answers taken from Wikipedia.
	string myAnswer[20] = { "It is certain.", "It is decidedly so.", "Without a doubt.", "Yes definitely.",
							"You may rely on it.", "As I see it, yes.", "Most likely.", "Outlook good.", "Yes.",
							"Signs point to yes.", "Reply hazy, try again.", "Ask again later.", "Better not tell you now.",
							"Cannot predict now.", "Concentrate and ask again.", "Don't count on it.", "My reply is no.",
							"My sources say no.", "Outlook not so good.", "Very doubtful." };

	do {
		cout << "\nEnter a question: ";
		getline(cin, question); // Value of question is not used.
		//cout << question << endl;
		cout << "          Answer: " << myAnswer[rand() % 20] << endl;
	} while (runAgain());

	return 0;
}

// Function Implementation
bool runAgain(void) {
	char userResponse;

	cout << "\nWould you like to run again (y or n)? ";
	cin >> userResponse;
	cin.ignore();

	if (userResponse == 'y')
		return(true);

	return(false);
}