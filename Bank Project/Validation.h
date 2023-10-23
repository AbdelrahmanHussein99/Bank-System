#pragma once
#include <iostream>
using namespace std;
class Validation
{
	Validation() {

	}
public:
	static bool checkName(string name) {
		if (name.length() >= 5 && name.length() <= 20 && isalpha(name[0])) {
			return true;
		}
		else {
			return false;
		}
	}
	static bool checkPassword(string password) {
		if (password.length() >= 8 && password.length() <= 20) {
			return true;
		}
		else {
			return false;
		}
	}
	static bool checkBalance(int balance) {
		if (balance >= 1500) {
			return true;
		}
		else {
			return false;
		}
	}
	static bool checkSalary(int salary) {
		if (salary >= 5000) {
			return true;
		}
		else {
			return false;
		}
	}

	~Validation(){}
};

