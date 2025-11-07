#include <iostream>
#include <cstring>


using namespace std;

main() {
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

    }
  }
}

void addData() {
  char addinput[20];
  cout << "what do you want: ";
  cin >> addinput;
  if (strcmp(addinput, "videogame") == 0) {
    video* v = new Video(get t; get y; get p; get r;);
    cout << "enter title: " << endl;
    cin >> v->t;
    cout << "enter year: " << endl;
    cin >> v->y;
    cout << "enter publisher: " << endl;
    cin >> v->p;
    cout << "enter rating: " << endl;
    cin >> v->r;
    vect.push_back(v);
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
    vect.push_back(m);
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
    vect.push_back(mm);
  }
  }
  }
}
