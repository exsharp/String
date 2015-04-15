#include <iostream>
#include "MyString.h"

bool StrAssign(MyString &T, char *chars)
{
	int len = 0;
	while (chars[len] != 0){
		len++;
	}
	T.data = new char[len+10];
	if (!T.data)
		return false;
	T.length = len;

	for (int i = 0; i < len; i++){
		T.data[i] = chars[i];
	}
	T.data[len] = 0;
	return true;
}

bool StrCopy(MyString &T, MyString S)
{
	T.length = S.length;

	if (T.data)
		delete[] T.data;

	T.data = new char[T.length + 10];
	if (!T.data)
		return false;

	for (int i = 0; i < T.length; i++){
		T.data[i] = S.data[i];
	}
	T.data[T.length] = 0;

	return true;
}

bool StrEmpty(MyString S){
	return S.length == 0 ? true: false;
}

int StrCompare(MyString S, MyString T){
	while (S.data == T.data)
	{

	}
	return true;
}

int StrLength(MyString S){
	return S.length;
}

bool ClearString(MyString &S){
	if (!S.data)
		return false;
	S.data[0] = 0;
	S.length = 0;
	return true;
}

bool Concat(MyString &T, MyString S1, MyString S2){
	if (T.data)
		delete[] T.data;
	
	int total_len = S1.length + S2.length + 10;
	char *newChars = new char[total_len];

	int count = 0;
	int Subcount = 0;
	
	while (Subcount < S1.length){
		newChars[count] = S1.data[Subcount];
		count++;
		Subcount++;
	}
	Subcount = 0;
	while (Subcount < S2.length){
		newChars[count] = S2.data[Subcount];
		count++;
		Subcount++;
	}
	newChars[count] = 0;
	T.data = newChars;
	T.length = count;
	return true;
}

bool SubString(MyString &Sub, MyString S, int pos, int len){

	pos--;

	if (S.length < (pos + len))
		return false;
	if (pos < 0 || len <= 0)
		return false;
	if (pos>S.length || len > S.length)
		return false;

	//if (Sub.data)
	//	delete[] Sub.data;

	char *newChars = new char[len + 10];
	
	int count = 0;
	while (len--)
	{
		newChars[count++] = S.data[pos++];
	}
	newChars[count] = 0;
	Sub.data = newChars;
	Sub.length = count;

	return true;
}

bool StrInsert(MyString &S, int pos, MyString T){
	
	if (pos <= 0)
		return false;
	if (pos > S.length+1)
		return false;

	int total_len = S.length + T.length + 10;
	char *newChars = new char[total_len];

	pos--;
	int count=0;
	while (count<pos)
	{
		newChars[count] = S.data[count];
		count++;
	}
	for (int i = 0; i < T.length; i++,count++){
		newChars[count] = T.data[i];
	}
	while (S.data[pos]){
		newChars[count++] = S.data[pos++];
	}
	newChars[count] = 0;

	delete[] S.data;
	S.data = newChars;

	return true;
}

bool StrDelete(MyString &S, int pos, int len){

	pos--;

	if (S.length < (pos + len))
		return false;
	if (pos < 0 || len <= 0)
		return false;
	if (pos>S.length || len > S.length)
		return false;

	for (int i = pos + len; S.data[i] != 0; i++, pos++){
		S.data[pos] = S.data[i];
	}
	S.data[pos] = 0;
	S.length -= len;

	return true;
}

bool DestroyString(MyString &S){
	delete[] S.data;
	S.length = 0;
	return true;
}

int ConnonString(char *S, char *T,int pos){
	int i = --pos;
	int j = 0;

	int S_len = 0;
	while (S[S_len]){
		S_len++;
	}

	if (pos >= S_len)
		return false;

	int T_len = 0;
	while (T[T_len]){
		T_len++;
	}

	while (S[i]&&T[j])
	{
		if (S[i] == T[j]){
			i++;
			j++;
		}
		else{
			i = i - j + 1;
			j = 0;
		}
	}

	if (j >= T_len)
		return i - T_len;
	else{
		return 0;
	}
}