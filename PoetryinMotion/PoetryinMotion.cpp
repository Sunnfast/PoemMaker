// PoetryinMotion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int lineNum;
	lineNum = 1;

	string intro = "This is the poem builder created by Simone Christen for the 'Poetry in Motion' assignment.";

	string poemBody;
	poemBody = "";

	string lineContent;
	string poemInstruction = "Create a poem by inputting one line at a time. ";
	string lineInstruction = "Currently composing for line number ";
	string quitInstruction = "Type 'quit' and enter to quit the program. ";
	string enterInstruction = "Hit any other key to continue.";

	cout << intro << "\n" << poemInstruction << quitInstruction << "\n" << enterInstruction << "\n";

	getline(cin, lineContent);

		while(lineContent != "Quit" && lineContent != "quit") // checking to see if user wants to quit
			{
				for (lineNum = 1; lineNum < 4; lineNum++) // loop to build poem line by line
				{
				cout << lineInstruction << lineNum << "\n" + quitInstruction + "\n";
				getline(cin, lineContent);
					while (lineContent == "quit" || lineContent == "Quit") // conditional to check for "quit"
						{
							cout << "\nQuitting... \n";
							return 0;
						}
					poemBody += lineContent + " " + "\n";	// appending line to poem body
				}
				cout << "Here is your poem:" << "\n"; // displaying the assembled poem
				cout << poemBody;
				break;
			}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

/*Requirements:

makePoem function :

1) Give the user instructions to enter a poem one line at a time. X
2) The instruction should include a way to end the loop. For example, it might display something like "Type quit to exit".
3) Create a user - controlled loop that gets one line of the user's input and concatenates it to a string variable each time through the loop.  X
4) Remember to include the endline character (std::endl or "\n"). Note: You must do this in a loop that gets only one line from the user in the body of the loop.  
note: If the body of the loop gets more than one line, you will lose points. X
Hint: You must concatenate the lines together using an approach similar to an accumulator variable (variable is set equal to itself plus something new), but with strings.  

Remember, this assignment is intended to test your understanding and use of string concatenation.  
If you need help with that, check out the module topic "String Concatenation" in this week's module.
Display the entire poem. */

