#include<iostream>
#include<iomanip>
using namespace std;
class time
{
	private:
		int h,m,s,ts;
	public:
		gettime();
		calculate();
		display();
};
time::gettime()
{
	cout<<"Enter time:";
	cout<<"\nHours? ";
	cin>>h;
	cout<<"Minutes? ";
	cin>>m;
	cout<<"Seconds? ";
	cin>>s;
}
time::calculate()
{
	ts=(h*3600)+(m*60)+s;
}
time::display()
{
	cout<<"The time is:"<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s;
	cout<<"\nTime in total seconds:"<<ts;
}
int main()
{
	time t;
	t.gettime();
	t.calculate();
	t.display();
	return 0;
}
