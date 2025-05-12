#include<iostream>
#include<cstring>
using namespace std;

struct Teacher {
    int id;
    char name[100];
    char department[100];
};

struct Student {
    int id;
    char name[100];
    int groupId;
};

struct Group {
    int id;
    char name[50];
    int year;
};

struct Subject {
    int id;
    char title[100];
    int teacherId;
};

struct GradeScale {
    int minPoints;
    int maxPoints;
    char grade[5]; 
};

struct PerformanceReport {
    int studentId;
    int subjectId;
    int score;
    char grade[5]; 
};
int main() {
    Teacher teachers[2] = {
        {1, "Petrenko V.P.", "Math"},
        {2, "Tkachuk О.О.", "IT"}
    };

    Group groups[1] = {
        {1, "ІТ-101", 1}
    };

    Student students[2] = {
        {1, "Kovalenko A.А.", 1},
        {2, "Schevchenko B.I.", 1}
    };

    Subject subjects[2] = {
        {1, "Math", 1},
        {2, "IT", 2}
    };

    GradeScale scale[4] = {
        {90, 100, "A"},
        {75, 89, "B"},
        {60, 74, "C"},
        {0, 59, "D"}
    };

    PerformanceReport reports[2] = {
        {1, 1, 95, ""}, 
        {2, 2, 82, ""}   
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (reports[i].score >= scale[j].minPoints && reports[i].score <= scale[j].maxPoints) {
                strcpy(reports[i].grade, scale[j].grade);
                break;
            }
        }
    }

    cout << "Perfomance report:\n";
    for (int i = 0; i < 2; i++) {
        cout << "Student: " << students[i].name << "\n";
        cout << ", Subject: " << subjects[i].title << "\n";
        cout << ", Points: " << reports[i].score << "\n";
        cout  << ", Grade: " << reports[i].grade << "\n";
    }

    return 0;
}
