#pragma once
#include <iostream>
#include "Validation.h"
using namespace std;
class Person
{
protected:
	static int id;
	string name;
	string password;
public:
	Person() {
		id++;
	}
	Person(string name, string password) {
		this->name = name;
		this->password = password;
		id++;
	}
    //setters
    void setName(string name) {
        if (Validation::checkName(name)) 
        {
            this->name = name;
        }
        else {
            cout << "invalid name.It must be in alphabetic chars within range of 5 to 20  letters" << endl;
        }
    }

    void setPassword(string password) {
        if (Validation::checkPassword(password)) {
            this->password = password;
        }
        else {
            cout << "invalid password.It must be in range of 8 to 20 char " << endl;
        }
        
    }
    //getters
    string getName() {
        return name;
    }
    string getPass() {
        return password;
    }
    // 
    virtual void displayInfo() = 0;
    ~Person(){}
};

