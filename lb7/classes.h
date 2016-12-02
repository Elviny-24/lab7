#pragma once
#include <iostream>
using namespace std;
const int max_size=100;
template <typename num, typename Type>
class Set1
{ public:
	Type exam;
	char proj[max_size];
int od,om,oy;


	char setdata(){
		cout<<"Enter object"<<endl;
cin>>proj;
return *proj;	}


Type setname(Type obj){
		exam=obj;
	od=obj.dd;
	om=obj.mm;
	oy=obj.yy;
		return exam;
	}
void show(){
cout<<"Information: "<<endl;	
cout<<"Object: "<<proj<<endl;
cout<<"Date: "<<od<<"."<<om<<"."<<oy<<endl;}
};


class Assay{
public:
int dd,mm,yy;

	void setc(){
		cout<<"Enter date of exam: "<<endl;
	cin>>dd;
	cin>>mm;
	cin>>yy;


	}
//void showx(){cout<<dd<<"."<<mm<<"."<<yy<<endl;}
};



template<class Type>
class Set
{
public:
	int proverka;
int counter;
int size;
int len;
operator int();
	Type members[max_size];
	Set(){}
	Type operator[](int i);
	int getLength(){return len;}
	void showset();
	Set operator + (Set ob2);
	Set operator +(Type ch);
	Type operator() ();
	void operator <=(Set ob2);
	~Set(void);
};

template<class Type>
void Set<Type>::showset(){
cout<<" ";
for(int i=0; i<size; i++)
	cout<<members[i]<<" ";
cout<<endl;
}



template<class Type>
Type Set<Type>::operator[](int i)
{return members[i];}



template<class Type>
Type Set<Type>::operator() ()
	{ 
		int len=0;
		int counter=0;
		cout<<"¬ведите мощность множества: "<<endl;
		cin>>len;
		cout<<"¬ведите элементы:"<<endl;
for(int i=0;i<len;i++){
	cin>>members[i];}
size=len;
return size;}

template<class Type>
void Set<Type>::operator<=(Set<Type> ob2)
{cout<<"—равнение множеств"<<endl;
	Set<Type> newset=*this;
if((int)newset>(int)ob2)
	cout<<"S1>S2"<<endl;
else if((int)newset<(int)ob2)
	cout<<"S1<S2"<<endl;
else
	cout<<"S1=S2"<<endl;
}


template<class Type>
Set<Type> Set<Type>::operator + (Set<Type> ob2){
	Set<Type> newset=*this;
	for(int i=0;i<(int)ob2;i++)
newset=newset + ob2[i];
	return newset;
}

template  <class Vav>
void average(Set<Vav>& tete)
{
	Vav min = tete.members[0];
	Vav much=0;
	int counter=0;
	for (int i = 0; i < tete.size; i++)
	{much=much+tete.members[i];
	counter++;
		/*if (tete.members[i] < min)
		{
			min = tete.members[i];
		}*/
	}
	min = much/counter;
	cout << "Average value: " << min << endl;
}


template<class Type>
Set<Type> Set<Type>::operator +(Type ch) { 
proverka=0; 
Set<Type> newset; 
newset = *this; 
for(int i=0;i<(int)newset;i++) 
{ 
if(ch==newset.members[i]) 
proverka++; 
} 
if(proverka==1) 
return newset; 
else{ 
newset.members[(int)newset] = ch; 
newset.size++; 
return newset; 
}}

template<class Type>
Set<Type>::operator int()
{return size;}


template<class Type>
Set<Type>::~Set(void)
{
}
