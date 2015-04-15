#include <iostream>
#include "StringPlus.h"

using namespace std;

int main()
{
	MyString str("ffff");
	MyString str1("ffa");

	int i = str.Compare(str1);
	str.Concat(str1);
}
