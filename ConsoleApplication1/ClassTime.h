#ifndef MYHESDER_H_
#define MYHESDER_H_
#include <iostream>

using  std::cout;
using  std::endl;
class CTime
{
private:
	int hours;
	int minutes;
public:
	CTime();//default constructor
	CTime(int h, int m);
	~CTime();// destructor
	CTime(const CTime & obj) ;//copy constructor

	void AddHours(int h);
	void AddMinutes(int m);
	void ResetTime(int h, int m);
	void ShowTime() const;
	CTime SumTime(const CTime & obj) const;//// add hours from an int to the object





};

#endif // !MYHESDER_H_

