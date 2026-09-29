//
// Created by misha on 15.09.2026.
//
#include <iostream>
using namespace std;

// task 1
class Student {
protected: // use for child classes
    string name;
    int age;
    Student() {
        name = "";
        age = 0;
    }

public:
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void setName(string newName) {
        name = newName;
    }

    string getName() {
        return name;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    int getAge() {
        return age;
    }
};

class Aspirant : public Student {
public:
    Aspirant() {
        name = "asp";
        age = 20;
    }
};


// task 2
class Passport {
protected:
    string name;
    int birthDate;
    bool gender;
    Passport() {
        name = "";
        birthDate = 0;
        gender = true;
    }
public:
    void setName(string newName) {
        name = newName;
    }
    string getName() {
        return name;
    }
    void setBirthDate(int newBirthDate) {
        birthDate = newBirthDate;
    }
    int getBirthDate() {
        return birthDate;
    }
    void setGender(bool newGender) {
        gender = newGender;
    }
    bool getGender() {
        return gender;
    }
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "BirthDate: " << birthDate << endl;
        cout << "Gender: " << gender << endl;
    }

};

class ForeignPassport : public Passport {
private:
    bool visas{};
    int num;
public:
    ForeignPassport() {
        name = "";
        birthDate = 0;
        gender = "";
        visas = true;
        num = 10000 + rand() % 90000;
    }
    void setVisas(bool newVisas) {
        visas = newVisas;
    }
    bool getVisas() {
        return visas;
    }
    void setNum(int newNum) {
        num = newNum;
    }
    int getNum() {
        return num;
    }
    void printInfo() {
        Passport::printInfo();
        cout << "Visas: " << visas << endl;
        cout << "Pass number: " << num << endl;
    }

};


// task 3
class Transport {
protected:
    string name;
    double speed;
    double passengerPrice;
    double cargoPrice;
    double distance;
    int passengers;
    double cargo;

    Transport() {
        distance = 30;
        passengers = 1;
        cargo = 10;
    }

public:
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Time: " << distance / speed << " hours" << endl;
        cout << "Cost: " << distance *
            (passengers * passengerPrice + cargo * cargoPrice)
            << " UAH" << endl;
    }
};

class Car : public Transport {
public:
    Car() {
        name = "Car";
        speed = 60;
        passengerPrice = 2;
        cargoPrice = 0.1;
    }
};

class Bicycle : public Transport {
public:
    Bicycle() {
        name = "Bicycle";
        speed = 15;
        passengerPrice = 1;
        cargoPrice = 0.05;
    }
};

class Cart : public Transport {
public:
    Cart() {
        name = "Cart";
        speed = 5;
        passengerPrice = 1;
        cargoPrice = 0.08;
    }
};


// task 4
class Pet {
protected:
    string name;
    int age;
    string sound;
    Pet () {
        name = "";
        age = 0;
        sound = "";
    }
public:
    void setName(string newName) {
        name = newName;
    }
    string getName() {
        return name;
    }
    void setAge(int newAge) {
        age = newAge;
    }
    int getAge() {
        return age;
    }
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sound: " << sound << endl;
    }
};

class Cat : public Pet {
public:
    Cat () {
        name = "";
        age = 0;
        sound = "meow";
    }
};

class Dog : public Pet {
public:
    Dog () {
        name = "";
        age = 0;
        sound = "bark";
    }
};

class Parrot : public Pet {
public:
    Parrot () {
        name = "";
        age = 0;
        sound = "koko";
    }
};


int main() {
    Aspirant student;
    student.setAge(20);
    student.getAge();
    student.setName("zelensky");
    student.printInfo();

    Cat cat;
    cat.setName("cat");
    cat.printInfo();

    Car car;
    Bicycle bicycle;
    Cart cart;

    car.printInfo();
    bicycle.printInfo();
    cart.printInfo();
}