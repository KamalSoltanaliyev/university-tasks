#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

struct Student {
    string surname;
    string name;
    double average;
};

bool compare(const Student& a, const Student& b) {
    return a.average > b.average;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<Student> students;

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        Student student;
        double score1, score2, score3;
        ss >> student.surname >> student.name >> score1 >> score2 >> score3;
        student.average = (score1 + score2 + score3) / 3.0;
        students.push_back(student);
    }

    stable_sort(students.begin(), students.end(), compare);

    for (const auto& student : students) {
        cout << student.surname << " " << student.name << endl;
    }

    return 0;
}
