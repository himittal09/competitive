#include <bits/stdc++.h>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> newGrades;
    for (auto grade : grades) {
        int proxy=0;
        if (grade < 38) {
            newGrades.push_back(grade);
        } else {
            while ((grade+proxy) % 5) {
                proxy++;
            }
            if (proxy < 3) {
                newGrades.push_back(grade+proxy);
            } else {
                newGrades.push_back(grade);
            }
        }
    }
    return newGrades;
}

int main () {
    
    int grades_count, grade;
    cin >> grades_count;
    vector<int> grades(grades_count);
    for (int i=0; i<grades_count ; i++) {
        cin >> grade;
        grades[i] = grade;
    }
    

    vector<int> result = gradingStudents(grades);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}
