#pragma once
#include <iostream>
#include <string>

using namespace std;

class person
{
private:
	string name;
	int age;
	string id;
public:
	person(string name, int age, string id);
	virtual ~person();
	string getName();
	int getAge();
	string getID();
	void nhap();
	void in();
};

class sv : public person
{
private:
	string mssv;
	string truong;
	string nganh;
	float gpa;
public:
	sv(string name, int age, string id, string mssv, string truong, string nganh, float gpa);
	string getTruong();
	string getNganh();
	string getMSSV();
	void nhap();
	void in();
};

class hs : public person
{
private:
	string truong;
	string lop;
	float dtb;
public:
	hs(string name, int age, string id, string truong, string lop, float dtb);
	string getTruong();
	string getLop();
	float getDTB();
	void nhap();
	void in();
}; 

class cn : public person
{
private:
	int workingDay;
	long long luong;
public:
	cn(string name, int age, string id, int workingDay);
	int getWorkingDay();
	long long getLuong();
	void nhap();
	void in();
};

class ns : public person
{
private:
	int baihat;
public:
	ns(string name, int age, string id, int baihat);
	int getBaiHat();
	void nhap();
	void in();
}; 

class cs : public person
{
private:
	int cakhuc;
	int fan;
public:
	cs(string name, int age, string id, int cakhuc, int fan);
	int getCaKhuc();
	int getFan();
	void nhap();
	void in();
};




