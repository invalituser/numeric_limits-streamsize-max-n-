#include <iostream>
#include <limits>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;  // Input something wrong (e.g., a letter)

    cin.clear(); // Clears the error state
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clears the entire input buffer

    cout << "Now enter a proper number: ";
    cin >> num;

    cout << "You entered: " << num << endl;
    return 0;
}
