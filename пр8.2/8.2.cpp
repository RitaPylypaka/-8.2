#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string FormatNumbers(const string& s) {
    stringstream result;

    size_t start = 0, finish;

    while ((start = s.find_first_of("0123456789", start)) != string::npos) {
        finish = s.find_first_not_of("0123456789", start + 1);
        if (finish == string::npos)
            finish = s.length();

        string number = s.substr(start, finish - start);

        size_t firstNonZero = number.find_first_not_of('0');
        if (firstNonZero != string::npos) {
            number = number.substr(firstNonZero);
        }
        else {
            number = "0";
        }

        result << number;

        if (finish < s.length() && s[finish] == '.') {
            result << ".";
            finish++;
        }

        start = finish;
    }

    return result.str();
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    string formattedString = FormatNumbers(str);

    cout << "Formatted string: " << formattedString << endl;

    return 0;
}
