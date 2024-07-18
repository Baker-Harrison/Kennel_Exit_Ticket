//
// Created by Harrison Baker on 7/18/24.
//

#include "../include/Kennel.h"
#include <iostream>

#include <ctime>

using namespace std;

int Kennel::kennelCount = 0;


 int Kennel::getKennelCount() {
	return kennelCount;
}



void Kennel::add(Dog d) {
	kennelCount++;
	dogs[kennelCount - 1] = d;

}






Dog Kennel::adoptDog() {



	if (kennelCount > 0)
	{

		kennelCount--;
		return dogs[kennelCount];
 	}
	else
	{
		return Dog(5, "Jack", "Poodle");
	}

}



void Kennel::printDogs()
{
	for (int i = 0; i < kennelCount; i++)
	{
		cout << "Dog " << i + 1 << endl << "Name: " << dogs[i].getName() << endl << "Age: " << dogs[i].getAge() <<  endl << "Breed: " << dogs[i].getBreed() << endl << "---------------------------" << endl;
 	}
}


