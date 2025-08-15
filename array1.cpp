#include <iostream>
using namespace std;

int main() {
    int size = 6;
    int marks[size], key, i;
    bool found = false;

    cout << "Enter the key: ";
    cin >> key;

    cout << "Enter elements of the array: ";
    for (i = 0; i < size; i++) {
        cin >> marks[i];
    }

    for (i = 0; i < size; i++) {
        if (key == marks[i]) {
            cout << "Key is found at position " << i + 1 << endl;
            found = true;
            break; // stop after finding first match
        }
        else{
        cout << "Key is not found" << endl;
    }
    }

    return 0;
}
