#include <iostream>
#include <cstring>
#include <vector>
#include "video.h"
#include "movie.h"
#include "music.h"

using namespace std;

vector<Media*> vect;

void addData;
void searchData;
void deleteData;

int main() {
  char userinput[20];
  while(true) {
    cout << "enter command";
    cin >> userinput;
    if (strcmp(userinput, "ADD") == 0) {
      addData();
    }
    else if (strcmp(userinput, "SEARCH") == 0) {
      searchData();
    }
    else if (strcmp(userinput, "DELETE") == 0) {
      deleteData();
    }
    else if (strcmp(userinput, "QUIT") == 0) {
      break;
    }
    else {
      cout << "invalid" << endl;
    }
  }


  for (Media* m : vect) {
    delete m;
  }
  return 0;
}
void addData() {
  char addinput[20];
  cout << "what do you want to add: ";
  cin >> addinput;
  if (strcmp(addinput, "videogame") == 0) {
    VideoGame* v = new VideoGame(get t; get y; get p; get r;);
    cout << "enter title: " << endl;
    cin >> v->t;
    cout << "enter year: " << endl;
    cin >> v->y;
    cout << "enter publisher: " << endl;
    cin >> v->p;
    cout << "enter rating: " << endl;
    cin >> v->r;
    v->setTitle(title);
    v->setYear(year);
    v->setPublisher(publisher);
    v->setRating(rating)
    vect.push_back(v);
  }
  else if (strcmp(addinput, "music") == 0) {
    music* m = new Music(get t; get y; get a; get d; get p;);
    cout << "enter title: " << endl;
    cin >> m->t;
    cout << "enter year: " << endl;
    cin >> m->y;
    cout << "enter artist: " << endl;
    cin >> m->a;
    cout << "enter duration: " << endl;
    cin >> m->d;
    cout << "enter publisher: " << endl;
    cin >> m->p;
    m->setTitle(title);
    m->setYear(year);
    m->setArtist(artist);
    m->setDuration(duration);
    m->setPublisher(publisher);
    vect.push_back(m);
  }
  else if (strcmp(addinput, "movie") == 0) {
    movie* mm = new Movie(get t; get y; get dd; get d; get r;);
    cout << "enter title: " << endl;
    cin >> mm->t;
    cout << "enter year: " << endl;
    cin >> mm->y;
    cout << "enter director: " << endl;
    cin >> mm->dd;
    cout << "enter duration: " << endl;
    cin >> mm->d;
    cout << "enter rating: " << endl;
    cin >> mm->r;
    mm->setTitle(title);
    mm->setYear(year);
    mm->setDirector(director);
    mm->setRating(rating);
    vect.push_back(mm);
  }
}

void searchData() {
  char searchType[20];
  cout << "Search by title or year?";
  cin >> searchType;
  if (strcmp(searchType, "title") == 0) {
    char title[20];
    cout << "enter title";
    cin.ignore();
    cin.getline(title, 20);
    bool found = false;
    for (Media* m : vect) {
      if (strcmp(m->getTitle(), title) == 0) {
	m->print();
	found = true;
      }
    }
    if (!found) {
      cout << "nothing has this title";
    }
  }
  else if (strcmp(searchType, "year") == 0) {
    int year;
    cout << "enter year";
    cin >> year;
    bool found = false;
    for (Media* m : vect) {
      if (m->getYear() == year) {
	m->print();
	found = true;
      }
    }
    if (!found) {
      cout << "nothing was in this year";
    }
  }
  else {
    cout << "invalid";
  }
}

void deleteData() {
  char deleteType[20];
  cout << "delete by title or year?";
  cin >> deleteType;

  if (strcmp(deleteType, "title") == 0) {
    char title[20];
    cout << "enter title";
    cin.ignore();
    cin.getline(title, 20);
    bool found = false;
    for (int i = 0; i < vect.size(); i++) {
      Media* m = vect[i];
      if (strcmp(m->getTitle(), title) == 0) {
	found = true;
	cout << "found item: ";
	m->print();
	delete m;
	vect.erase(vect.begin() + i);
	cout << "deleted";
	i--;
      }
    }
    if (!found) {
      cout << "not found";
    }
  }
  else if (strcmp(deleteType, "year") == 0) {
    int year;
    cout << "enter year";
    cin >> yer;
    bool found = false;
    for (int i = 0; i < vect.size(); i++) {
      Media* m = vect[i];
      if (m->getYear() == year) {
	found = true;
	cout << "found item: ";
	m->print();
	delete m;
	vect.erase(vect.begin() + i);
	cout << "deleted";
	i--;
      }
    }
    if (!found) {
      cout << "not found";
    }
  }
  else {
    cout << "invalid";
  }
}
