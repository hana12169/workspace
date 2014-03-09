#include<iostream>

using namespace std;

class myclass
{
	public:
		int data;
		myclass(int data)
		{
			this->data=data;
		}
		void print()
		{
			cout<<data<<endl;
			cout<<"hello"<<endl;
		}
};

int main()
{
	myclass *pmyclass;
	pmyclass=new myclass(1);
	pmyclass->print();
	pmyclass[0].print();
	pmyclass[1].print();
	pmyclass[10000000].print();

	return 0;
}
