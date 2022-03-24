//Using derived function find area of rectangle and triangle
#include <iostream>
//#include <string.h>
using namespace std;
class object
{
	protected:
	          float l,b;
	public: 
	        void getdata()
	        {
	     	cout<<"enter the length= ";
	     	cin>>l;
	     	cout<<"enter the breadth= ";
	     	cin>>b;
	        }
	      
};

class rectangle:public object
{
public:
float area()
{
return l*b;
}
};
class triangle:public object
{
public:
int area()
{
return b*l;
}
};
int main()
{  
rectangle r1;
r1.getdata();
cout<<"your first area of rectangle is ="<<r1.area()<<endl;
triangle t3,t2,t1;
t1.getdata();
cout<<"your first area of triangle is= "<<t1.area()<<endl;
return 0;
}	
