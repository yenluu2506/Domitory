#include <iostream>
#include <string>
using namespace std;

int numberStudent(int &n){
	cout << "Enter number of students: " << endl;
	cin >> n;
    return n;
}
int numberManage(int &n){
	cout << "Enter number of manages: "<< endl;
	cin >> n;
    return n;
}

int SoluongSinhvien(int &n){
	cout << "Nhap so luong sinh vien: " << endl;
	cin >> n;
    return n;
}
int SoluongQuanly(int &n){
	cout << "Nhap so luong quan ly: "<< endl;
	cin >> n;
    return n;
}

class Person{
    private:
        string name;
        int age;
        string address;
	string id;
	unsigned long int money;
        bool check;
    public:
	Person();
        ~Person();
	void setId(string id);
	string getId();
        string getName();
        void setName(string name);
        int getAge();
        void setAge(int age);
        string getAddress();
        void setAddress(string address);
	int numberStudent(int &n);
        int numberManage(int &n);
        int SoluongSinhvien(int &n);
        int SoluongQuanly(int &n);
        virtual void Nhap(int &);
        virtual void Xuat(int &);
        virtual void input(int &);
        virtual void output(int &);
        virtual void capnhatThongtin();
        virtual void updateInformation();
        virtual void tinhtien() = 0;
        double getMoney(){
            return money;
        }
        bool selection();
        void selection(bool check);
};
Person::Person(){
    name = "";
    age = 0;
    address = "";
    money = 0;
}
Person::~Person(){

}
bool Person::selection(){
    return this->check;
}
void Person::selection(bool check){
    this->check = check;
}
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

void Person::Nhap(int &n){
    cout << "Nhap ho va ten: ";
    fflush(stdin);
    getline(cin, name);
    cout << "Nhap tuoi: ";
    fflush(stdin);
    cin >> age;
    cout << "Nhap dia chi: ";
    fflush(stdin);
    getline(cin, address);
    cout<<"Nhap ma sinh vien: ";
    getline(cin, id);
	fflush(stdin);
}

void Person::input(int &n){
    cout << "Enter first and last name: ";
    fflush(stdin);
    getline(cin, name);
    cout << "Enter age: ";
    fflush(stdin);
    cin >> age;
    cout << "Enter address: ";
    fflush(stdin);
    getline(cin, address);
    cout<<"Enter student code: ";
    getline(cin, id);
	fflush(stdin);
}

void Person::Xuat(int &n){
    cout << "Ho va ten: "<< name<<endl;
    cout << "Nam sinh: "<< age<<endl;
    cout << "Dia chi: "<< address<<endl;
    cout<<"Ma sinh vien: "<<id<<endl;
}

void Person::output(int &n){
    cout << "First and last name: "<< name<<endl;
    cout << "Age: "<< age<<endl;
    cout << "Address: "<< address<<endl;
    cout<<"Student code: "<<id<<endl;
}

void Person::capnhatThongtin(){
    cout << "Nhap ho va ten: ";
    fflush(stdin);
    getline(cin, name);
    cout << "Nhap tuoi: ";
    fflush(stdin);
    cin >> age;
    cout << "Nhap dia chi: ";
    fflush(stdin);
    getline(cin, address);
}

void Person::updateInformation(){
    cout << "Nhap ho va ten: ";
    fflush(stdin);
    getline(cin, name);
    cout << "Nhap tuoi: ";
    fflush(stdin);
    cin >> age;
    cout << "Nhap dia chi: ";
    fflush(stdin);
    getline(cin, address);
}

class Student : public Person {
private:
	string identitycard; //số CMND
	int room; // số phòng ở
	unsigned long int unitprice; //dơn gia
	int violations; //số lần vi phạm
        double months; //số tháng ở
public:
	Student();
        ~Student();
	void setIdentitycard(double identitycar);
	double getIdentitycardnumber();
	void setRoom(int room);
	int getRoom();
	void setUnitprice (unsigned long int unitprice);
	double getUnitprice();
	void setViolations(int violations);
	int getViolations();
	double getMonths();
        void setMonths(double months);
        void Nhap(int &n);
        void Xuat(int &n);
        void input(int &n);
        void output(int &n);
        void tinhtien(){
            this->money = this->months*this->unitprice;
        }
        void capnhatThongtin();
        void updateInformation();
};
//Khai báo phương thức bên ngoài lớp

Student::Student(){
    id="";
    identitycard="";
    room = 0;
    unitprice = 0;
    violations = 0;
    months = 0;
}
Student::~Student(){

}
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
double Student::getMonths(){
    return months;
}
void Student::setMonths(double months){
    this->months = months;
}
double Student::getUnitprice() {
	return unitprice;
}
void Student::setUnitprice(unsigned long int unitprice) {
	this->unitprice = unitprice;
}
int Student::getViolations() {
	return violations;
}
void Student::setViolations(int violations) {
	this->violations = violations;
}

void Student::Nhap(int &n){
    Person::Nhap(n);
    cout<<"Nhap so CMND: ";
    getline(cin, identitycard);
	fflush(stdin);
    cout<<"Nhap so phong: ";
    cin>>room;
	fflush(stdin);
    cout << "Nhap so thang: ";
    cin >> months;
    fflush(stdin);
    cout<<"Nhap don gia: ";
    cin>>unitprice;
	fflush(stdin);
    cout<<"Nhap so lan vi pham: ";
    cin>>violations;
	fflush(stdin);
}

void Student::input(int &n){
    Person::input(n);
    cout<<"Enter your identity card number: ";
    getline(cin, identitycard);
	fflush(stdin);
    cout<<"Enter room number: ";
    cin>>room;
	fflush(stdin);
    cout << "Enter number months: ";
    cin >> months;
    fflush(stdin);
    cout<<"Enter unit price: ";
    cin>>unitprice;
	fflush(stdin);
    cout<<"Enter the number of violations: ";
    cin>>violations;
	fflush(stdin);
}

void Student::output(int &n){
    Person::output(n);
    cout<<"Identity card number: "<<identitycard<<endl;
    cout<<"Room number: "<<room<<endl;
    cout<<"Months number: "<< months<< endl;
    cout<<"Unit price: "<<unitprice<<endl;
    cout<<"The number of violations: "<<violations<<endl;
    this->tinhtien();
    cout<<"Boarding fee: "<< money << endl;
}

void Student::Xuat(int &n){
    Person::Xuat(n);
    cout<<"So CMND: "<<identitycard<<endl;
    cout<<"So phong: "<<room<<endl;
    cout<<"So thang: "<< months<< endl;
    cout<<"Don gia: "<<unitprice<<endl;
    cout<<"So lan vi pham: "<<violations<<endl;
    this->tinhtien();
    cout<<"So tien can dong noi tru: "<< money << endl;
}

void Student::capnhatThongtin(){
    Person::capnhatThongtin();
    cout<<"Nhap so CMND: ";
    getline(cin, identitycard);
	fflush(stdin);
    cout<<"Nhap so phong: ";
    cin>>room;
	fflush(stdin);
    cout << "Nhap so thang: ";
    cin >> months;
    fflush(stdin);
    cout<<"Nhap don gia: ";
    cin>>unitprice;
	fflush(stdin);
    cout<<"Nhap so lan vi pham: ";
    cin>>violations;
	fflush(stdin);
}

void Student::updateInformation(){
    Person::updateInformation();
    cout<<"Enter Identity card number: ";
    getline(cin, identitycard);
	fflush(stdin);
    cout<<"Enter Room number: ";
    cin>>room;
	fflush(stdin);
    cout << "Enter Months number: ";
    cin >> months;
    fflush(stdin);
    cout<<"Enter Unit price: ";
    cin>>unitprice;
	fflush(stdin);
    cout<<"The number of violations: ";
    cin>>violations;
	fflush(stdin);
}

class Manage : public Person{
private:
    	unsigned long int coefficientssalary; //Tiền lương
    	string position; //Chức vụ
	string phone; //CMND
    	int seniority; //thâm niên
public: 
    Manage();
    ~Manage();
    unsigned long int getCoefficientssalary();
    void setCoefficientssalary(unsigned long int coefficientssalary);
    double getSalary();
    void setSalary(double salary);
    string getPosition();
    void setPosition(string position);
    string getPhone();
	void setPhone(string phone);
    void tinhtien(){
        money = coefficientssalary*1600 + seniority*500;
    }
    void Nhap(int &n);
    void Xuat(int &n);
    void input(int &n);
    void output(int &n);
    void capnhatThongtin();
    void updateInformation();
};
Manage::Manage(){
    seniority = 0;
    position = "";
    phone = "";
    coefficientssalary = 0;
}
Manage::~Manage(){

}
unsigned long int Manage::getCoefficientssalary(){
    return coefficientssalary;
}
void Manage::setCoefficientssalary(unsigned long int coefficientssalary){
    this->coefficientssalary=coefficientssalary;
}
string Manage::getPosition(){
    return position;
}
void Manage::setPosition(string position){
    this->position=position;
}
string Manage::getPhone(){
	return phone;
}
void Manage::setPhone(string phone){
	this->phone=phone;
}

void Manage::Nhap(int &n){
    Person::Nhap(n);
    cout<<"Nhap so dien thoai: ";
    getline(cin, phone);
	fflush(stdin);
    cout<<"Nhap tham nien: ";
    cin>>seniority;
    fflush(stdin);
	cout<<"Nhap he so luong: ";
	cin>>coefficientssalary;
	fflush(stdin);
	cout<<"Nhap chuc vu: ";
	getline(cin,position);
}

void Manage::input(int &n){
    Person::input(n);
    cout<<"Enter your phone number: ";
    getline(cin, phone);
	fflush(stdin);
    cout<<"Enter seniority: ";
    cin>>seniority;
    fflush(stdin);
	cout<<"Enter salary: ";
	cin>>coefficientssalary;
	fflush(stdin);
	cout<<"Enter position: ";
	getline(cin,position);
}

void Manage::Xuat(int &n){
    Person::Xuat(n);
    cout<<"So dien thoai: "<<phone<<endl;
    cout<<"Tham nien: "<< seniority<< endl;
	cout<<"He so luong: "<<coefficientssalary<<endl;
	cout<<"Chuc vu: "<<position<<endl;
    this->tinhtien();
    cout<<"Luong: "<< money<< endl;
}

void Manage::output(int &n){
    Person::output(n);
    cout<<"Phone number: "<<phone<<endl;
    cout<<"Seniority: "<< seniority<< endl;
	cout<<"Salary: "<<coefficientssalary<<endl;
	cout<<"Position: "<<position<<endl;
    this->tinhtien();
    cout<<"Salary: "<< money<< endl;
}

void Manage::capnhatThongtin(){
    Person::capnhatThongtin();
    cout<<"Nhap so dien thoai: ";
    getline(cin, phone);
	fflush(stdin);
    cout<<"Nhap tham nien: ";
    cin>>seniority;
    fflush(stdin);
	cout<<"Nhap he so luong: ";
	cin>>coefficientssalary;
	fflush(stdin);
	cout<<"Nhap chuc vu: ";
	getline(cin,position);
}

void Manage::updateInformation(){
    Person::updateInformation();
    cout<<"Enter your phone number: ";
    getline(cin, phone);
	fflush(stdin);
    cout<<"Enter seniority: ";
    cin>>seniority;
    fflush(stdin);
	cout<<"Enter salary: ";
	cin>>coefficientssalary;
	fflush(stdin);
	cout<<"Enter position: ";
	getline(cin,position);
}

class Dormitory{
private:
    vector<Person *> list_person;

public:
    Dormitory();
    ~Dormitory();
    void Nhap();
    void Xuat();
    void input();
    void output();
    friend void inkhung();
    friend void inmenu1();
    void sapxepName();
    void SortName();
    void capnhatThongtin();
    void updateInformation();
    void capnhatID();
    void updateID();
    void timkiemAddress();
    void findAddress();
    void timkiemID();
    void findID();
    void xoaID();
    void deleteID();
};

Dormitory::Dormitory(){
}

Dormitory::~Dormitory(){
}
