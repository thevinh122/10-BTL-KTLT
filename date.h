#pragma once
#include<iostream>
#include<ctime>
using namespace std;

class Date {
	int day;
	int month;
	int year;
public:
	Date(int _d = 0, int _m = 0, int _y = 0);
	void getDate(int& _d, int& _m, int& _y);
	void setDate(int _d, int _m, int _y);

	int songay(const Date& ngay);

	void input();
	void display();

};