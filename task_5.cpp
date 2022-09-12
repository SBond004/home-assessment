#include <iostream>
#include "arrays_acrobatics.h"
using namespace std;

//завдання 1.1
char firstArray [5] = {'A', 'B', 'C', 'D', 'E'};

//завдання 1.2
int intergerArray [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//завдання 1.3
string my_name [4] = {"Serhii", "Serhii", "Serhii", "Serhii"};

//завдання 1.4
void printElements (int array[5], int i)
{
    cout << "The elements of array are: " << endl;
    for (i = 1; i <=5; i++)
    {
        cout << array [i-1] << endl;
        
    }
    cout << "*************************"<<endl;
}
//завдання 1.5
void printElements_2 (int array[5], int e, int index)
{
cout <<" Some elements is " << array [index] << endl;
}

//завдання 2.1
int N;
int number_Array [7] = {1, 2, 3, 4, 5, 6, 7};

//завдання 2.2
void print_Some_Element_Odd ()
{
int x=0;
int sum=0;
number_Array [N];
for ( x = 0; x <=N; x++)
{
    if (x%2!=0)
    {
       cout << "Odd elements are  " << number_Array [x-1] <<endl;
    }
}
}
void print_Some_Element_Even (int z, int sum, int N)
{
//int x=0;
//int sum=0;
number_Array [N]; 
for ( z = 0; z <=N; z++)
{
    if (z%2==0)
    {
       cout << "Even elements are  " << number_Array [z+1] <<endl;
    }
}
}
//завдання 2.3

void another_number_Array (int x, int sum, int N)
{
    number_Array [N];
for ( x = 1; x <=N; x++)
    if (x>2)
    {
        cout << "another element " << number_Array [x-1] <<endl;
    }
}
//завдання 3.1

void printAll ( char firstArray [5], int y )
{
 
  for (y = 0; y <5; y++)
  {
    cout << firstArray  [y] <<endl;
  }
}

int main ()

{

std::cout << firstArray [0]<< std::endl;  
// завдання 1.2
int i = 0;
for ( i = 0; i <= 9; i++)
    {
    cout << intergerArray [i] << endl;
    }

// завдання 1.3
int x = 0;
for ( x = 0; x <= 4; x++)
{
    cout <<  my_name [x] <<endl;
}

// завдання 1.4 та 1.5
int array [5] = {1, 2, 3, 4, 5};

printElements(array, 0);// -- функція до завдання 1.4
printElements_2 (array, 0, 4);// -- функція до завдання 1.5

//завдання 2.1
cout << " Enter size of elements our array ";
 
    cin>> N;
    cout << " Please, you array must consist of following numbers: 1, 2, 3, 4, 5, …, " << N <<endl;
    
int number_Array [N] = {1, 2, 3, 4, 5, 6, 7};

//завдання 2.2
print_Some_Element_Odd ();
print_Some_Element_Even (0, 0, 7);

//завдання 2.3
another_number_Array (0,0,7);

//завдання 3.1

printAll (firstArray, 0);
 
 //завдання 3.3
return_Element ();


return 0;
}