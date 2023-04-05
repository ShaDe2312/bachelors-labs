//Student

#include<iostream>
#include<cstring>


using namespace std;

class student
{
private:
    char name[20];
    int roll;
    char address[50];
    char gender[6];
    char hobby[16];
public:
    void accept()
    {
        printf("Enter name:\t");
        gets(name);
        printf("\nEnter Address:\t");
        gets(address);
        printf("\nEnter Gender:\t");
        gets(gender);
        printf("\nEnter Hobby:\t");
        gets(hobby);
        printf("\nEnter roll number:\t");
        cin>>roll;
    }

    void display()
    {
        cout<<"\n\nName: "<<name<<"\n";
        cout<<"Roll number: "<<roll<<"\n";
        cout<<"Address:"<<address<<"\n";
        cout<<"Gender: "<<gender<<"\n";
        cout<<"Hobby: "<<hobby<<"\n";
    }
};

int main()
{   
    student s;
    s.accept();   
    s.display(); 
    
    return 0;
}