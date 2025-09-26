#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

//removing non letters/numbers from chatgpt
void remove(char* str) {
  //gets string length
  int length = std::strlen(str);
  int writeIndex = 0;
  //makes all letters lower case
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + ('a' - 'A');
    }
  }
  //removes all non non letters and non alphanumeric numbers
  for (int readIndex = 0; readIndex < length; ++readIndex) {
    if (std::isalnum(str[readIndex])) {
      str[writeIndex++] = str[readIndex];
    }
  }
  str[writeIndex] = '\0';
}

int main() {
  //get input
  cout << "write a sentence: " << endl;
  //max string length
  char str[80];
  cin.get(str, 80);
  cin.get();
  remove(str);
  //prints the string
  cout << "string: " << str << endl;
  //reverse from chatgpt
  string strReversed(str);
  reverse(strReversed.begin(), strReversed.end());
  //prints reversed string
  cout << "reversed: " << strReversed << endl;
  //checks if its a palindrome
  if (strReversed == str) {
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a palindrome" << endl;
  }
}


