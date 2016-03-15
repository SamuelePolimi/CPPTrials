/*
 * Contact.cpp
 *
 *  Created on: 14 mar 2016
 *      Author: samuele
 */

#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;


void Contact::setName(string _name){
	this->name = _name;
}

void Contact::setNumber(string number){
	this->number = number;
}

string Contact::getName(){
	return this->name;
}

string Contact::getNumber(){
	return this->number;
}

Contact::Contact() {
	//cout << "constructor";
    name = new char[0];
	number = new char[0];
	//cout << "eoc";
}

Contact::~Contact() {
//	delete(this->number);
//	delete(this->name);
}

