#include <iostream>
#include <cstring> // For strlen function

using namespace std;

int CheckPassword(char str[], int n) {
    // At least 4 characters
    if (n < 4)
        return 0;
    
    // Starting character must not be a number
    if (str[0] >= '0' && str[0] <= '9')
        return 0;
    
    int cap = 0, num = 0;
    for (int i = 0; i < n; ++i) {
        // Must not have space or slash (/)
        if (str[i] == ' ' || str[i] == '/')
            return 0;
        
        // Counting capital letters
        if (str[i] >= 'A' && str[i] <= 'Z') {
            cap++;
        }
        
        // Counting numeric digits
        else if (str[i] >= '0' && str[i] <= '9') {
            num++;
        }
    }
    
    // At least one capital letter and one numeric digit
    if (cap >= 1 && num >= 1) {
        return 1;
    }
    
    return 0; // Default return value if conditions are not met
}

int main() {
    char Arr[20];
    cout << "Enter password: ";
    cin.getline(Arr, 20);

    int len = strlen(Arr);
    int result = CheckPassword(Arr, len);

    cout << result << endl;

    return 0;
}
