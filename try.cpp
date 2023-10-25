#include<iostream>
using namespace std;
class sbi{
   public: int account;
    long ifsc;
    char name[20];
    void enter(){
        cout<<"acountno"<<account;
        cout<<"ifsc"<<ifsc;
        cout<<"name"<<name;
    }
    void display(){
        cout<<"enter the account";
        cin>>account;
        cout<<ifsc;
        cout<<"enter the name";
        cin>>name;
    }};
    class fd: public sbi{
int age;
int amount;
int year;
float interst;
void enter(){
    cout<<"enter the age";
    cin>>age;
    cout<<"enter the account";
    cin>>account;
    cout<<"enter the year";
    cin>>year;
    cout<<"enter the interst";
    cin>>interst;
}
    };
int main(){
    
    return 0;
}