#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int choice1;
class login {
    public: 
    char id[100];
    char password[100];

     void getID()
    {
        cout << "enter the username:";
        cin >> id;
        cout << "\nenter the password:";
        cin >> password;
    }
    void displaylogin(){
        cout << "username:" << id << endl;
        cout << "password:" << password << endl;
            }
};
class detail {
public:
    int train_no;
    char train_name[100];
    char boarding_time[100];
    char dest[100];
    int class1, class1_fare;
    int class2, class2_fare;
    int day, month,year;

    void getdetail(){
         cout << "enter the train number: ";
         cin >> train_no;
         cout << "enter the trin name: ";
         cin >> train_name;
         cout << "enter the boarding time: ";
         cin >> boarding_time;
         cout << "enter the destination: ";
         cin >> dest;
         cout << "enter the namber of seats in class1: ";
         cin >> class1;
         cout << "enter the fare of class1: ";
         cin >> class1_fare;
         cout << "enter the number of seats in class2: ";
         cin >> class2;
         cout << "enter the fare od class2: ";
         cin >> class2_fare;
         cout << "enter the day: ";
         cin >> day;
         cout << "enter the month: ";
         cin >> month;
         cout << "enter the year: ";
         cin >> year;
    }
    void displaydetail(){
        cout << "train number: "<< train_no << endl;
        cout << "train name: "<< train_name << endl;
        cout << "boarding time: "<< boarding_time << endl;
        cout << "destination: "<< dest << endl;
        cout << " class1 seats: "<< class1 << "fare: " << class1_fare << endl;
        cout << " class 2 seats: "<< class2 << "fare: " << class2_fare << endl;
        cout << "date: " << day << "/" << month << "/" << year << endl;   
    }
};

class Reservation :public detail {
    public:
    int passenger_no;
    int train_no;
    char train_name[100];
    char boarding_time[100];
    char dest[100];
    char passenger_name[100];
    int age;
    char classes[100];
    int day, month, year;
    int seat;
    char category;
    int amount;

    void getreservation() {
        cout << "enter the passenger number:";
        cin >> passenger_no;
        cout << "enter the train number:";
        cin >> train_no;
        cout << "enter the train name:";
        cin >> train_name;
        cout << "enter the boarding time:";
        cin >> boarding_time;
        cout << "enter the destination:";
        cin >> dest;
        cout << "enter the passenger name:";
        cin >> passenger_name;
        cout << "enter the age:";
        cin >> age;
        cout << "enter the class:";
        cin >> classes;
        cout << "enter the day:";
        cin >> day;
        cout << "enter the month:";
        cin >> month;
        cout << "enter the year:";
        cin >> year;
        cout << " enter the number of seats:";
        cin >> seat;
        cout << "enter the category:";
        cout <<"\n1.militry \n2.pwd \n3.senior citizen.\n4.none";
        cin >> category;
        cout << "enter the amount:";
        cin >> amount;
    }
    void displayreservation() {
        cout<<"passenger number:" << passenger_no << endl;
        cout<<"train number:" << train_no << endl;
        cout<<"train name:" << train_name << endl;
        cout<<"boarding time:" << boarding_time << endl;
        cout<<"destination:" << dest << endl;
        cout<<"passenger name:" << passenger_name << endl;
        cout<<"age:" << age << endl;
        cout<<"class:" << classes << endl;
        cout<<"date:" << day << "/" << month << "/" <<year << endl;
        cout<<"number of seats:" << seat << endl;
        cout<<"category:" << category << endl;
        cout<<"amount:" << amount << endl;

    }
};
void database();
void user();
void reserve();
void cancal();
void inquiry();
void newuser();

int main() {
    int choice, choice1;
    login login;
    detail d1;
    Reservation r1;
    
    do{
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout <<"~~~~~~~~~~~~~~~chose your operation~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout <<"||              [1].admin mode                          ||" << endl;
        cout <<"||              [2].user mode                           ||" << endl;
        cout <<"||              [3].new user mode                       ||" << endl;
        cout <<"||              [4].exit                                ||" <<endl;
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
 
        cout << "enter your choice = ";
        cin >> choice;

        switch(choice) {
            case 1:
                database();
                break;
            case 2:
                user();
                break;
            case 3: 
                newuser();
                break;
            default:
                cout << "invalid choice" << endl;     
        }
    } while (choice <=4);

    return 0;
}

void database() {
    login l1;
    int choice;
    char c;
    detail d1;
    fstream f1;
    char password[10] = "deepak";
    char enteredpassword[10];
    
    cout << "enter the password:";
    cin >> enteredpassword;

    if (strcmp(enteredpassword,password)!=0){
        cout << "wrong password" << endl;
    }else{
        do{
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "~~~~~~~~~~~ administrstion~~~~~~~~~~~~~~~~~~" << endl;
            cout << "~~~~~~~~~~||~~~~~~~~~~~~~~||~~~~~~~~~~~~~~~~" << endl;
            cout << "    ||     [1].add train detail      ||     " <<endl;
            cout << "    ||     [2].display train detail  ||     " <<endl;
            cout << "    ||     [3].modify train detail   ||     " <<endl;
            cout << "    ||     [4].delete train detail   ||     " <<endl;
            cout << "    ||     [5].user mangement        ||     " <<endl;
            cout << "    ||     [6].exit                  ||     " <<endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
            cout << "enter the choice ";
            cin >> choice;

            switch(choice){
                case 1: 
                    f1.open("train.txt", ios::out|ios::binary);
                    do {
                        d1.getdetail();
                        f1.write((char*)&d1,sizeof(d1));
                        cout << "do you want to add more detail?" << endl;
                        
                    }

            } 
        } 
        }



}