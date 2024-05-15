#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class inheriting publicly
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived class inheriting privately
class Cat : private Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

// Derived class inheriting protectedly
class Bird : protected Animal {
public:
    void chirp() {
        cout << "Bird is chirping." << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();  // Accessible
    dog.bark(); // Accessible

    Cat cat;
    // cat.eat();  // Not accessible - compile-time error
    cat.meow(); // Accessible

    Bird bird;
    // bird.eat(); // Not accessible - compile-time error
    // bird.chirp(); // Not accessible - compile-time error

    return 0;
}
