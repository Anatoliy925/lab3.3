
// Lab_03_3.cpp
   // < Шоха Анатолій >
   // Лабораторна робота No 3.3
   // Розгалуження, задане графіком функції.
   // Варіант 0.1
   #include <iostream>
   #include <cmath>
   
using namespace std;

int main() {
    double pi = atan(1)*4; //число пі
    double x;  // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    
    cout<<"R=";cin >>R;
    cout<<"x=";cin >>x;
    
      if(x < (-7-R) || ((-7+R)<x && x<=-4))
          y = R;
    else if (x>= (-7-R) && x<=(-7+R))
        y = R - sqrt(R*R - pow(x + 7, 2));
    else if (x >-4 && x < 0)
        y = (-1)*(x*R/4);
    else if (x >= 0 && x <= pi)
        y = sin(x);
    else
        y = x - pi;
        


cout << endl;
cout << "y = " << y << endl;
cin.get();
return 0; }
