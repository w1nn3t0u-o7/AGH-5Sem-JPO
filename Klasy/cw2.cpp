#include <iostream>
#include <string>

class Student {
private:
    std::string m_name {};
    int m_age {};

public:
    void setAge(int a) {
        if (a >= 0) {
            m_age = a;
        }else {
            std::cout << "Age cannot be negative!" << std::endl;
        }
    }
    int getAge() const {
        return m_age;
    }
    void setName(std::string n) {
        if (!n.empty()) {
            m_name = n;
        }else {
            std::cout << "Name cannot be empty!" << std::endl;
        }
    }
    std::string getName() const {
        return m_name;
    }
};

int main() {
    Student student;
    student.setAge(22);
    student.setName("Mikolaj");

    std::cout << "Hi, I'm " << student.getName() << ", I am a " << student.getAge() << " years old student!" << std::endl;
}