#include <iostream>
using namespace std;

//завдання 1.1.0
string text = "<name>";

  void printText ()
    {
    cout << text << endl;
    }
    //завдання 1.1.0
 string username;
 string usersurname;
 string userage;
 void enterPersonalData ()

        { cout << "Enter name ";
          cin >> username;
          cout <<"Name --> " << username << endl;
          cout << "Enter surname ";
          cin >> usersurname; 
          cout << "Surname --> "<< usersurname << endl;
          cout << "Enter age ";
          cin >> userage;
          cout << "Age is--> "<< userage << endl;
        }
  //завдання 1.1.1
  int a;
  int b;
  bool c = true;
  
   int equalazerNum ()
  { 
    cout << "Enter first number ";
    cin >> a;
    cout << "Enter second number ";
    cin >> b;
       if ( a < b || a > b)
        {
          cout << false <<endl;
        }
       else
        {
      cout << true << endl;
        }
    return c;
  }
//завдання 1.1.2
 int N;
 int i;
 int printNumber ()
   {
    std::cout << " Enter only POSITIVE enteger  ";
    std::cin >> N;
    if (N > 0)
      {
        int i;
        for (i = 0; i <= N; i++)
          {
            cout << i << endl;
          }
      }
    else 
            cout <<"ERROR! Enter only POSITIVE enterger"<<endl;
   return N;
   }
//завдання 1.1.3
int N1;
int l;
int sum;

 int printSum ()
     {
        cout << " Enter only POSITIVE enteger  ";
        cin >> N1;
         if (N1 > 0)
          {
           int sum = 0;
           for (l = 0; l <= N1; l++)
             {
                sum = sum + l; 
             }
        cout << "Sum of integer number is  " << sum << endl;
          }
         else 
        cout <<"ERROR! Enter only POSITIVE enterger" << endl;
 return sum;
     }
//завдання 2.1
long int N2;
int k;
long int result = 1;
  
  long int factorial ()
  {
   cout << "Enter number ";
   cin >> N2;
   
      if (N2 < 0)
        {
          cout << "Error! Enter positive number " <<endl;
        }
      else if (N2==0)
       {
        result = 1;
        cout << "Yes! Yes!!! I wasn't mistaken! It's " << result << endl;
       }
      
      else
       {
        for ( k = 1; k <= N2; k++)
        {
          result=result*k;
        }
       cout << "Factorial (n!) of your number is  " << result <<endl; 
       }
   return result;
    }

//завдання 2.1*
int calculateSumEven_Odd ()
{
     cout <<"Enter enteger ";
int N3 = 0;
cin >> N3;

cout <<"Enter 'e' for calculating sum of even nember or 'o' - sum of odd number ---> " ;
char userSelection ='\0';
cin >> userSelection;

int x = 0;
int sum_even = 0;
int sum_odd  = 0;
 do
    {
      if (x%2==0)
      sum_even+=x;
      if (x%2!=0 )
      sum_odd+=x; x++;
    } while (x<=N3);
    if (userSelection =='e')
    {
      cout << "You select sum of even number. It is "<< sum_even << endl;
    }
    else if (userSelection =='o')
    {
     cout << "You select sum of odd number. It is "<< sum_odd << endl;
    }
    
    return sum_even, sum_odd;
}
//завдання 3 (творче)
 string addUserToContacts (string nick_user, string num_phone_user, string user_ID)
{
  
  cout << "Add nickname user  ";
  cin >> nick_user;
  cout << "Add phone number user ";
  cin >> num_phone_user;
  cout << "Add user ID ";
  cin >> user_ID;
 
 return nick_user, num_phone_user, user_ID;
}

void sendMessage (string nick_user, string num_phone, string text)
{
  
cout<< " Enter contact  " << nick_user << " phone number-- >"<< num_phone << endl;
cout << " Enter text ";
cin >> text;
  if ( nick_user == "Serhii"&& num_phone == "+380965564796" )
   {
    cout << "SEND" << endl;
   }
  else
   {
    cout <<"ERROR"<< endl;
   }
}

void makeAudioCall (string user_id, bool state) 
{
cout << "Enter user ID ";
cin >> user_id;
if (state == true && user_id == "852369")
  {
   cout << "Audiocall in process "<<endl;
  }
else
  {
   cout << "Sorry:(User OFFLINE" << endl;
  }
}

void makePhoneCall (string num_phone)
{
cout << " Enter phone number " << endl;
cin >> num_phone;
cout << " Colling ... ... " <<endl;
}

    
int main ()
  {
  cout << "--------------1.1.0----------------" <<endl;
  printText ();
  cout << "--------------1.1.0----------------" <<endl;
  enterPersonalData();
  cout << "--------------1.1.1--------------" <<endl;
  equalazerNum ();
  cout << "--------------1.1.2--------------" <<endl;
  printNumber ();
  cout <<"---------------1.1.3--------------" <<endl;
  printSum ();
  cout <<"-----------------2.1-------------"<<endl;
  factorial ();
  cout <<"-----------------2.1*------------"<<endl;
 calculateSumEven_Odd ();
 
 //завдання 3 (творче)
   addUserToContacts ("Serhii", "+380965564796", "ID852369");
   cout<< "-----------Messaging----------"<<endl;
   sendMessage ("Serhii", "+380965564796", "");
   cout << " ----Make audiocall :)---" <<endl;
    makeAudioCall ("", true);
    cout << "-----Make Phonecall -----"<< endl;
    makePhoneCall ("");
 //зміг тільки нафантазувати для одного користувача((

  
  }
  