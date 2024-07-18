//
// Created by Harrison Baker on 7/18/24.
//

#ifndef KENNEL_EXIT_TICKET_DOG_H
#define KENNEL_EXIT_TICKET_DOG_H

#include <iostream>


using namespace  std;


class Dog {
public:
	Dog();
	Dog(int Age, string Name,  string Breed);

	int getAge() const;

	void setAge(int age);

	const string &getName() const;

	void setName(const string &name);

	const string &getBreed() const;

	void setBreed(const string &breed);

private:
	int age;
	string name;
	string breed;








};


#endif //KENNEL_EXIT_TICKET_DOG_H
