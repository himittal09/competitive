#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson (){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        Student (string firstName, string lastName, int identification, vector<int> testscores): Person(firstName, lastName, identification) {
            this->testScores = testscores;
        }

        char calculate () {
            int average=0;
            char grade;
            for (auto val: this->testScores) {
	            average += val;
            }
            average = average / (this->testScores).size();

            if (average >= 90) {
                grade = 'O';
            } else if (average >= 80) {
                grade = 'E';
            } else if (average >= 70) {
                grade = 'A';
            } else if (average >= 55) {
                grade = 'P';
            } else if (average >= 40) {
                grade = 'D';
            } else {
                grade = 'T';
            }

            return grade;
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}