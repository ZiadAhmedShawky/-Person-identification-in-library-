#include"memberType.h"
#include<iostream>
using namespace std;
int main()
{
	memberType member;
	member.set("Ziad", 123, 10, 3.25);
	member.modify("Ahmed");
	member.update(213);
	member.modify(12, 5.5);
	member.show();
}