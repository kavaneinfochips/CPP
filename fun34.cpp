#include<iostream>
using namespace std;
class fun
{
	public:
	int sum(int i,int j,int k)
	{
	return (i+j+k);
	}
	
	float sum(float a,float b,float c)
	{
		return (a+b+c);
		
	}

};

int main()
{
	fun f;
	int i,j,k;
	cout<<"ent i==="<<endl;
	cin>>i;
	cout<<"ent j==="<<endl;
	cin>>j;
	cout<<"ent k==="<<endl;
	cin>>k;
	float a,b,c;
	cout<<"ent a==="<<endl;
	cin>>a;
	cout<<"ent b==="<<endl;
	cin>>b;
	cout<<"ent c==="<<endl;
	cin>>c;
	
	cout<<"sum is :"<<f.sum(i,j,k)<<endl;
	cout<<"char is :"<<f.sum(a,b,c)<<endl;
	
	return 0;

}
