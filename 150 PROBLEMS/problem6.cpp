/**Identifying Palindromes**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, String Manipulation  
   **Description**: Write a program to check if a string or number is a palindrome.  
   **Example**:  
   Input: `string = "radar"`  
   Output: `Palindrome`  
   Explanation: "radar" reads the same backward as forward.*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string word, rev = "";
    cout << "Enter a word to check if it is palindrome or not: ";
    cin >> word;
    
    int length = word.length();

    // Fixing the reverse logic, starting from the last character
    for(int i = length - 1; i >= 0; i--){
        rev += word[i];
    }

    // Display original word and reversed word (optional)
    cout << "Original word: " << word << endl;
    cout << "Reversed word: " << rev << endl;

    // Check if the original word and reversed word are the same
    if (word == rev) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }

    return 0;
}
