/*
 * Contact.h
 *
 *  Created on: 14 mar 2016
 *      Author: samuele
 */
#include <string>
using namespace std;

#ifndef CONTACT_H_
#define CONTACT_H_


class Contact {

	string name;
	string number;

public:

	Contact();
	virtual ~Contact();

	void setName(string name);
	void setNumber(string number);
	string getName();
	string getNumber();

};

#endif /* CONTACT_H_ */
