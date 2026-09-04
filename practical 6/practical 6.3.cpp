#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    short int n,i,j,score[50],m,y;
    char id[50][10],name[50][20],grade[50][5],x[10];
    cout<<"*********************************************************************************"<<endl<<
    "               STUDENT RECORD MANAGEMENT SYSTEM              "<<endl<<
    "*********************************************************************************"<<endl<<endl<<endl;

    cout<<"1.enter student record  2.current record  status 3.insert record"<<endl;

   //enter student detail
    cout<<"enter number of students:";
    cin>>n;
    cout<<"enter students detail"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"enter participant id:";
        cin>>id[i];
        cout<<"enter participant name:";
        cin>>name[i];
        cout<<"enter percentage:";
        cin>>score[i];
        cout<<"enter grade:";
        cin>>grade[i];
    }
    cout<<"------------------------------------------"<<endl;



    //current record status
    cout<<"      current students records            "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(8)<<id[i]<<setw(5)<<name[i]<<setw(5)<<score[i]<<setw(5)<<grade[i]<<endl;

    }
    cout<<"------------------------------------------"<<endl;

    //insert new student detail
    cout<<"    insert new student                    "<<endl;
    cout<<"enter position:";
    cin>>m;
    m=m-1;

    for(i=n;i>m;i--)
    {
        strcpy(id[i],id[i-1]);
        strcpy(name[i],name[i-1]);
        score[i]=score[i-1];
        strcpy(grade[i],grade[i-1]);
    }

    cout<<"enter new student detail"<<endl;

    cout<<"enter participant id:";
    cin>>id[m];
    cout<<"enter participant name:";
    cin>>name[m];
    cout<<"enter percentage:";
    cin>>score[m];
    cout<<"enter grade:";
    cin>>grade[m];
    n=n+1;

    cout<<endl;
    cout<<"record inserted successfully"<<endl;
    cout<<"------------------------------------------"<<endl<<endl;
    cout<<"    Updated Student Record                 "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(8)<<id[i]<<setw(5)<<name[i]<<setw(5)<<score[i]<<setw(5)<<grade[i]<<endl;
    }
    cout<<"    Update Student Record                 "<<endl;
    cout<<"enter participant id:";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(strcmp(id[i],x)==0)
        {
            cout<<"enter participant name:";
            cin>>name[i];
            cout<<"enter percentage:";
            cin>>score[i];
            cout<<"enter grade:";
            cin>>grade[i];
        }

    }
    cout<<"delete student record"<<endl;
    cout<<"enter student position"<<endl;
    cin>>y;
    y=y-1;
    for(i=y;i<n-1;i++)
    {
        strcpy(id[i],id[i+1]);
        strcpy(name[i],name[i+1]);
        score[i]=score[i+1];
        strcpy(grade[i],grade[i+1]);
    }
    n=n-1;
    cout<<"    record deleted successfully                  "<<endl;
    cout<<"-------------------------------------------------"<<endl<<endl;
    cout<<"         final student list                      "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(8)<<id[i]<<setw(5)<<name[i]<<setw(5)<<score[i]<<setw(5)<<grade[i]<<endl;
    }













}
