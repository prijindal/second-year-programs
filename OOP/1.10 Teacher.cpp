#include <iostream>
using namespace std;

class Teacher;

class Student {
  string student;
  string name;
  string regno;
  string subjects[];
  int marks;
  string log[10];
  int count_log;
  friend Teacher;

public:

  Student() {
    count_log = 0;
  }

  void update_log(string text, int id, int new_marks) {
    log[count_log] = text;
    count_log++;
  }
};

class Teacher {
  string name;
  int id;
  string department;
  string subjects[];

public:
  void update_student_marks(Student S, int new_marks) {
    S.marks = new_marks;
    S.update_log("Updated Marks", id, new_marks);
  }
};

int main() {
  
}
