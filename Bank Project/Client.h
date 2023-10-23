#pragma once
#include <iostream>
#include "Validation.h"
#include "Person.h"
using namespace std;

class Client :public Person
{
private:
	double balance;
public:
	Client() {
		balance = 0;
	}
	Client(string name, string password, double balance) :Person(name, password) {
		this->balance = balance;
	}

	//setters
	void setBalance(double balance) {
		if (Validation::checkBalance(balance)) {

			this->balance = balance;
		}
		else {
			cout << "Invalid balance. Minimum balance is 1500" << endl;
		}
	}
	//getters
	double getBalance() {
		return balance;
	}
	//deposit        
	void deposit(double amount) {
		balance += amount;
		cout << "depositing is done successfully , your balance now is : $ " << balance << endl;
	}

	//withdraw

	void withdraw(double amount) {
		if (Validation::checkBalance(balance - amount)) {
			balance -= amount;
			cout << "Withdrawing is done successfully, your balance now is : $ " << balance << endl;
		}
		else {
			cout << "Insufficient balance. Minimum balance is 1500" << endl;
		}
	}
	//transferring
	void transferTo(double amount, Client& recipient) {

		if (Validation::checkBalance(balance - amount)) {
			balance -= amount;
			recipient.deposit(amount);
			cout << "Transferring is done successfully, your balance now is : $  " << balance << endl;
		}
		else {
			cout << "Transferring is rejected.Insufficient balance." << endl << "Minimum balance is 1500" << endl;
		}
	}

	//checking the balance

	void checkBalance() {
		cout << "your current balance is :  $ " << balance << endl;
	}

	//dispInfo info

	void displayInfo() {
		cout << "name : " << name << endl;
		cout << "id : " << id << endl;
		cout << "password : " << password << endl;
		cout << "balance : $ " << balance << endl;
	}

	~Client() {

	}

};

