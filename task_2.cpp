#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //завдання 1

std::cout << "Enter number ";
float a;
std::cin >> a;

if (a > 0)
std::cout << "This number is POSITIVE" <<std::endl;
else
std::cout << "This number is NEGATIVE" <<std::endl;

std::cout << "Enter another number  ";
float b;
std::cin >> b;

if ( a > b )
std::cout << "The largest number is: " << a << std::endl;
else
std::cout << "The largest number is: " << b  << std::endl;

//завдання 2

std::cout << "Enter an enteger value <your_string_1> ";
float x;
std::cin >> x;

std::cout <<"Enter an enteger value <your_string_2> ";
float y;
std::cin >> y;

bool z = true;

if ( x == y)
std::cout << "<your_string_1> is equal <your_string_2>  " << true << std::endl;
else
std::cout <<"<your_string_1> is NOT equal <your_string_2>  " << false << std::endl;

  //завдання 3
  
  std::cout << "Enter first number ";
  float k;
  std::cin >> k;

  std::cout << "Enter second number ";
  float l;
  std::cin>> l;

  std::cout << "Enter third number ";
  float m;
  std::cin >> m;
  
  float maximum;
  
  if (k > l)
     {
              if (k > m) maximum = k;
              else maximum = m;
     }
    else {
       if (l > m) maximum = l;
       else maximum = m;
  }
std::cout <<"The largest number is " << maximum << std::endl;
  
  }
 

  
  


