//
// Created by Harrison Baker on 7/18/24.
//

#ifndef KENNEL_EXIT_TICKET_KENNEL_H
#define KENNEL_EXIT_TICKET_KENNEL_H


#include "../include/Dog.h"

class Kennel {

private:
	static int kennelCount;
	Dog* dogs = new Dog[kennelCount];

public:
	void add(Dog &d);
	Dog adoptDog();

	void printDogs();


	static int getKennelCount();

};


#endif //KENNEL_EXIT_TICKET_KENNEL_H
