#include <iostream>
using namespace std;
class Test {
private:
     string name;
     int age;
public:
    static int staticData;
    static int add(int num1,int num2);
    Test(string str,int num):name(str),age(num){
    }

    Test(const Test &test){
    cout << "copyconstructor called" << endl;
    this->name = test.name;
    this->age = test.age;
    }

    void operator+(const Test& test){
    this->name = this->name + " " + test.name;
    this -> age = this -> age + test.age;
    }

    void scopeTest(string name){
    cout<<name << endl;
    cout<<this->name << endl;
    }

    void print(){
    cout << "name : " << this->name << endl;
    cout << "age : " << this->age << endl;}

    friend void showPrivateData(Test);
    ~Test(){
    cout<<"destructor called " << endl;}


};
template <typename T>
T const& templateAddition (T const& num1, T const& num2)
{
    return num1+num2;
}
void showPrivateData(Test t){
    cout << "name : " << t.name << endl;
    cout << "age : " << t.age << endl;
}
int Test::staticData = 10;
int Test::add(int num1,int num2) {
return num1+num2;}
int main(){
    Test test("aravind",20);
    test.print();
    Test testCopy = test;
    testCopy.print();
    cout << "static test" << endl;
    cout << "data member" << Test::staticData << " function call : add(4,5) " << Test::add(4,5) << endl;
    cout << "operator overloading + operator" << endl;
    test+testCopy;
    test.print();
    cout << "Function template test" <<  endl;
    int num1 = 10;
    int num2 = 20;
    cout << templateAddition(num1,num2) << endl;
        cout << "calling friend function" << endl;
    showPrivateData(test);
}

