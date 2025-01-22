#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Function to generate a random password
string generatePassword(int length) {
    const string characters =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"  // Uppercase letters
        "abcdefghijklmnopqrstuvwxyz"  // Lowercase letters
        "0123456789"                  // Numbers
        "!@#$%^&*()-_=+[]{}<>?/|";    // Special characters

    string password = "";

    // Seed the random number generator
    srand(time(0));

    for (int i = 0; i < length; i++) {
        int index = rand() % characters.size(); // Random index
        password += characters[index];         // Append random character
    }

    return password;
}

int main() {
    int length;

    cout << "Enter the desired password length: ";
    cin >> length;

    if (length < 4) {
        cout << "Password length should be at least 6 for better security!" << endl;
        return 1;
    }

    string password = generatePassword(length);
    cout << "Generated Password: " << password << endl;

    return 0;
}
