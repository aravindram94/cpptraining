#include <iostream>
using namespace std;

class StaticPolymorphismTest {
public:
void print(int number){
cout << "print with int . int : " << number << endl; }
void print(int number,float floatNum) {
cout << "print with int and float .  int : " << number <<"  float : " <<floatNum << endl;}
};


//inheritance
class Shape {
 public:
  virtual void draw(){ cout << "shape draw" << endl;}
};
class Circle : public Shape {
    public:
  void draw(){ cout << "circle draw" << endl;};
};
class Square : public Shape {
public:
  void draw(){ cout << "Square draw" << endl;};
};

//multiple inheritance
class Person {
     public:
  Person(){
  cout << "person called" << endl;}
};
class Father : public virtual Person {
    public:
  Father(){
  cout << "Father called" << endl;}
};
class Faculty : public virtual Person {
    public:
  Faculty(){
  cout << "Faculty called" << endl;}
};
class TeachingFather : public Father,public Faculty {
    public:
  TeachingFather(){
  cout << "TeachingFather called" << endl;}
};

int main() {
cout << "static polymorphism check" << endl;
StaticPolymorphismTest staticPolymorphismTest;
staticPolymorphismTest.print(40);
staticPolymorphismTest.print(40,56.00);
cout << "dynamic polymorphism check" << endl;
Shape *shape = new Circle();
shape->draw();
cout << "multiple inheritance check" << endl;
TeachingFather tf;
}






