#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int id;
    string firstName;
    string lastName;
    float grade;
public:
    Student(int id, string firstName, string lastName, float grade)
        : id(id), firstName(firstName), lastName(lastName), grade(grade) {}
    float getGrade() const {
        return grade;}}
class Teacher {
private:
    int id;
    string firstName;
    string lastName;
    float salary;
public:
    Teacher(int id, string firstName, string lastName, float salary)
        : id(id), firstName(firstName), lastName(lastName), salary(salary) {}
   float getSalary() const {
        return salary;}}



