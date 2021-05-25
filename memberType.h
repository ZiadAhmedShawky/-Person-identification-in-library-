#pragma once
#include<string>
#include<iostream>
using namespace std;
class memberType
{
private:
	string personName;
	int member_id;
	int numOfBooks;
	double amountSpent;
public:
	memberType();
	void set(string,int,int,double);
	void modify(string);
	void update(int);
	void modify(int, double);
	void show();
	

};

