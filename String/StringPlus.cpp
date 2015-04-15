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
	this->data = new char[str.Length()+10]();
	this->length = str.length;
	for (int i = 0; i < str.Length(); i++){
		this->data[i] = str[i];
	}
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
	
	//TO-DO

	int pos = 0;
	
	while (this->data[pos] == str[pos]){
		++pos;
		if (this->length < pos&& str.Length() < pos)
			break;
	}

	return pos;
}

int MyString::Length(){
	return this->length;
}

bool MyString::Clear(){
	this->length = 0;
	return true;
}

bool MyString::Concat(MyString str){
	int TotalLength = 0;
	TotalLength = this->length + str.Length();
	
	char *p = new char[TotalLength + 10]();

	if (!p)
		return false;

	for (int i = 0; i < this->length; i++){
		p[i] = this->data[i];
	}
	for (int i = this->length; i < TotalLength; i++){
		p[i] = str[i];
	}
	delete[] this->data;
	this->data = p;
	p = NULL;

	return true;
}

char& MyString::operator[](int pos){

	if (pos>=0&&pos < this->length)
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

