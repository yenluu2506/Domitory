#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        string name;
        int age;
        string address;
	string id;
    public:
	void setId(string id);
	string getId();
        string getName();
        void setName(string name);
        int getAge();
        void setAge(int age);
        string getAddress();
        void setAddress(string address);
};
string Person::getName(){
    return name;
}
void Person::setName(string name){
    this->name = name;
}
int Person::getAge(){
    return age;
}
void Person::setAge(int age){
    this->age = age;
}
string Person::getAddress(){
    return address;
}
void Person::setAddress(string address){
    this->address = address;
}
double Student::getId() {
	return id;
}
void Student::setId(double id) {
	this->id = id;
}
class Student : public Person {
private:
	double identitycard; //số CMND
	int room; // số phòng ở
	double boardingfee; //phí nội trú
	int violations; //số lần vi phạm
public:
	void setIdentitycard(double identitycar);
	double getIdentitycardnumber();
	void setRoom(int room);
	int getRoom();
	void setBoardingfee(double boardingfee);
	double getBoardingfee();
	void setViolations(int violations);
	int getViolations();
	// void Nhap();
	// void Xuat();
};
//Khai báo phương thức bên ngoài lớp

double Student::getIdentitycardnumber() {
	return identitycard;
}
void Student::setIdentitycard(double identitycard) {
	this->identitycard = identitycard;
}
int Student::getRoom() {
	return room;
}
void Student::setRoom(int room) {
	this->room = room;
}
double Student::getBoardingfee() {
	return boardingfee;
}
void Student::setBoardingfee(double boardingfee) {
	this->boardingfee = boardingfee;
}
int Student::getViolations() {
	return violations;
}
void Student::setViolations(int violations) {
	this->violations = violations;
}

class Manage : public Person{
private:
    double salary;
    string position;
public: 
    Manage(string name, int age, string address, double salary, string position):Person(name, age, address){
        this->salary=salary;
        this->position=position;
    }
    double getSalary();
    void setSalary(double salary);
    string getPosition();
    void setPosition(string position);
};
double Manage::getSalary(){
    return salary;
}
void Manage::setSalary(double salary){
    this->salary=salary;
}
string Manage::getPosition(){
    return position;
}
void Manage::setPosition(string position){
    this->position=position;
}
