#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet,inches;
	public:
	void set_distance()
	{
		cout<<"enter feet:";
		cin>>feet;
		cout<<"enter inches:";
		cin>>inches;
		
	}
	void get_distance()
	{
		cout<<"feet="<<feet;
		cout<<"inches="<<inches;
	}
	void sum(Distance d1,Distance d2)
	{
		feet=d1.feet+d2.feet;
		inches=d1.inches+d2.inches;
		if(inches>=12)
		{
			feet=feet+1;
			inches=inches-12;
		}
	}
	void sum(Distance *d1,Distance *d2)
	{
		feet=d1->feet+d2->feet;
		inches=d1->inches+d2->inches;
		feet=feet+(inches/12);
		inches=inches%12;
		
		
	}	
};
main()
{
	Distance d1,d2,d3;
	d1.set_distance();
	d2.set_distance();
	d3.sum(d1,d2);
	d3.get_distance();
	d3.sum(&d1,&d2);
	d3.get_distance();
}
