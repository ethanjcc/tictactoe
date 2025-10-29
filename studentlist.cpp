#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

//makes struct for student
struct Student {
  char fname[20];
  char lname[20];
  int id;
  float gpa;
};
//called when adding a new student to the list
//chatgpt helped with using vector for the function
void inputData(vector<Student*>& students) {
  //chatgpt helped with new Student
  Student* newStudent = new Student;
  cout << "Enter first name: " << endl;
  cin >> newStudent->fname;
  cout << "Enter last name: " << endl;
  cin >> newStudent->lname;
  cout << "Enter id: " << endl;
  cin >> newStudent->id;
  cout << "Enter gpa: " << endl;
  cin >> newStudent->gpa;
  students.push_back(newStudent);
}
//prints all students in the list
void printData(const vector<Student*>& students) {
  //chatgpt helped with const auto
  for (const auto& student : students) {
    cout << "first name: " << student->fname << endl;
    cout << "last name: " << student->lname << endl;
    cout << "id: " << student->id << endl;
    cout << "gpa: " << student->gpa << endl;
  }
}
//deletes a student selected by the user
void deleteData(vector<Student*>& students) {
  int id;
  cout << "enter id to delete" << endl;
  cin >> id;
  for (auto it = students.begin(); it != students.end(); ++it) {
    if ((*it)->id == id) {
      delete *it;
      students.erase(it);
      cout << "student deleted" << endl;
      return;
    }
  }
  //students.clear();
}
//calling all of the above functions and a way to quit the program
void calls() {
  vector<Student*> students;
  char userinput[20];
  while (true) {
    cout << "enter command: ";
    cin >> userinput;
    if (strcmp(userinput, "ADD") == 0) {
      inputData(students);
    }
    else if (strcmp(userinput, "PRINT") == 0) {
      printData(students);
    }
    else if (strcmp(userinput, "DELETE") == 0) {
      deleteData(students);
    }
    else if (strcmp(userinput, "QUIT") == 0) {
      for (auto student : students) delete student;
      students.clear();
      break;
    }
    else {
      cout << "invalid" << endl;
    }
    
  }
}
//calling calls
int main() {
  calls();
  return 0;
}
