/**Counting Vowels and Consonants in a String**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, String Manipulation  
    **Description**: Write a program to count vowels and consonants in a given string.  
    **Example**:  
    Input: `string = "hello world"`  
    Output: `Vowels: 3, Consonants: 7`  
    Explanation: "hello world" contains 3 vowels (e, o, o) and 7 consonants (h, l, l, w, r, l, d).*/

#include<iostream>
#include<string>
using namespace std;

int main(){
  string word;
  cout<<"Enter a sentence or word to find out the number of consonants and vowels: ";
  cin>>word;
  tolower(word);
  //Alphabet checker
  for(int i=0;i<word.length();i++){
    if(!isalpha(word[i])){
      cout<<"Only type a sentence, not any other characters!!";
      return 0;
    }
  }
  //vowel consonant counter
  int vowel=0,consonant=0;
  for(int i=0;i<word.length();i++){
    char c=word[i];
    if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
      vowel++;
    else
      consonant++;
  }
  cout<<"The vowels in the sentence are: "<<vowel<<endl;
  cout<<"The consonants in the sentence are: "<<consonant<<endl;
  return 0;

  return 0;
}