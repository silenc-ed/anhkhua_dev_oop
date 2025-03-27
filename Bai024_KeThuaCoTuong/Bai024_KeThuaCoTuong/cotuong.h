#pragma once
#include <iostream>
#include <vector>

using namespace std;

class chess {
protected:
    string color;
    int x, y;
public:
    chess(string color, int x, int y);
    virtual ~chess() {};
    virtual void move() = 0;
};

class king : public chess {
public:
    king(string color, int x, int y) : chess(color, x, y) {};
    void move();
};

class si : public chess {
public:
    si(string color, int x, int y) : chess(color, x, y) {};
    void move();
};

class tuong : public chess {
public:
    tuong(string color, int x, int y) : chess(color, x, y) {};
    void move();
};

class phao : public chess {
public:
    phao(string color, int x, int y) : chess(color, x, y) {};
    void move();
};

class ma : public chess {
public:
    ma(string color, int x, int y) : chess(color, x, y) {};
    void move();
};

class xe : public chess {
public:
    xe(string color, int x, int y) : chess(color, x, y) {};
    void move();
};

class tot : public chess {
public:
    tot(string color, int x, int y) : chess(color, x, y) {};
    void move();
};