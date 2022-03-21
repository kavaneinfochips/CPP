#include<iostream>
#include<fstream>
using namespace std;

void options();
void menu();
void search();
void add();


class Student
{
    
     int ID;
     char name[20];
     char branch[20];
     char loc[20];
     
     public:
     void getdata();
     void display();
     int getno() {return ID;}
}s;


void Student::getdata()
{
     cout<<"Enter ID : ";
     cin>>ID;
     cout<<"Enter Name     : ";
     cin>>name;
    
     cout<<"Enter Branch     : ";
     cin>>branch;
    
     cout<<"Enter Location     : ";
     cin>>loc;
     
     // cin.getline(name,20);
     // gets(name);

}
void Student::display()
{
    
     cout<<"ID : "<<ID<<"\tName  : "<<name<<"\n";
     cout<<"Branch    : "<<branch <<"\tLocation : "<<loc<<"\n";
     
}


int main()
{
     int id;
     fstream fp("stud.dat",ios::in|ios::out|ios::binary);
     menu();
    
     return 0;
}



void options()
{
     cout<<"\t1: enter Student detail\n";
     cout<<"\t2: find Student\n";
     cout<<"\nEnter Your Choice  : ";
}


void menu()
{
     int ch;
     options();
     cin>>ch;
     while(ch)
     {
           switch(ch)
           {
                  case 1: 
                            add(); break;
                  case 2:
                            search(); break;
                  default:
                        
                            try
                            {
                                throw ch;
                            }
                            catch(int)
                            {
                                cout << "Caught an exception -- value is: ";
                                cout << ch << "\n";
                                cout<<"Wrong Input please enter the correct value...."<<endl;
                            }
           }
        
           options();
           cin>>ch;
     }
}


void search()
{
     ifstream fin("stud.dat",ios::in|ios::binary);
     int ID,i=0;
     char found='n';
     cout<<"Enter ID to be searched : ";
     cin>>ID;

     while(fin.read((char*)&s,sizeof(s)))
     {
          if(s.getno()==ID)
          {
               s.display();
               found='y';
          }
          i++;
     }
     if(found=='n') cout<<"\nThe ID "<<ID<<" is not in the file...\n";
     fin.close();
}


void add()
{
         char ch='y';
         ofstream fout("stud.dat",ios::out|ios::app|ios::binary);
         while(ch=='y'||ch=='Y')
         {
              s.getdata();
              fout.write((char*)&s,sizeof(s));
              cout<<"\nDo you want to add more : ";
              cin>>ch;
         }
         cout<<"\nData Appendedn\n";
         fout.close();
}
