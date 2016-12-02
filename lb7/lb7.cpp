// lb6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "classes.h"
#include "conio.h"
using namespace std;




int _tmain(int argc, _TCHAR* argv[])
{setlocale(0,"");

cout<<"-------------Работа с типом int:-------------"<<endl;

	Set<int> s1;
	Set<int> s2;
	Set<int> s3;

	s1();
	s2();
	
	cout<<"Исходные множества(1): "<<endl;
	s1.showset();
	s2.showset();
	average(s1);
	average(s2);
	cout<<"Новое множество, полученное в результате объединения: "<<endl;
	s3=s1+s2;
	s3.showset();

	s1<=s2;
	system("pause");
	cout<<endl;
cout<<"-----------Работа с типом double:------------"<<endl;
	Set<double> s4;
	Set<double> s5;
	Set<double> s6;

	s4();
	s5();
	
	cout<<"Исходные множества(2): "<<endl;
	s4.showset();
	average(s4);
	s5.showset();
	average(s5);
	cout<<"Новое множество, полученное в результате объединения: "<<endl;
	s6=s4+s5;
	s6.showset();

	s4<=s5;

	system("pause");
	cout<<endl;
	cout<<"------------Работа с типом char:-------------"<<endl;
	Set<char> s7;
	Set<char> s8;
	Set<char> s9;

	s7();
	s8();
	
	cout<<"Исходные множества(3): "<<endl;
	s7.showset();
	s8.showset();

	cout<<"Новое множество, полученное в результате объединения: "<<endl;
	s9=s7+s8;
	s9.showset();

	s7<=s8;
	system("pause");
	cout<<endl;
	cout<<"------------Класс как параметр шаблона:------------- "<<endl;
	Assay cat;
	cat.setc();
	Set1<int,Assay>qwe; 

	qwe.setname(cat);
	qwe.setdata();
	qwe.show();
	return 0;
}





