#include <iostream>
using namespace std;
class Demo
{
	private:	
		static int X;
	public:
		static void fun()
		{
			cout <<"Value of X: " << X << endl;
		}
};
//defining
int Demo :: X =120;
int main()
{
	Demo X;
	X.fun();
	
	return 0;
}
