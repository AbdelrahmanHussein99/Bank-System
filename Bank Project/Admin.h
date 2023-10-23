#pragma once
#include <iostream>
#include "Validation.h"
#include "Person.h"
#include "Employee.h"
using namespace std; 
class Admin:public Employee
{
public:
	Admin() {
		salary = 0;
	}
	Admin(string name, string password, double salary) :Employee(name, password, salary) {
		
	}
	void displayInfo() {
		cout << "hello Admin" << endl;
		cout << "name : " << name << endl;
		cout << "id : " << id << endl;
		cout << "password : " << password << endl;
		cout << "balance : $ " << salary << endl;
	}
	~Admin(){}
};

