// main.cpp

#include <iostream>
#include <string>
#include <vector>
#include "functions.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    int numStudents;

    cout << "Enter number of students: ";
    cin >> numStudents;

    vector<Student> students;

    for (int i = 1; i <= numStudents; i++) {
        Student s = readStudent(i);
        students.push_back(s);
    }

    sortByName(students);       
    printSummary(students);

    return 0;
}
