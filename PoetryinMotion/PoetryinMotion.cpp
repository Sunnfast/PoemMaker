
#include <iostream>
#include <string>
using namespace std;


int makePoem()
{
	int lineNum;
	lineNum = 1;


	string poemBody;
	poemBody = "";

	string lineContent;

	string intro = "This is a poem builder created by Simone Christen for the 'Poetry in Motion' assignment.";
	string poemInstruction = "Create a poem by inputting one line at a time, to move onto the next line hit the enter key. ";
	string lineInstruction = "Currently composing for line number ";
	string quitInstruction = "Type 'quit' and enter to quit the program and to see your completed poem. ";

	cout << intro << "\n" << poemInstruction << "\n";

	while (lineContent != "Quit" && lineContent != "quit") // checking for quit command
	{
		poemBody += lineContent + " " + "\n";	// appending line to poem body, situated here so that it doesn't append quit command to poem
		cout << lineInstruction << lineNum << "\n" + quitInstruction + "\n";
		getline(cin, lineContent);
		lineNum++;
	}
	cout << "\nHere is your poem:" << "\n"; // displaying the assembled poem
	cout << poemBody;
	cout << "\nQuitting... \nWriting consistently is a great method for improving your craft. Good luck!!";
	return 0;
}


int main()
{
	makePoem();

}


