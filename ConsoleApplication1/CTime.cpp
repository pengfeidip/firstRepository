#include <iostream>

using namespace std;

// default constructor
CTime::CTime()
{

	hours = 0;
	minutes = 0;
}

CTime::CTime(int h, int m)
{

	hours = h;
	minutes = m;
}

//destructor
CTime::~CTime()
{
	cout << "a CTime object is destoried" << endl;
}

//copy constructor
CTime::CTime(const CTime & obj)
{
	hours = obj.hours;
	minutes = obj.minutes;
}

/*
add hours from an int to the object
*/
void CTime::AddHours(int h)
{
	hours = hours + h;

}

// add minutes from an int to the object
void CTime::AddMinutes(int m)
{
	minutes = minutes + m;
	hours = hours + minutes / 60;
	minutes = minutes % 60;
	
}

//reset time
void CTime::ResetTime(int h=0, int m=0) 
{
	hours = h,
	minutes = m;
};


// show time about the object
void CTime::ShowTime() const
{
	cout << "\n 目前总用时是 " << hours << " hour,  " << minutes << " minutes" << endl;
}

// add two CTime objects 
CTime CTime::SumTime(const CTime & obj) const
{
	CTime result;
	result.hours = this->hours + obj.hours + (this->minutes + obj.minutes) / 60;
	result.minutes = (this->minutes + obj.minutes) % 60;

	return result;
}