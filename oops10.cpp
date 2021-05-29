// Name ; Parmeshwar Gupta (191920) b. tech cse 4th sem

#include<iostream>
using namespace std;
class A
{
 	public:
 	int x;
 	void addx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
};
class B
{
 	public:
 	int y;
 	void addy()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
};
class C : public A, public B   //C is derived from class A and class B
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x + y;
 	}
};

int main()
{
 	 C obj1; //object of derived class C
 	 obj1.addx();
 	 obj1.addy();
 	 obj1.sum();
 	 return 0;
}
