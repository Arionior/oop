#include <iostream>
#include <string>
using namespace std;

// کلاس معلم
class Teacher {
private:
    string name;
    int age;

public:
    // سازنده برای معلم
    Teacher(string n, int a) : name(n), age(a) {}

    // تابع برای نمایش اطلاعات معلم
    void displayInfo() {
        cout << "Teacher Name: " << name << endl;
        cout << "Teacher Age: " << age << endl;
    }
};

// کلاس دانش‌آموز
class Student {
private:
    string name;
    int age;
    int grade;

public:
    // سازنده برای دانش‌آموز
    Student(string n, int a, int g) : name(n), age(a), grade(g) {}

    // تابع برای نمایش اطلاعات دانش‌آموز
    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Grade: " << grade << endl;
    }
};

// کلاس مدرسه
class School {
protected:
    string schoolName;

public:
    // سازنده برای مدرسه
    School(string name) : schoolName(name) {}

    // تابع برای نمایش نام مدرسه
    void displaySchoolName() {
        cout << "School Name: " << schoolName << endl;
    }

    // تابع برای دسترسی به اطلاعات معلم
    void displayTeacherInfo(Teacher& teacher) {
        teacher.displayInfo();
    }

    // تابع برای دسترسی به اطلاعات دانش‌آموز
    void displayStudentInfo(Student& student) {
        student.displayInfo();
    }
};

int main() {
    // ایجاد اشیاء از کلاس‌ها
    Teacher teacher1("Mr. Smith", 40);
    Student student1("Alice", 15, 9);
    School school1("Green Valley High School");

    // نمایش اطلاعات مدرسه
    school1.displaySchoolName();

    // نمایش اطلاعات معلم و دانش‌آموز
    school1.displayTeacherInfo(teacher1);
    school1.displayStudentInfo(student1);

    return 0;
}
