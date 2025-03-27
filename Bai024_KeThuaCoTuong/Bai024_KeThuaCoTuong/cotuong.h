#pragma once
//#include "cotuong.cpp"
#include <iostream>
#include <string>

using namespace std;

struct toado {
	int x, y;
};

string board[10][9];

class quanco
{
protected:
	toado vitri;
	string color;
public:
};

class TUONG : public quanco {
public:
	toado dichuyen() {
		toado vitriquan, vitriden;
		nhap(vitriquan);

	}
	
};

class si : public quanco {
public:
	toado dichuyen;
};

class tuong : public quanco {
public:
	toado dichuyen;
};

class ma : public quanco {
public:
	toado dichuyen;
};

class phao : public quanco {
public:
	toado dichuyen;
	toado anquan;
};

class xe : public quanco {
public:
	toado dichuyen;
};

class tot : public quanco {
public:
	toado dichuyen;
	bool qua_song;
};

class nothing : public quanco {
};