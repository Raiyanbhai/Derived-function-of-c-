

//This is a program of multilevel output display
#include <iostream>
using namespace std;
class student
{
protected:
    int roll;
    char name[26];
    char nam[29];
    char na[30];
public:
    void get_student()
    {    
    	cout<<"Enter your name : ";
    	cin>>name;
    	cin>>nam;
    	cin>>na;
    	//cout<<endl;
        cout<<"Enter Roll : ";
        cin>>roll;
        cout<<endl;
    }
    void display_roll()
    {
                   cout<<"\"Your Result Is Like this\""<<endl;
    	cout<<"(✓)your name is "<<name<<" "<<nam<<" "<<na<<endl;
        cout<<"(✓)Roll no : "<<roll<<endl;
    }
};
class exam:public student
{
protected:
    float marks1,marks2,marks3,marks4,marks5,marks6,marks7;
public:
    void get_marks()
    {
        cout<<"Enter marks in Subject 1 : ";
        cin>>marks1;
        cout<<"Enter marks in Subject 2 : ";
        cin>>marks2;
        cout<<"Enter marks in Subject 3 : ";
        cin>>marks3;
        cout<<"Enter marks in Subject 4 : ";
        cin>>marks4;
        cout<<"Enter marks in Subject 5 : ";
        cin>>marks5;
        cout<<"Enter marks in Subject 6 : ";
        cin>>marks6;
        cout<<"Enter marks in Subject 7 : ";
        cin>>marks7;
        cout<<endl;
        cout<<endl;        
    }
    void display_marks()
    {
        cout<<"(✓)Mark in Subject 1 : "<<marks1<<endl;
        cout<<"(✓)Mark in Subject 2 : "<<marks2<<endl;
        cout<<"(✓)Mark in Subject 3 : "<<marks3<<endl;
        cout<<"(✓)Mark in Subject 4 : "<<marks4<<endl;
        cout<<"(✓)mark in subject 5 : "<<marks5<<endl;
        cout<<"(✓)Mark in Subject 6 : "<<marks6<<endl;
        cout<<"(✓)Mark in Subject 7 : "<<marks7<<endl;
    }
};
class result:public exam
{
private:
    float total,per;
public:
    void calculate_result()
    {
        total=marks1+marks2+marks3+marks4+marks5+marks6+marks7;
        per=(total/700)*100;
    }
    void display_result()
    {
        cout<<"(✓)Total obtained mark is : "<<total<<endl;
        cout<<"(✓) Total percentage is :"<<per<<endl;
        cout<<endl;
        cout<<" (✓)Note:-"<<endl;
        cout<<"      This is your some detailonly";
    }
};
int main()
{
    result r;
    exam e;
    r.get_student();
    r.get_marks();
    r.calculate_result();
    r.display_roll();
    r.display_marks();
    r.display_result();
    return 0;
}




//This is also aprogram of multilevel
/*
#include <iostream>
using namespace std;
class Book_Shop
{
protected:
    long int n;
    char name[20];
public:
    void getdata1()
    {    
    	cout<<"Enter buyer name : ";
    	cin>>name;
    	cout<<endl;
        cout<<"Enter buyer contact number for any kinds of inquary : ";
        cin>>n;
        cout<<endl;
    }
    void display1()
    {    
    	cout<<"Buyer name is : "<<name<<endl;
        cout<<" Buyer contact no. is: "<<n<<endl;
    }
};
class Book:public Book_Shop
{
protected:
	   char math[30];
	   char programming[30];
	   char physics[30];
	   float total=920;
public:
    void getdata2()
    {   total=total;
        cout<<"Enter Subject 1 : ";
        cin>>math;
        cout<<"Enter Subject 2 : ";
        cin>>programming;
         cout<<"Enter Subject 3 : ";
        cin>>physics;
        cout<<endl;
        cout<<endl;        
    }
    void display2()
    {
        cout<<" (✓) Your first subject is : "<<math<<endl;
        cout<<"(✓) Your second subject is : "<<programming<<endl;
        cout<<"(✓) Your third subject is : "<<physics<<endl;
    }
    void display3()
    {
        cout<<" (✓)Total price is : "<<total<<endl;
        cout<<endl;
        
    }
    void display4()
	      {
	      	cout<<"You get discount Rs."<<"["<<total*0.2<<"]"<<endl;
	      	cout<<"After discount you have to pay total Rs."<<"["<<total/0.2<<"]"<<endl;
	      }
};
int main()
{
    Book b;
    b.getdata1();
    b.getdata2();
    b.display1();
    b.display2();
     b.display3();
    b.display4();
     return 0;
}

*/
