//#include<iostream>
//using namespace std;
//
//class student {
//	int* marks;
//public:
//	student()
//	{
//		marks = new int[5];
//	}
//	void set_marks(int m, int idx)
//	{
//		marks[idx] = m;
//	}
//	void print()
//	{
//		//cout << "marks are:" << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << marks[i] << endl;
//		}
//	}
//	//overloaded copy constructor
//	student(student& obj)
//	{
//		marks = new int[5];
//		for (int i = 0; i < 5; i++)
//		{
//			marks[i] = obj.marks[i];
//		}
//	}
//	~student()
//	{
//		delete[] marks;
//		marks = nullptr;
//	}
//};
//
//
//int main()
//{
//	student obj;
//	
//	{
//		int m = 0;
//		//setting values using loop...
//
//		cout << "enter marks:" << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cin >> m;
//			obj.set_marks(m, i);
//		}
//		cout << "student1 marks re:" << endl;
//		obj.print();
//		//creating second object
//		student obj1 = obj;
//		cout << "student 2 marks re:" << endl;
//		obj1.print();
//		
//	}
//	student obj2;
//	      obj2=obj;
//		cout << "data of student after destructor is called(deep copy):\n";
//		//if u commet the copy constructor u get junk values
//		obj2.print();
//		//it prints junk or show unusual behaviour because we have deleted the adress of the obj and marks in the class
//		//is become a dangling pointer.
//		//to solve this issue we make overoaded construcor as follows;
//		
//		
//		
//	
//	system("pause");
//	return 0;
//}
