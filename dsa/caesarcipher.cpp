#include <iostream>
using namespace std;

int ischar(char c) {
    if (c >= 'a' && c <= 'z')
        return 1;  
    else if (c >= 'A' && c <= 'Z')
        return 2;  
    else if (c >= '0' && c <= '9')
        return 3;  
    else
        return 0;  
}

int main() {
    string str;
    cout << "Enter a term to cipher it: ";
    getline(cin, str);  
    
    cout << "Enter the key: ";
    int key;
    cin >> key;

    for (int i = 0; i < str.size(); i++) {
        switch (ischar(str[i])) {
            case 1: 
                str[i] = 'a' + ((str[i] - 'a' + key) % 26);
                break;
                
            case 2: 
                str[i] = 'A' + ((str[i] - 'A' + key) % 26);
                break;

            case 3: 
                str[i] = '0' + ((str[i] - '0' + key) % 10);
                break;
                
            default: 
                break;
        }
    }

    cout << "Ciphered text: " << str << endl;
    return 0;
}
