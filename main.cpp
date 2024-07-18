#include <iostream>
#include "include/Kennel.h"

int main() {



cout << "Initial Kennel count: " << Kennel::getKennelCount() << endl << endl;

Dog dog (3, "Bear", "Australian Shepherd");


Kennel kennel;
kennel.add(dog);
kennel.add(dog);

kennel.printDogs();


cout << "Updated Kennel count: " << Kennel::getKennelCount() << endl << endl;

Dog adoptedDog1 = kennel.adoptDog();
Dog adoptedDog2 =  kennel.adoptDog();


cout << "Final Kennel count: " << Kennel::getKennelCount() << endl;






return 0;


}
