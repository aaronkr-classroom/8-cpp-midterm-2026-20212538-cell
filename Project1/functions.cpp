// functions.cpp

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>        
#include "functions.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::sort;            

double calculateAverage(vector<int> grades) {
    int total = 0;

    for (int i = 0; i < grades.size(); i++) {
        total += grades[i];
    }

    return (double)total / grades.size();
}

Student readStudent(int studentNum) {
    Student s;

    cout << "\n== Student " << studentNum << " ==" << endl;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter 3 scores: ";
    for (int i = 0; i < 3; i++) {
        int score;
        cin >> score;
        s.scores.push_back(score);
    }

    s.average = calculateAverage(s.scores);

    return s;
}

void printSummary(const vector<Student>& students) {
    cout << "\n--- Grade Summary ---\n" << endl;

    for (int i = 0; i < students.size(); i++) {
        cout << students[i].name << ": " << students[i].average << endl;
    }
}

// 이름순 정렬 함수 (맨 아래에 추가했습니다)
bool compareByName(const Student& a, const Student& b) {
    return a.name < b.name;
}

void sortByName(vector<Student>& students) {
    sort(students.begin(), students.end(), compareByName);
}

/*
[ChatGPT 사용 기록]

Q: "vector에 요소 추가하는 방법이 뭐야?"

A:
vector에 요소를 추가할 때는 push_back()을 사용합니다.
vector<int> v;
v.push_back(10);  // v = {10}
v.push_back(20);  // v = {10, 20}

---

Q: "int 나누기 int 하면 소수가 안 나오는데 어떻게 해결해?"

A:
(double)로 캐스팅하면 소수점 결과가 나옵니다.
int total = 275;
int count = 3;
return (double)total / count;  // 91.6667

---

Q: "sort() 함수로 vector 정렬하는 방법이 뭐야?"

A:
sort()는 <algorithm> 헤더가 필요하고,
sort(시작, 끝, 비교함수) 형태로 사용합니다.
sort(students.begin(), students.end(), compareByName);

---

Q: "sort()에서 string 이름 기준으로 비교하는 함수 어떻게 써?"

A:
bool 반환형에 const 참조 매개변수 두 개를 받습니다.
bool compareByName(const Student& a, const Student& b) {
    return a.name < b.name;  // 알파벳 오름차순
}
*/
