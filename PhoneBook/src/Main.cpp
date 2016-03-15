/*
 * Main.cpp
 *
 *  Created on: 14 mar 2016
 *      Author: samuele
 */
#include <iostream>
#include "Contact.h"
#include <string>

using namespace std;

int main(){

	Contact  contact;
	string name;
	string number;
	cout << "please give the name of the contact: ";
	getline(cin, name);
	cout << "please give the number of the contact: ";
	getline(cin, number);
	contact.setName(name);
	contact.setNumber(number);
	cout << "Member name: " << contact.getName() << endl;
	cout << "Member number: " << contact.getNumber() << endl;

}


