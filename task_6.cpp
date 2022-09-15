#include <iostream>
using namespace std;
//завдання 1
class myPhone
{
private:
    string model;
    int RAM;
    string OS;
    int version_OS;
public:
    myPhone ()
    {
    model = "Sony Xperia 1 II";
    RAM = 8;
    OS = "Android";
    version_OS = 12;
    }
   
    ~myPhone() {};

void data ()
{
    cout << "model: "      << model <<endl;
    cout << "RAM: "        << RAM << " GB"<< endl;
    cout << "OS: "         << OS << endl;
    cout << "version_OS: " << version_OS << endl;
}

void set_version_OS (int new_version_OS )
{
version_OS = new_version_OS;
}

void set_model(string new_model)
{
model = new_model;
}

int get_version_OS () 
{
   return version_OS;
}

string get_model ()
{
return model;
}

};

 //завдання 2
class Laptop
{
private:
    string brand;
    int RAM_lap;
    float frequency;
    int storage;
    float weight;
    float size_screen;
public:
    Laptop()
    {
      brand = "HP";
      RAM_lap = 8;
      frequency = 2.4;
      storage = 256;
      weight = 1.1;
      size_screen = 15;
    }
    Laptop (string brand)
    { 
    }
~Laptop(){};
void showTechChar()
{
    cout << " *Technical characteristic of laptop*  :"                        << endl;
    cout << " RAM "                                    << RAM_lap   << " GB"  << endl;
    cout << " Frequency of processor  "                << frequency << " GHz" << endl;
    cout << " Internal storage "                        <<  storage  << " GB"  << endl;
}
void showPhysicalChar()
{
    cout << " *Physical characteristic of laptop* :"      << endl;
    cout << "Weight of laptop " << weight      << " kg"   << endl;
    cout << "Size of screen "   << size_screen << " inch" << endl;
}

string getCompanyName ()
{
    return brand;
}

float getFreq ()
{
    return frequency;
}

void setCompanyName ( string com_name)
{
    brand = com_name;
}
};
 
 //завдання 3.1
class SocialMedia
{
private:
    string name_surname;
    int userID;
    string email;
public:
    SocialMedia()
    {
        name_surname = "Harry Potter";
        userID = 0x1000077;
        email = "moonfrogg@live.com";
    }
    ~SocialMedia() {};

int getUserID ()
{
    return userID;
}
string getEmail ()
{
    return email;
}

};
//завдання 3.2
class Twitter : public SocialMedia
{
private:
    string twiAccountName;
    int followers_N;
    int follow_N;
    int posts_N;
public:
    Twitter  ()
    {
     twiAccountName = "Expecto Patron:)";
     followers_N = 12589;
     follow_N = 15;
     posts_N = 56;
    }
    ~Twitter  () {};

void setTwiAccountName (string new_AccName)
{
twiAccountName = new_AccName;
}
string gettwiAccountName ()
{
    return twiAccountName;
}

void setfollowers_N (int newFollowers_N)
{
    followers_N = newFollowers_N;
}
int getfollowers_N ()
{
    return followers_N;
}

void setfollow_N ( int newFollow_N)
{
    follow_N = newFollow_N;
}
int getfollow_N ()
{
    return follow_N;
}

void setPosts_N ( int newPosts_N)
{
    posts_N = newPosts_N;
}
int getPosts ()
{
    return posts_N;
}

string addNewPost (string new_tweet)
{
cout <<" Your tweet --]]·> " << new_tweet << endl; 
return new_tweet;
}
int addFollowing()
{
    follow_N= follow_N + 1;
    cout << "You have subcribed to the user. The number of users you are subscribe to is " << follow_N <<"." << endl;
    return follow_N;
}
int delFollower()
{
    followers_N = followers_N - 1;
    cout << "OOPS! Harry! You lost follower. The number of followers is " << followers_N << "." << endl;
    return followers_N;
}
};

int main ()
{
//завдання 1
myPhone Sony;
Sony.data();
   
//завдання 2

Laptop Our_laptop;
Our_laptop.showTechChar();
Our_laptop.showPhysicalChar();

//завдання 3
Twitter Potter;
Potter.addNewPost("Greatness gives birth to envy, envy gives birth to evel, lies - sparks of evel.");
Potter.addFollowing();
Potter.delFollower();
}