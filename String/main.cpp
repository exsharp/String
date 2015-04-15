#include <iostream>

using namespace std;

#include "MyString.h"

void Print(MyString T){

	int i = 0;
	while (T.data[i]){
		cout << T.data[i++];
	}
	cout << endl;
}

int main()
{
	MyString T;
	char sour[20]="abcdefghi";

	cout << "输入要生成的字符串:" << endl;
	//cin >> sour;
	
	StrAssign(T, sour);
	Print(T);

	while (1)
	{
		int select;
		cout << endl;
		cout << "1.StrCopy" << endl;
		cout << "2.StrEmpty" << endl;
		cout << "3.StrCompare" << endl;
		cout << "4.StrLength" << endl;
		cout << "5.ClearString" << endl;
		cout << "6.Concat" << endl;
		cout << "7.SubString" << endl;
		cout << "8.Index" << endl;
		cout << "9.Replace" << endl;
		cout << "10.StrInsert" << endl;
		cout << "11.StrDelete" << endl;
		cout << "12.DestroyString" << endl;
		cin >> select;
		cout << endl;
		switch (select)
		{
		case 1:{
			MyString S;
			cout << "输入要复制的字符串" << endl;
			cin >> sour;
			StrAssign(S, sour);
			StrCopy(T, S);
			Print(T);
			break;
		}
		case 2:
			cout << (StrEmpty(T) ? "T为空" : "T不为空") << endl;
			break;
		case 3:{
				   system("cls");
				   MyString S1;
				   MyString S2;
				   char s1[50];
				   char s2[50];
				   cout << "输入第一个字符串" << endl;
				   cin >> s1;
				   cout << "输入第二个字符串" << endl;
				   cin >> s2;
				   StrAssign(S1, s1);
				   StrAssign(S2, s2);
				   int i = 0;
				   i = StrCompare(S1, S2);
				   if (0 == i)
					   cout << "S1==S2" << endl;
				   if (i > 0)
					   cout << "S1>S2" << endl;
				   if (i < 0)
					   cout << "S1<S2" << endl;
				   break;
		}
		case 4:
			cout << "T的长度是" << StrLength(T) << endl;
			break;
		case 5:
			cout <<"Clear"<< (ClearString(T) ? "成功" : "失败") << endl;;
		case 6:{
				   //Concat
				   MyString S1, S2;
				   char s1[50];
				   char s2[50];
				   cout << "输入第一个字符串" << endl;
				   cin >> s1;
				   cout << "输入第二个字符串" << endl;
				   cin >> s2;
				   StrAssign(S1, s1);
				   StrAssign(S2, s2);
				   if (Concat(T, S1, S2)){
					   cout << "连接成功" << endl;
					   Print(T);
				   }
				   else{
					   cout << "连接失败" << endl;
				   }
				   break;
		}
		case 7:{
				   //SubString
				   system("cls");
				   Print(T);
				   MyString sub;
				   int pos, len;
				   cout << "分别输入要截取的位置和长度" << endl;
				   cin >> pos;
				   cin >> len;
				   if (SubString(sub, T, pos, len)){
					   cout << "截取成功" << endl;
					   Print(sub);
				   }
				   else{
					   cout << "截取失败" << endl;
				   }
				   break;
		}
		case 8:{
				   //Index
				   system("cls");
				   Print(T);
				   MyString S;
				   int pos;
				   cout << "输入要匹配的字串" << endl;
				   cin >> sour;
				   cout << "输入要开始匹配的位置" << endl;
				   cin >> pos;
				   StrAssign(S, sour);
				   int result = Index(T, S, pos);
				   if (0 == result){
					   cout << "匹配失败" << endl;
				   }
				   else{
					   cout << "从第"<<result<<"个字符开始" << endl;
				   }
				   break;
		}
		case 10:{
					//strInsert
					system("cls");
					MyString S;
					int pos;
					Print(T);
					cout << "输入要插入的字符串" << endl;
					cin >> sour;
					cout << "输入要插入的位置" << endl;
					cin >> pos;
					StrAssign(S, sour);
					if (StrInsert(T, pos, S)){
						cout << "插入成功" << endl;
						Print(T);
					}
					else
						cout << "插入失败" << endl;
					break;
		}
		case 11:{
			system("cls");
			int pos, len;
			Print(T);
			cout << "分别输入要开始删除的位置和长度" << endl;
			cin >> pos;
			cin >> len;
			if (StrDelete(T, pos, len)){
				cout << "删除成功" << endl;
				Print(T);
			}
			else{
				cout << "删除失败" << endl;
			}
			break;
		}
		default:
			break;
		}
	}
}