#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
Student::assignDetails(int no, const char stdname) {
  studentId = no;
  strcpy(name,stdname);
}

// Display StudentId and Name
Student::display() {
  cout<<"The student ID is "<< studentId<<endl;
  cout<<"the student name is "<< name << endl;

}
