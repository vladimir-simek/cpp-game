#include <iostream>

using namespace std;

string username = "default";
int userAge = 0;

int main() {
    string lineSkip = "//////////////////////////////////////";

    cout << "Welcome to the game you will forget asap!" << endl;
    cout << lineSkip << endl;
    cout << "Write here your name:";
    if (username == "default") {
        cin >> username;
    }
    cout << lineSkip << endl;
    if (userAge == 0) {
        bool isValid = false;
        while (!isValid) {
            try {
                cout << "Write here your age:";
                cin >> userAge;
                if (userAge < 18) {
                    cout << "You have to be at least 18 years old!" << endl;
                    isValid = false;
                    cin >> userAge;
                } else if (userAge <= 0 || userAge >= 100) {
                    cout << "Please, write here your real age." << endl;
                    isValid = false;
                    cin >> userAge;
                } else {
                    isValid = true;
                }
            } catch (exception) {
                cout << "Please, enter a valid input." << endl;
                break;
            }

        }
    }


    return 0;
}
