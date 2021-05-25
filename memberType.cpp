#include "memberType.h"

memberType::memberType()
{
	personName ="";
	member_id = 0;
	numOfBooks = 0;
	amountSpent = 0.0;
}

void memberType::set(string name, int id, int books, double time)
{
	personName = name;
	member_id = id;
	numOfBooks = books;
	amountSpent = time;
}

void memberType::modify(string name)
{
	personName = name;
}

void memberType::update(int id)
{
	member_id = id;
}

void memberType::modify(int books, double spentTime)
{
	numOfBooks = books;
	amountSpent = spentTime;
}

void memberType::show()
{
	cout << "the person name : " << personName<<endl;
	cout << "the id : " << member_id << endl;
	cout << "number of books read : " << numOfBooks << endl;
	cout << "amount of time spent to read this book :  " << amountSpent << endl;

}
