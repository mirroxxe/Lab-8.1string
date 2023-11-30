#include <iostream>
#include <string>
using namespace std;

bool containsAllLetters(const string& input) {
    string target = "while";

    for (char letter : target) {
        if (input.find(letter) == string::npos) {
            return false;
        }
    }

    return true;
}

string replaceWhile(string input) {
    size_t pos = 0;

    while ((pos = input.find("while", pos)) != string::npos) {
        input.replace(pos, 5, "**");
        pos += 2; 
    }

    return input;
}

int main() {
    string inputString;

    cout << "Print line: ";
    getline(cin, inputString);

    if (containsAllLetters(inputString)) {
        cout << "String contains all letters from 'while'.\n";
    }
    else {
        cout << "String doesn`t contain all letters with 'while'.\n";
    }

    string result = replaceWhile(inputString);

    cout << "Result: " << result << endl;

    return 0;
}
