#include<iostream>

using namespace std;

class widget
{
	public:
		widget()
		{
			count++;
		}
		~widget()
		{
			--count;
		}
		static int num()
		{
			return count;
		}
	private:
		static int count;
};

int widget::count=0;

int main()
{
	widget x,y;
	cout<<"The number is"<<widget::num()<<endl;
	if(widget::num()>1)
	{
		widget x,y,z;
		cout<<"The Number is"<<widget::num()<<endl;
	}
	widget z;
	cout<<"The number is"<<widget::num()<<endl;

	return 0;
}
