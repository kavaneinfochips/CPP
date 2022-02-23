#include<iostream>
using namespace std;
class complex
{
	public:
	int real,img;
	
	complex()
{
	real=0;
	img=0;
}
	complex(int x,int y)
{
	real=x;
	img=y;

}
	void display()
	{
		cout<<"real part is=="<<real<<"img part is=="<<img<<endl;
	}
	complex operator +(complex ob)
	{
		complex addition;
		addition.real=real+ob.real;
		addition.img=img+ob.img;
		return addition;	
	}

};
int main()
{
	complex c1(5,1),c2(10,2),c3;
	
	c1.display();
	c2.display();
	c3=c1.operator +(c2);
	c3.display();
	
	return 0;
}
	
