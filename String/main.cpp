#include <iostream>
#include "StringPlus.h"

using namespace std;



int main()
{
	MyString str("ffff");
	MyString str1("ffa");

	str[1] = 'a';
	str1[1] = 'a';

	cout << str.Compare(str1);
}