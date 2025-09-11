//no global variables
// no strings
// yoyu should include <iostream> not stdio

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//main loop
int main() {
  //setting variables
  int guesses = 1;
  bool game = true;
  //random number from chatgpt
  int lower = 0, upper = 100;
  int randNumInRange = (rand() % (upper - lower + 1)) + lower;
  //looping the game
  while (game == true) {
    cout << "guess a number between 0 and 100: " << endl;
    int input = 0;
    char letterInput = 'a';
    cin >> input;
    srand(time(0));
    //if you guess the number correctly
    if (input == randNumInRange) {
      cout << "You guessed the number" << endl;
      cout << "guesses: " << guesses << endl;
      cout << "want to play again? y/n" << endl;
      cin >> letterInput;
      //if you want to play again
      if (letterInput == 'y') {
        randNumInRange = (rand() % (upper - lower + 1)) + lower;
	guesses = 1;
      }
      //if you dont want to play again
      else if (letterInput == 'n') {
        game = false;
      }
    }
    //if your guess is too high
    if (input > randNumInRange) {
      guesses += 1;
      cout << "too high" << endl;
    }
    //if your guess is too low
    else if (input < randNumInRange) {
      guesses += 1;
      cout << "too low" << endl;
    }
  }
}
