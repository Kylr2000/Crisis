#include<iostream>
#include<fstream>
#include<string>

using std::cin;
using std::cout;
using std::endl;

int main() {
	std::ifstream input_file;
	input_file.open("commaseparatedvalues.txt");
	if (input_file) {
		std::string myText = "";
		while (getline(input_file, myText,',')) {
			std::cout << myText << std::endl;
		}
	}
	else {
		std::cout << "That file does not exist" << endl;

	}
	input_file.close();
	return 0;
}