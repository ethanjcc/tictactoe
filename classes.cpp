#include <iostream>
#include <cstring>

using namespace std;

class videogames {
public:
  char atitle[20];
  int ayear;
  char apublisher[20];
  float arating;
};

class music {
public:
  char btitle[20];
  char bartist[20];
  int byear;
  float bduration;
  char bpublisher;
};

class movies {
public:
  char ctitle[20];
  char cdirector[20];
  int cyear;
  float cduration;
  float crating;
};
cout << "input: ";
cin >> input;
class media : public videogames, music, movies {
  char input;
  if input == "a" {
    cout << videogames << endl;
  }
  else if input == "b" {
    cout << music << endl;
  }
  else if input == "c" {
    cout << movies << endl;
  }
};
