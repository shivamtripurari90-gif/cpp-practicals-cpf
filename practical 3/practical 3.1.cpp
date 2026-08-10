#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int roll_no,sem,mobile;
    string name,branch;


    cout<<"********************************************************************************"<<endl<<
    "               STUDENT RECORD MANAGEMENT SYSTEM              "<<endl<<
    "*********************************************************************************"<<endl<<endl<<endl<<





    "software version :  1.2"<<endl<<endl<<endl<<






    "-----------------------------------------------------------------------------------"<<endl<<
    "                student registration                    "<<endl<<
    "-----------------------------------------------------------------------------------"<<endl<<endl;

    cout<<"enter roll number:";
    cin>>roll_no;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter branch:";
    cin>>branch;
    cout<<"enter sem:";
    cin>>sem;
    cout<<"enter mobile number:";
    cin>>mobile;

    cout<<"-----------------------------------------------------------------------------------"<<endl<<
    "                academic information                    "<<endl<<
    "-----------------------------------------------------------------------------------"<<endl<<endl;


    int maths,physics,chem;

    cout<<"enter maths marks:";
    cin>>maths;
    cout<<"enter physics marks:";
    cin>>physics;
    cout<<"enter chemistry marks:";
    cin>>chem;

    cout<<"-----------------------------------------------------------------------------------"<<endl<<
    "                academic summary                    "<<endl<<
    "-----------------------------------------------------------------------------------"<<endl;


    int total_marks;
    float avg_marks,perc;

    total_marks=maths+physics+chem;
    avg_marks=(maths+physics+chem)/3.0;
    perc =avg_marks ;

    cout<<"total marks:"<<total_marks<<endl;
    cout<<"average marks:"<<avg_marks<<endl;
    cout<<"percentage:"<<perc<<"%"<<endl;

    cout<<"-----------------------------------------------------------------------------------"<<endl<<
    "                student information                        "<<endl<<
    "-----------------------------------------------------------------------------------"<<endl<<endl;

    cout<<"enter roll number:"<<roll_no<<endl;
    cout<<"enter name:"<<name<<endl;
    cout<<"enter branch:"<<branch<<endl;
    cout<<"enter sem:"<<sem<<endl;
    cout<<"enter mobile number:"<<mobile<<endl;

    cout<<"-----------------------------------------------------------------------------------"<<endl<<endl;
}

