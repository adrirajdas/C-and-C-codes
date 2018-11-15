#include<iostream>
#include<conio.h>
using namespace std;
class stu
{
		private: char name[20],add[20];
		  	int roll,zip;
		public: stu ( );//Constructor
			~stu( );//Destructor
			void read( );
			void disp( );			
};
stu :: stu( )
{
	cout<<"This is Student Details"<<endl;
}
void stu :: read( )
{
	cout<<"Enter the student Name=";
	cin>>name;
	cout<<"Enter the student roll no=";
	cin>>roll;
	cout<<"Enter the student address=";
	cin>>add;
	cout<<"Enter the Zipcode";
	cin>>zip;
}
void stu :: disp( )
{
	cout<<"Student Name:"<<name<<endl;
	cout<<"Roll no is:"<<roll<<endl;
	cout<<"Address is:"<<add<<endl;
	cout<<"Zipcode is:"<<zip;
}
stu::~stu( )
{
	cout<<"\n\nStudent Detail is Closed";
}
 
int main( )
{
	stu s;
s.read ( );
s.disp ( );
getch( );
}

