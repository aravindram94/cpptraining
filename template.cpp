#include <iostream>
using namespace std;
template <class T>
class calc
{
  public:
    T multiply(T x, T y);
    T add(T x, T y);
};
template <class T>
T calc<T>::multiply(T x,T y)
{
  return x*y;
}
template <class T>
T calc<T>::add(T x, T y)
{
  return x+y;
}
template <typename T>
T add(T num1,T num2) {
    return num1+num2;
}
int main(){
calc<int> intCalc;
cout << intCalc.add(4,5) << endl;
cout << intCalc.multiply(4,5)<< endl;
//function template
cout << add(10,10);
}
