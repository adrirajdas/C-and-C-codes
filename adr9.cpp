#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class fig
{
	public:
		float co;
		
			fig()
			{
				co=1;
			}
			float get()
			{
				cout<<"enter the common value=";
				cin>>co;
				//return co;
			}
			float val()
			{
				return(co);
			}
			float area()
			{
				cout<<"NP";
			}
			float peri()
			{
				cout<<"NP";
		    }
		   
};
class cir:public fig
{
	public:
		float p;
	    float a=0;
		float j=0;
		
			cir()
			{
				fig();
		    }
			float input()
			{
				cout<<"enter the value of pi=";
				cin>>p;
				return p;
			}
			
			float area1()
			{a=(p*fig::val()*fig::val());
			cout<<"area="<<a;
			}
			
};
class rec:public cir
{
	public:
	 float b,ar;
		rec()
		{
		cir();
	    }
		float getdata()
		{
			cout<<"\n\nenter the breadth=";
			cin>>b;
		}
		float area2()
		{
			ar=(b*input());
			cout<<"the area is="<<ar;
		}
		float ret2()
		{
		return(b);
		}
		float ret3()
		{
			return(area1());
		}
		
};
class tri: public rec
{
	private:
		float s;
		public:
			tri()
			{
				rec();
				s=3;
			}
			float in()
			{
				cout<<"enter the third side=";
				cin>>s;
			}
			float area3()
			{
				float q;
				q=((ret2()+ret3()+s)/2);
				float w;
				w=sqrt(q*(q-ret2())*(q-ret3())*(q-s));
			}};
			class line:public fig
			{public:
					line(int x)
					{
						fig();
					}
			};
			
int main()
{
	fig f;
	f.get();
f.fig::val();
	cout<<"\n\nfor circle\n";
	cir c;
	c.input();
	c.area1();
	cout<<"\n\nfor rectangle\n";
	rec r;
	r.getdata();
	r.area2();
	r.ret2();
	r.ret3();
	//cout<<z;
	//cout<<m;
	cout<<"\n\nfor triangle\n";
	tri t;
	t.in();
	t.area3();
	line l(50);
	cout<<"\n"<<l.area();
	getch();
}
