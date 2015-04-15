#ifndef _MYSTRING_H_
#define _MYSTRING_H_

struct MyString{
	char *data;
	int length;
};

bool StrAssign(MyString &T, char *chars);//DONE
bool StrCopy(MyString &T, MyString S);//DONE
bool StrEmpty(MyString S);//DONE
int StrCompare(MyString S, MyString T);//DONE
int StrLength(MyString S);//DONE
bool ClearString(MyString &S);//DONE
bool Concat(MyString &T, MyString S1, MyString S2);//DONE
bool SubString(MyString &Sub, MyString S, int pos, int len);//DONE
int Index(MyString S, MyString T, int pos);//DONE
bool Replace(MyString &S, MyString T, MyString V);
bool StrInsert(MyString &S, int pos, MyString T);//DONE
bool StrDelete(MyString &S, int pos, int len);//DONE
bool DestroyString(MyString &S); //DONE

int CommonString(char *s1, char *s2,int pos);//DONE

#endif