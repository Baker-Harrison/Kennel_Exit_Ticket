//
// Created by Harrison Baker on 7/18/24.
//

#include "../include/Dog.h"

Dog::Dog()
{

}
Dog::Dog(int Age, string Name, string Breed) {}


int Dog::getAge() const {
	return age;
}

void Dog::setAge(int age) {
	Dog::age = age;
}

const string &Dog::getName() const {
	return name;
}

void Dog::setName(const string &name) {
	Dog::name = name;
}

const string &Dog::getBreed() const {
	return breed;
}

void Dog::setBreed(const string &breed) {
	Dog::breed = breed;
}
