//use of derived function dysplay some detail of three person
#include<iostream>
using namespace std;
class person
{
private:
 char name[20];
 int age,i=20;
public:
 
 void get_person()
 
 	//if(i<22)
 	{
 cout<<"#### Name of student ####"<<endl;
 cout<<"Enter student name : ";
 cin>>name;
 cout<<"Enter age : ";
 cin>>age; 	
    }
   void gett()
    {
    cout<<"#### Name of teacher ####"<<endl;
    cout<<"Enter teacher name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age; 
  
    }
  
          

 void display_person()
 {
  
 cout<<"Studeant Name : "<<name<<endl;
 cout<<"Age : "<<age<<endl;
 }
 void display()
 {
  
 cout<<"Teacher Name : "<<name<<endl;
 cout<<"Age : "<<age<<endl;
 }

};
class student:public person
{
private:
 char level[20];
 char address[20];
public:
 void get_student()
 {
 get_person();
 cout<<"Enter Level : ";
 cin>>level;
 cout<<"Enter Address : ";
 cin>>address;
 	cout<<"__________________________________________________";	
cout<<endl;
cout<<endl;

 	
 }
 void display_student()
 {
 display_person();
 cout<<"Level : "<<level<<endl;
 cout<<"Address : "<<address<<endl;
 }
};
class teacher:public person
{
private:
 char course[20];
 float salary;
 public:
 void get_teacher()
 {
 gett();
 
 cout<<"Enter Teaching Course : ";
 cin>>course;
 cout<<"Enter Salary : ";
 cin>>salary;
 	cout<<"__________________________________________________";
 	cout<<endl;
cout<<endl;	
 }
 void display_teacher()
 {
 display();
 cout<<"Course : "<<course<<endl;
 cout<<"Salary : "<<salary;
 }
};
int main()
{
 student s1;
 s1.get_student();
 teacher t1;
 t1.get_teacher();
 cout<<"**** Entered Information ****"<<endl;
 s1.display_student();
 t1.display_teacher();
 return 0;
}
