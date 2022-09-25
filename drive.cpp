#include<iostream>
using namespace std;
class list {
	int* arr;
	int n;
public:
	list()
	{
		arr = new int[30];

	}
	void getsize(int p)
	{
		n = p;
	}
	void input()
	{
		for (int i = 0; i < n; i++)
			cin >> arr[i];
	}
	int find_idx(int k)
	{
		int x = 0;
		for (int i = 0; i < n; i++)
		{
			if (k == arr[i])
			{
				return i;
			}
			else
			{
				x = -1;
			}
		}
		if (x = -1)
		{
			int idx = 0;
			for (int i = 0; i < n + 1; i++)
			{
				if (k > arr[i] && k < arr[i + 1])
					idx = i + 1;
			}
			for (int i = n+1; i >= idx; i--)
				arr[i] = arr[i - 1];
			    arr[idx] = k;
			return -1;

		}
	}
	void print()
	{
		for (int i = 0; i < n + 1; i++)
		{
			cout << arr[i] << " , ";
		}
	}
	~list()
	{
		cout << "destructor is called." << endl;
		delete[]arr;
	}
	void search(int x)
	{
		int a=0, b=0;
		for (int i = 0; i < n; i++)
		{
			if (x == arr[i])
			{
				a = i;
				i = n;
			}
		}
		a++;
		cout << a;
		
	}
	void insert()
	{
		
	}
};
