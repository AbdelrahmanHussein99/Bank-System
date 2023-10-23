#pragma once
#include <iostream>
#include "Validation.h"
#include "Person.h"
using namespace std;
class Employee :public Person
{
protected:
	double salary;
public:
	Employee() {
		salary = 0;
	}
	Employee(string name, string password, double salary) :Person(name, password) {
		this->salary = salary;
	}
	//setters
	void setSalary(double salary) {
		if (Validation::checkSalary(salary)) {

			this->salary = salary;
		}
		else {
			cout << "Invalid salary. Minimum balance is 5000" << endl;
		}
	}
	//getters
	double getSalary() {
		return salary;
	}
	void displayInfo() {
		cout << "hello Employee" << endl;
		cout << "name : " << name << endl;
		cout << "id : " << id << endl;
		cout << "password : " << password << endl;
		cout << "balance : $ " << salary << endl;
	}
	~Employee(){}
};

