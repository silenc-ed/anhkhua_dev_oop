#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal {
protected:
    int count; 
    string sound;
public:
    Animal(int c, string s) : count(c), sound(s) {}
    virtual ~Animal() {}
    virtual void reproduce() = 0;
    virtual int produceMilk() = 0;
    virtual string getSound() { return sound; }
    int getCount() { return count; }
};

class Cow : public Animal {
public:
    Cow(int c) : Animal(c, "Moo") {}
    void reproduce() override;
    int produceMilk() override;
};

class Sheep : public Animal {
public:
    Sheep(int c) : Animal(c, "Baa") {}
    void reproduce() override;
    int produceMilk() override;
};

class Goat : public Animal {
public:
    Goat(int c) : Animal(c, "Meh") {}
    void reproduce() override;
    int produceMilk() override;
};

