#include<iostream>
#include"clock.h"
using namespace std;

Clock::Clock(int NewH,int NewM,int NewS)
{
	this->Hour=NewH;
	this->Minutes=NewM;
	this->Second=NewS;
}

Clock::Clock(Clock &c)
{
	this->Hour=c.Hour;
	this->Minutes=c.Minutes;
	this->Second=c.Second;
}

void Clock::SetTime(int NewH,int NewM,int NewS)
{
	this->Hour=NewH;
	this->Minutes=NewM;
	this->Second=NewS;
}

void Clock::ShowTime()
{
	cout<<Hour<<endl;
	cout<<Minutes<<endl;
	cout<<Second<<endl;
}

Clock::~Clock()
{

}

int main(int argc, char const *argv[])
{
	Clock c(0,0,0);
	
	c.SetTime(10,20,30);
	c.ShowTime();

	Clock c1(c);
	c1.ShowTime();
	c1.SetTime(90,98,99);
	c1.ShowTime();
	return 0;






}

