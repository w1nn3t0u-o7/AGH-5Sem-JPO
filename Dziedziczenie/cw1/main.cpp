#include <iostream>

class Animal {
public:
    virtual void makeSound() = 0;
    virtual ~Animal() {};
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    };
    ~Dog() {};
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    };
    ~Cat() {};
};

Animal* chooseAnimal(int n) {
    if (n %2 == 0) {
        return new Dog();
    } else {
        return new Cat();
    }
}

int main() {
    std::cout << "Enter a number: ";
    int x {};
    std::cin >> x;

    Animal* animal = chooseAnimal(x);
    animal->makeSound();

    delete animal;

    return 0;
}
