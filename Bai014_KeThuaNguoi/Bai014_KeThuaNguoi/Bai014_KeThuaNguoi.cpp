#include "Bai014_KeThuaNguoi.h"

using namespace std;

//nguoi
person::person(string name, int age, string id) {
	this->name = name;
	this->age = age;
	this->id = id;
}

person::~person() {
}

string person::getName() {
	return name;
}

int person::getAge() {
	return age;
}

string person::getID() {
	return id;
}

void person::nhap() {
	cout << "Ho ten: ";
	getline(cin, name);
	
	cout << "Tuoi: ";
	cin >> age;

	cout << "ID: ";
	cin.ignore();
	getline(cin, id);
}


void person::in() {
	cout << "--------------------------------\n";
	cout << "Ho ten: " << name << "\n";
	cout << "Tuoi  : " << age << "\n";
	cout << "ID    : " << id << "\n";
}


//sinh vien
sv::sv(string name, int age, string id, string mssv, string truong, string nganh, float gpa)
	: person(name, age, id) {
	this->mssv = mssv;
	this->truong = truong;
	this->nganh = nganh;
	this->gpa = gpa;
}

string sv::getTruong() {
	return truong;
}

string sv::getNganh() {
	return nganh;
}

string sv::getMSSV() {
	return mssv;
}

void sv::nhap() {
	person::nhap();

	cout << "MSSV: ";
	cin.ignore();  
	getline(cin, mssv);

	cout << "Truong: ";
	getline(cin, truong);

	cout << "Nganh: ";
	getline(cin, nganh);

	cout << "GPA: ";
	cin >> gpa;
}



void sv::in() {
	cout << "======== SINH VIEN ========\n";
	person::in();
	cout << "MSSV  : " << mssv << "\n";
	cout << "Truong: " << truong << "\n";
	cout << "Nganh : " << nganh << "\n";
	cout << "GPA   : " << gpa << "\n";
	cout << "===========================\n";
}


//hoc sinh
hs::hs(string name, int age, string id, string truong, string lop, float dtb)
	: person(name, age, id) {
	this->truong = truong;
	this->lop = lop;
	this->dtb = dtb;
}

string hs::getTruong() {
	return truong;
}

string hs::getLop() {
	return lop;
}

float hs::getDTB() {
	return dtb;
}

void hs::nhap() {
	person::nhap();

	cout << "Truong: ";
	getline(cin, truong);

	cout << "Lop: ";
	getline(cin, lop);

	cout << "Diem trung binh: ";
	cin >> dtb;
	cin.ignore();
}

void hs::in() {
	cout << "======== HOC SINH ========\n";
	person::in();
	cout << "Truong: " << truong << "\n";
	cout << "Lop   : " << lop << "\n";
	cout << "DTB   : " << dtb << "\n";
	cout << "==========================\n";
}

//cong nhan
cn::cn(string name, int age, string id, int workingDay) : person(name, age, id) {
	this->workingDay = workingDay;
	this->luong = workingDay * 150000; 
}

long long cn::getLuong() {
	return luong;
}

int cn::getWorkingDay() {
	return workingDay;
}

void cn::nhap() {
	person::nhap();

	cout << "So ngay lam: ";
	cin >> workingDay;
	cin.ignore();

	luong = workingDay * 150000;
}



void cn::in() {
	cout << "======== CONG NHAN ========\n";
	person::in();
	cout << "Ngay lam: " << workingDay << "\n";
	cout << "Luong   : " << luong << "\n";
	cout << "===========================\n";
}


//nghe si
ns::ns(string name, int age, string id, int baihat)
	: person(name, age, id) {
	this->baihat = baihat;
}

int ns::getBaiHat() {
	return baihat;
}

void ns::nhap() {
	person::nhap();

	cout << "So bai hat: ";
	cin >> baihat;
	cin.ignore();
}


void ns::in() {
	cout << "======== NGHE SI ========\n";
	person::in();
	cout << "Bai hat: " << baihat << "\n";
	cout << "=========================\n";
}

//ca si
cs::cs(string name, int age, string id, int cakhuc, int fan)
	: person(name, age, id) {
	this->cakhuc = cakhuc;
	this->fan = fan;
}

int cs::getCaKhuc() {
	return cakhuc;
}

int cs::getFan() {
	return fan;
}

void cs::nhap() {
	person::nhap();

	cout << "So ca khuc: ";
	cin >> cakhuc;
	cin.ignore();

	cout << "So luong fan: ";
	cin >> fan;
	cin.ignore();
}


void cs::in() {
	cout << "======== CA SI ========\n";
	person::in();
	cout << "Ca khuc: " << cakhuc << "\n";
	cout << "Fan    : " << fan << "\n";
	cout << "=======================\n";
}




