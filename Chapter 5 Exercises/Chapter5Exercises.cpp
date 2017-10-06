
#include "stdafx.h";
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int askNum(int &num, string &prompt) {
	cout << prompt << ": ";
	cout << "\n" << num << "\n" << endl;
	return num;
}
int askNum(string prompt = "What the fuck") {
	cout << prompt << endl;
	cout << "\nThis function is overloaded\n" << endl;
	return 0;
}
string getPromp(string &name) {
	string answer;
	cout << "Ask me a question that requires a number answer, " << name <<endl;
	cout << "Question: ";
	getline(cin, answer);
	return answer;
}
int getNum(string &name) {
	int num;
	cout << "\nOkay, " << name << ", what is your favourite number?" << endl;
	cin >> num;
	return num;
}
int main()
{
	string name;
	int num;

	cout << "What is your name?" << endl;
	cout << "Name :";
	getline(cin, name);
	string prompt = getPromp(name);
	num = getNum(name);
	cin.ignore();
	askNum(prompt);
	system("pause");
	askNum(num, prompt);
	system("pause");
	return 0;
}



