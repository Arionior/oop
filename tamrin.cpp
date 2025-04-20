#include <iostream>
using namespace std;

class Vehicle {
public:
    /.
    virtual void makeSound() const {
        cout << "Vehicle makes a sound!" << endl;
    }

    // دکترین تخریب‌کننده virtual
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    // 
    void makeSound() const override {
        cout << "Car goes vroom!" << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    // 
    void makeSound() const override {
        cout << "Motorcycle goes vroom-vroom!" << endl;
    }
};

class Bicycle : public Vehicle {
public:
    // ب
    void makeSound() const override {
        cout << "Bicycle goes ring-ring!" << endl;
    }
};

int main() {
    // ایجاد یک آرایه از اشاره‌گرهای Vehicle
    Vehicle* vehicles[3];

    // ساخت انواع مختلف وسایل نقلیه
    vehicles[0] = new Car();          // وسیله نقلیه از نوع Car
    vehicles[1] = new Motorcycle();   // وسیله نقلیه از نوع Motorcycle
    vehicles[2] = new Bicycle();      // وسیله نقلیه از نوع Bicycle

    // فراخوانی متد makeSound برای هر وسیله نقلیه
    for (int i = 0; i < 3; ++i) {
        vehicles[i]->makeSound();  // بر اساس نوع واقعی شیء، صدای مربوط به آن وسیله نقلیه چاپ می‌شود
    }

    // حذف شیء‌ها
    for (int i = 0; i < 3; ++i) {
        delete vehicles[i];
    }

    return 0;
}
