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
}



void Kennel::adoptDog() {

	if (kennelCount > 0)
	{
		kennelCount--;
 	}

}


