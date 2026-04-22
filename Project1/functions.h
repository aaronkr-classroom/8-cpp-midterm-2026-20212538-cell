#pragma once
// functions.h

#ifndef GUARD_functions_h
#define GUARD_functions_h

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>        

using std::string;
using std::vector;
using std::map;
using std::istream;
using std::ostream;

struct Student {
    string name;
    vector<int> scores;
    double average;
};

double calculateAverage(vector<int> grades);
Student readStudent(int studentNum);
void printSummary(const vector<Student>& students);
void sortByName(vector<Student>& students);     

#endif

/*
[ChatGPT 사용 기록]

Q: "#pragma once랑 #ifndef GUARD 차이가 뭐야? 같이 써도 돼?"

A:
둘 다 헤더 중복 include 방지 목적입니다.
#pragma once는 컴파일러가 자동 처리하는 간단한 방식이고,
#ifndef GUARD는 표준 방식으로 모든 컴파일러와 호환됩니다.
같이 쓰면 이중으로 보호되어 문제 없습니다.

예시:
#pragma once
#ifndef GUARD_functions_h
#define GUARD_functions_h
// 헤더 내용
#endif
*/
