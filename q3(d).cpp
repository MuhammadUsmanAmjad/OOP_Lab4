#include<iostream>
#include"drive.cpp"
using namespace std;
int main()
{
	list obj1;
	obj1.getsize(10);
	obj1.input();
	obj1.print();
	//shows destructor is called
	system("pause");
	return 0;

}