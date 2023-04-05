//Student data
#include<iostream>
#include<string.h>

using std::cout;

struct Student
{
    char Name[35];
    size_t RollNumber;
    char Division;
    size_t GRNumber;
    size_t Year;
    char Branch[6];
};

void StructPrint(Student A)
{
    cout<<A.Name<<"\n";
    cout<<A.RollNumber<<"\n";
    cout<<A.Division<<"\n";
    cout<<A.GRNumber<<"\n";
    cout<<A.Year<<"\n";
    cout<<A.Branch<<"\n\n";
}

int main()
{
    Student S1;
    S1.RollNumber=04;
    strcpy(S1.Branch,"DESH");
    S1.Division='P';
    strcpy(S1.Name,"Abhishek Sharma");
    S1.GRNumber=123456789;
    S1.Year=1;

    Student S2;
    S2.RollNumber= 21;
    strcpy(S2.Branch,"DESH");
    S2.Division='Q';
    strcpy(S2.Name,"Anurag Purohit");
    S2.GRNumber=987654321;
    S2.Year=1;

    StructPrint(S1);
    StructPrint(S2);

    return 0;
}