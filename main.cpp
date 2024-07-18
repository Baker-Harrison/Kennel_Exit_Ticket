#include <iostream>
#include "include/Kennel.h"

int main() {


cout <<  Kennel::getKennelCount() << endl;

Dog dog (3, "Bear", "Australian Shepherd");


Kennel kennel;
kennel.add(dog);

cout <<  Kennel::getKennelCount() << endl;

kennel.adoptDog();

cout <<  Kennel::getKennelCount() << endl;





return 0;


}
