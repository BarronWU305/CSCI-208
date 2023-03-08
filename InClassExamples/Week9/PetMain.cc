#include<iostream>
#include "Cat.h"
#include "Dog.h"
#include "Bird.h"
#include "Snake.h"

using namespace std;

void PrintPetInfo( const Pet &myPet ) {
    cout << myPet.GetName() << " :: "
         << myPet.GetAge()  << " :: "
         << myPet.Vocalize() 
         << " :: has " << myPet.GetLegCount() << " legs." 
         << endl;    
}

int main() {
    Cat a("Jessie", 15);
    Dog b("Nina", 2);
    Bird c("Geoff", 5);
    Snake d("Suzie", 3);

    PrintPetInfo(a);
    PrintPetInfo(b);
    PrintPetInfo(c);
    PrintPetInfo(d);

//    a.IncrementAge();
//    PrintPetInfo(a);


    return 0;
}