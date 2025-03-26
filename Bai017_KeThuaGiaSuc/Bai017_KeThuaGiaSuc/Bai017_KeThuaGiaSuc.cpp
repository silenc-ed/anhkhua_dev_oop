#include "Bai017_KeThuaGiaSuc.h"

void Cow::reproduce() {
    count += rand() % 5 + 1; 
}

int Cow::produceMilk() {
    return count * (rand() % 21); 
}

void Sheep::reproduce() {
    count += rand() % 3 + 1; 
}

int Sheep::produceMilk() {
    return count * (rand() % 6);
}

void Goat::reproduce() {
    count += rand() % 4 + 1;
}

int Goat::produceMilk() {
    return count * (rand() % 11); 
}