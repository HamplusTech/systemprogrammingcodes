grading (int score) {
    char grade;
    if (score > 100) {
        grade = '0' ;
    }
    else if (score >= 70){
        grade = 'A';
    }
    else if (score >= 60){
        grade = 'B';
    }
    else if (score >=50) {
        grade = 'C';
    }
    else if (score >= 40){
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    return grade;
}

#include <iostream>
//#include <array>
using namespace std;
int main() {
    int n;
    cout << "Please enter the number of students you want to grade" << endl;
    cin >> n;
    int score [n];
    string student_name[n];
    char student_grade[n];
    for (int i =0;  i<=n-1; i++){
        cout << "\nPlease enter the student's name" << endl;
        cin >> student_name[i];
        cout << "Please enter the score" << endl;
        cin >> score[i];
        student_grade[i] = grading(score[i]);
    }
    cout << "\nS/N\t" << "Student Name\t" << "Student Score\t" << "Student Grade" << endl;
    for (int j=0; j<=n-1; j++){
        cout << j+1 <<"\t"<< student_name[j]<<"\t\t" << score[j]<<"\t\t" << student_grade[j]<< endl;
    }
}
