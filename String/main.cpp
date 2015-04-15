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
		    system("cls");
			MyString S;
			cout << "����Ҫ���Ƶ��ַ���" << endl;
			cin >> sour;
			StrAssign(S, sour);
			StrCopy(T, S);
			Print(T);
			break;
		}
		case 2:
			system("cls");
			cout << (StrEmpty(T) ? "TΪ��" : "T��Ϊ��") << endl;
			break;
		case 3:{
				   system("cls");
				   MyString S1;
				   MyString S2;
				   char s1[50];
				   char s2[50];
				   cout << "�����һ���ַ���" << endl;
				   cin >> s1;
				   cout << "����ڶ����ַ���" << endl;
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
				   DestroyString(S1);
				   DestroyString(S2);
				   break;
		}
		case 4:
			system("cls");
			Print(T);
			cout << "T�ĳ�����" << StrLength(T) << endl;
			break;
		case 5:
			system("cls");
			cout <<"Clear T"<< (ClearString(T) ? "�ɹ�" : "ʧ��") << endl;;
			break;
		case 6:{
				   //Concat
				   system("cls");
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
				   DestroyString(S1);
				   DestroyString(S2);
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
				   DestroyString(sub);
				   break;
		}
		case 8:{
				   //Index
				   system("cls");
				   Print(T);
				   MyString S;
				   int pos;
				   cout << "����Ҫƥ����ִ�" << endl;
				   cin >> sour;
				   cout << "����Ҫ��ʼƥ���λ��" << endl;
				   cin >> pos;
				   StrAssign(S, sour);
				   int result = Index(T, S, pos);
				   if (0 == result){
					   cout << "ƥ��ʧ��" << endl;
				   }
				   else{
					   cout << "�ӵ�"<<result<<"���ַ���ʼ" << endl;
				   }
				   DestroyString(S);
				   break;
		}
		case 9:{
				   system("cls");
				   MyString S;
				   MyString T;
				   MyString V;
				   //char s[] = "aabbbaaaabbbaaaabbb";
				   //char t[] = "bbbb";
				   //char v[] = "EEEE";
				   char s[50];
				   char t[50];
				   char v[50];
				   cout << "�����������ַ���" << endl;
				   cin >> s;
				   cout << "����Ҫ���滻���ַ���" << endl;
				   cin >> t;
				   cout << "����Ҫ�滻���ַ���" << endl;
				   cin >> v;
				   StrAssign(S, s);
				   StrAssign(T, t);
				   StrAssign(V, v);
				   if (Replace(S, T, V)){
					   cout << "�滻�ɹ�" << endl;
					   cout << "�滻����ַ�����" << endl;
					   Print(S);
				   }
				   else{
					   cout << "�滻ʧ��" << endl;
				   }
				   DestroyString(T);
				   DestroyString(V);
				   DestroyString(S);
				   break;
		}
		case 10:{
					//strInsert
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
					DestroyString(S);
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
			DestroyString(T);
			exit(1);
		}
	}
}