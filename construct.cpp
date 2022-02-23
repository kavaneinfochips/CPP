#include<iostream>

using namespace std;
class dist
{
	public:
	int feet;
	int inch;
	public:
	dist(int f,int i)
	{
	feet=f;
	inch=i;
	//cout<<"Feet: "<<feet<<"Inch :"<<inch<<endl;
	

	}

	int getfeet()
	{
	return feet;
	}
	int getinch()
	{
	return inch;
	}

};
int main()
{
	dist d1(50,90);
	cout<<"feet:=="<<d1.getfeet()<<"inches:=="<<d1.getinch()<<endl;
	//cin>>f>>i;
	//distance d1;
	//distance d1(f,i);
	return 0;

}
