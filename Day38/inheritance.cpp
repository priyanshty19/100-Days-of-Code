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
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        /*
        *   Class Constructor
        *
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector<int> scores):Person(firstName, lastName, id)
        {
            this->testScores=scores;
        }

        /*
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            int netScore=0;
            for(int i=0; i<testScores.size(); i++)
            {
                netScore+=testScores[i];
            }
            int avg=netScore/testScores.size();
            if(avg>=90 && avg<=100)
            {
                return 'O';
            }
            if(avg>=80 && avg<90)
            {
                return 'E';
            }
            if(avg>=70 && avg<80)
            {
                return 'A';
            }
            if(avg>=55 && avg<70)
            {
                return 'P';
            }
            if(avg>=40 && avg<55)
            {
                return 'D';
            }
            else
            {
                return 'T';
            }
        }
};

int main() {#include <iostream>
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
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        /*
        *   Class Constructor
        *
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector<int> scores):Person(firstName, lastName, id)
        {
            this->testScores=scores;
        }

        /*
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            int netScore=0;
            for(int i=0; i<testScores.size(); i++)
            {
                netScore+=testScores[i];
            }
            int avg=netScore/testScores.size();
            if(avg>=90 && avg<=100)
            {
                return 'O';
            }
            if(avg>=80 && avg<90)
            {
                return 'E';
            }
            if(avg>=70 && avg<80)
            {
                return 'A';
            }
            if(avg>=55 && avg<70)
            {
                return 'P';
            }
            if(avg>=40 && avg<55)
            {
                return 'D';
            }
            else
            {
                return 'T';
            }
        }
};

int main() {
