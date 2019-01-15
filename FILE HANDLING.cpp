#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
    char name[30];
    int age;
    fstream file;
 
    file.open("aaa.txt",ios::out);
    if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    cout<<"\nFile created successfully."<<endl;
 
    //read values from kb
    cout<<"Enter your name: ";
    cin.getline(name,30);
    cout<<"Enter age: ";
    cin>>age;
    //write into file
    file<<name<<" "<<age<<endl;
 
    file.close();
    cout<<"\nFile saved and closed succesfully."<<endl;
 
    //re open file in input mode and read data
    //open file
    file.open("aaa.txt",ios::in);
    if(!file){
        cout<<"Error in opening file..";
        return 0;
    }
    file>>name;
    file>>age;
 
    cout<<"Name: "<<name<<",Age:"<<age<<endl;
    return 0;
}
