#include <iostream>
using namespace std;

int main ()
{
// завдання 1.1.1

int count1 = 8;
int i1;
    for (i1 = 1; i1 <= count1; i1++)
     {
       std::cout << "Serhii" << std::endl;
     } 
std::cout << "-------------------------"<<std::endl;
//завдання 1.1.2

int count2 = 100;
int i2;
    for (i2 = 0; i2 <= count2; i2++)
    {
      std::cout << i2 << std::endl;
      
     } 
std::cout << "-------------------------"<<std::endl;

// завдання 1.1.3

int count3 = 10;
 int i3;
    for ( i3 = -10; i3 <= count3; i3++)
    {
      std::cout << i3 << std::endl;
     }
std::cout << "-------------------------"<<std::endl;     
// завдання 1.1.4

int count4 = 100;
int i4;
    for ( i4 = -100; i4 <= count4; i4++)
    { 
      std::cout << i4 << std::endl;
     }
std::cout << "-------------------------"<<std::endl;
// завдання 2.1
 
int N ;

std::cout << " Enter only POSITIVE enteger  ";
std::cin >> N;
 if (N > 0)
 {
  int a;
 int sum = 0;
    for (a = 0; a <= N; a++)
      {
       sum = sum + a;
      }
  cout << " Result " << sum << endl;
 }
 else 
 std::cout <<"ERROR! Enter only POSITIVE enterger"<<std::endl;

// завдання 2.2

std::cout << " Enter only POSITIVE enteger  ";
int N1 ;   
std::cin >> N1;
if (N1 > 0)
  { int sum = 0;
    int b = 0;
    
     while (b < N1)
     {
             b++;
             sum = sum + b; 
     }
      cout << "Result " << sum << endl;
      std::cout << "-------------------------"<<std::endl;
   }
   else
std::cout <<"ERROR! Enter only POSITIVE enterger"<<std::endl;
std::cout << "-------------------------"<<std::endl;

// завдання 3

int ticks = 2000000;
int z;
for (size_t z = 0; z < ticks; z++)
  {
     if (z % 1000000 == 0)
     {
          std:cout << "!!!!My-Homework-N4.docx auto save process is used" << std::endl;
     }
     else if (z % 500000 == 0)
     {
          std::cout << " ----Refresing Chrome page is used" << std::endl;
     }
     else if (z % 100000 == 0)
       {
          std::cout <<"Checking Wi-Fi connection  "<< std::endl;
       }
     else if (z % 1000 == 0)
       {
          std::cout <<"   Checking charging connection  "<< std::endl;
       }
     else if (z % 100 == 0)
       {
          std::cout <<"     Checking state of the left mouse button  "<< std::endl;
       }
     
  }
}    
     








