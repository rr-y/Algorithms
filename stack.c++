#include<iostream>
#include<vector>
using namespace std;

template <typename T>

class Stack
{
	private:
		T *a;
		int size;
		int track;

	public:
		Stack(int s)
		{
			size = s;
			a = new T[size];
			track = -1;
		}

		void push(T data)
		{
			if(! isFull())
				a[++track] = data;

		}

		T pop()
		{
			if(! isEmpty())
				return a[track--];
		}

		bool isEmpty()
		{
			return track == -1;
		}

		bool isFull()
		{
			return track == size;
		}

};

int main()
{
	Stack <int> s(10);
	for(int i = 0;i<10;i++)
		s.push(i*i);

	for(int i = 0;i<10;i++)

		cout<<s.pop()<<endl;


}


