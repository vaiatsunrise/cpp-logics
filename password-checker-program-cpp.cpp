#include <iostream>
using namespace std;

int main() {
    string correctPassword = "Vaish@123";
    string input;
    int attempts = 0;

    cout << "=== Basic Password Check ===\n";
    cout << "(Note: Your input will be visible)\n";

    while (attempts < 3) {
        cout << "\nEnter Password: ";
        cin >> input;

        if (input == "open-sesame") {
            cout << "🪄 Secret Access Granted!\n";
            break;
        } else if (input == correctPassword) {
            cout << "✅ Access Granted.\n";
            break;
        } else {
            cout << "❌ Incorrect Password.\n";
            attempts++;
        }
    }

    if (attempts == 3)
        cout << "\n🚫 Access Denied. Too many wrong attempts.\n";

    return 0;
}
