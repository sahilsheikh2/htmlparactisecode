#include<iostream>
#include<fstream>
using namespace std;
 class book
{
    int book_id;
    char bookname[20];
    char authername[20];
    char no_of_book;
public: 
void add();
void display();
void search();
void update();
void delet();
void input()
{
cin>>book_id;
cin>>bookname;
cin>>authername;
cin>>no_of_book;
}
void output()
{
   cout<<" book id :"<<book_id; 
   cout<<"enter book name">>;
   cout<<"enter auther name">>;
   cout<<"enter no of book">>;
}
};
void book::add()
{
    book b1;
    fstream f1;
    f1.open("book.txt",ios::out);
    b1.input();
    f1.write((char*)&b1,sizeof (b1));
    cout<<"record written";
    cout<<"record does not exist";
    f1.close()

}

