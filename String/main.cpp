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

	cout << "����Ҫ���ɵ��ַ���:" << endl;
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
			cout << "����Ҫ���Ƶ��ַ���" << endl;
			cin >> sour;
			StrAssign(S, sour);
			StrCopy(T, S);
			Print(T);
			break;
		}
		case 2:
			cout << (StrEmpty(T) ? "TΪ��" : "T��Ϊ��") << endl;
			break;
		case 6:{
				   //Concat
				   MyString S1, S2;
				   char s1[50];
				   char s2[50];
				   cout << "�����һ���ַ���" << endl;
				   cin >> s1;
				   cout << "����ڶ����ַ���" << endl;
				   cin >> s2;
				   StrAssign(S1, s1);
				   StrAssign(S2, s2);
				   if (Concat(T, S1, S2)){
					   cout << "���ӳɹ�" << endl;
					   Print(T);
				   }
				   else{
					   cout << "����ʧ��" << endl;
				   }
				   break;
		}
		case 7:{
				   //SubString
				   system("cls");
				   Print(T);
				   MyString sub;
				   int pos, len;
				   cout << "�ֱ�����Ҫ��ȡ��λ�úͳ���" << endl;
				   cin >> pos;
				   cin >> len;
				   if (SubString(sub, T, pos, len)){
					   cout << "��ȡ�ɹ�" << endl;
					   Print(sub);
				   }
				   else{
					   cout << "��ȡʧ��" << endl;
				   }
				   break;
		}
		case 10:{
			system("cls");
			MyString S;
			int pos;
			Print(T);
			cout << "����Ҫ������ַ���" << endl;
			cin >> sour;
			cout << "����Ҫ�����λ��" << endl;
			cin >> pos;
			StrAssign(S, sour);
			if (StrInsert(T, pos, S)){
				cout << "����ɹ�" << endl;
				Print(T);
			}
			else
				cout << "����ʧ��" << endl;
			break;
		}
		case 11:{
			system("cls");
			int pos, len;
			Print(T);
			cout << "�ֱ�����Ҫ��ʼɾ����λ�úͳ���" << endl;
			cin >> pos;
			cin >> len;
			if (StrDelete(T, pos, len)){
				cout << "ɾ���ɹ�" << endl;
				Print(T);
			}
			else{
				cout << "ɾ��ʧ��" << endl;
			}
			break;
		}
		default:
			break;
		}
	}
}