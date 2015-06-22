#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
 
using namespace std;
 
int main()
{
	bool exit_test;
	exit_test = true;
	system("$MALIA_HOME/init.sh");
	while (true) {
		string input;
		cin >> input;
		cout << input;
		if (input == "goodbye") {
			exit_test = false;
			return exit_test;
		}
	}
}
