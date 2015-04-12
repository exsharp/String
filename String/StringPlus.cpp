#include "StringPlus.h"
#include <iostream>
#include <string>

MyString::MyString(){
	this->data = new char[PRESIZE]();
	this->length = 0;
}

MyString::MyString(char *p){
	int length = 0;
	while (p[length] != 0){
		length++;
	}

	if (length < PRESIZE){
		this->data = new char[PRESIZE]();
		this->length = length;
	}
	else
	{
		this->data = new char[length+20]();
		this->length = length;
	}

	for (int i = 0; i < length; i++){
		this->data[i] = p[i];
	}
}

MyString::MyString(MyString &str){
	this->data = new char[str.Length()];
	this->length = str.length;
}

MyString::~MyString(){
	delete[] data;
	*data = NULL;
	length = 0;
}

bool MyString::Empty(){
	if (0 == this->length)
		return true;
	else
		return false;
}

int MyString::Compare(MyString str){

	int pos = 0;
	
	while (this->data[pos] == str[pos]){
		++pos;
		if ()
	}

	return pos+1;
}

int MyString::Length(){
	return this->length;
}

bool MyString::Clear(){
	this->length = 0;
	return true;
}

char& MyString::operator[](int pos){

	if (pos>0&&pos < this->length)
		return this->data[pos];
	else
		throw std::string("out of bounds");
}

const char& MyString::operator[](int pos) const{

	if (pos>0 && pos < this->length)
		return this->data[pos];
	else
		throw std::string("out of bounds");
}

