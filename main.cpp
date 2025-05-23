#include <stdio.h>
#include<iostream>

class Vehicle {
public:
    virtual void engineType() const = 0;
};

class Ev : public Vehicle {
public:
    void engineType() const override {
        printf("Electric ButterEngine\n");
    }
};

class Car :public Vehicle {
public:
    void engineType() const override {
        printf("Gasoline Engine\n");
    }
};

int main() {
    Vehicle* vehicle1 = new Ev();
    Vehicle* vehicle2 = new Car();

    vehicle1->engineType();
    vehicle2->engineType();

    delete vehicle1;
    delete vehicle2;
	return 0;
}