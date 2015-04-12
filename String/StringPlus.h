#ifndef _MyString_H
#define _MyString_H

#define PRESIZE 50

class MyString
{
private:
	char *data;
	int length;
public:
	MyString();
	MyString(char *p);
	MyString(MyString &str);
	~MyString();
	bool Empty();
	int Compare(MyString str);
	int Length();
	bool Clear();
	bool Concat(MyString str);
	bool SubMyString(MyString &str, int pos, int len);
	int Index(MyString str, int pos);
	bool Replace(MyString sour, MyString replace);
	bool Insert(int pos, MyString T);
	bool Delete(int pos, int len);

	char& operator [](int pos);
	const char& operator[] (int pos)const;
};


#endif