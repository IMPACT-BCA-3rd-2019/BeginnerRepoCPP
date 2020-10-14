#include<iostream.h>
#include<conio.h>
class student
 {
   private:
	  int roll;
	  char name[20];
	  float marks;
   public:
	 void input();
	 void display();
 };
 void student::input()
  {
    cout<<"Enter the student Roll number"<<endl;
    cin>>roll;
    cout<<"Enter the student name:"<<endl;
    cin>>name;
    cout<<"Enter marks of student:"<<endl;
    cin>>marks;
  }
 void student::display()
  {
    

cout<<"_______________________________________"<

<endl;
    cout<<name<<"\tDetails"<<endl;
    

cout<<"_______________________________________"<

<endl;
    cout<<"\nRoll No. Is:- "<<roll;
    cout<<"\nName Is:- "<<name;
    cout<<"\nMarks is:- "<<marks;
    

cout<<"\n_______________________________________"

<<endl;
  }
void main()
 {
   clrscr();
  int i,n;
   student s[10];
  //int i,n;
   cout<<"Enter The Number of student"<<endl;
   cin>>n;
   for(i=0;i<n;i++)
   s[i].input();
   for(i=0;i<n;i++)
   s[i].display();
   getch();
 }
/* {
   clrscr();
   student s[10];
   for(int i=0;i<10;i++)
    {
       s[i].roll=i+1;
       cout<<"Roll Number"<<s[i].roll<<endl;
       cout<<"Enter Name"<<endl;
       cin>>s[i].name;
       cout<<"Enter Marks"<<endl;
       cin>>s[i].marks;
    }
       cout<<"Display information"<<endl;
    for(i=0;i<10;i++)
     {
       cout<<"\nRoll number"<<i+1<<endl;
       cout<<"Name:"<<s[i].name<<endl;
       cout<<"Marks:"<<s[i].marks<<endl;
     }
     getch();
 }*/

