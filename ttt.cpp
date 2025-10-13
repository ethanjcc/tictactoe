#include <iostream>

using namespace std;
//checking for win conditions
bool win(char board[3][3], char move) {
  //for up and down
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == move && board[i][1] == move && board[i][2] == move) {
      return true;
    }
  }
  //for across
  for (int i = 0; i < 3; i++) {
    if (board[0][i] == move && board[1][i] == move && board[i][2] == move) {
      return true;
    }
  }
  //for diagonal
  if (board[0][0] == move && board[1][1] == move && board[2][2] == move) {
    return true;
  }
  if (board[0][2] == move && board[1][1] == move && board[2][0] == move) {
    return true;
  }
  return false;
}

int main() {
  int xwins = 0;
  int owins = 0;
  char letterInput = 'a';
  //  chatgpt helped with making board
  bool running = true;
  char move = 'X';
  // makes 3 by 3 board
  char board[3][3] = {{'_', '_', '_'}, {'_', '_', '_'}, {'_', '_', '_'}};
  while (running) {
    cout << "  1   2   3" << endl;
    for (int i = 0; i < 3; i++) {
      cout << (char)('a' + i) << " ";
      for (int j = 0; j < 3; j++) {
	cout << board[i][j] << "   ";
      }
      cout << endl;
    }

    cout << "choose a move" << endl;
    char row, col;
    cin >> row >> col;
    int rowIdx = row - 'a';
    int colIdx = col - '1';
    //chatgpt helped with this if statement
    // checks where the move is made
    if (rowIdx >= 0 && rowIdx < 3 && colIdx >= 0 && colIdx < 3 && board[rowIdx][colIdx] == '_') {
      board[rowIdx][colIdx] = move;
      
    } else {
      cout << "invalid move, try again" << endl;
      continue;
    }

    //if you win it adds to win total
    if (win(board, move)) {
      cout << move << " wins" << endl;
      if (move == 'X') {
	xwins++;
      }
      else if (move == 'O') {
	owins++;
      }
      cout << "x total wins: " << xwins << endl;
      cout << "o total wins: " << owins << endl;
      cout << "want to play again? y/n" << endl;
      cin >> letterInput;
      //play again
      if (letterInput == 'y') {
	for (int i = 0; i < 3; i++) {
	  for (int j = 0; j < 3; j++) {
	    board[i][j] = '_';
	  }
	  cout << endl;
	}
	continue;
      }
      //end if you don't
      else if (letterInput == 'n') {
	break;
      }
    }
    
    move = (move == 'X') ? 'O' : 'X';
  }
}
