#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    string id[50],name[50],m;
    int score[50],i,j,temp;

    cout<<"****************************************************************************"<<endl<<
        "              SPORTS EVENT SCORE ANALYSIS                    "<<endl<<
        "******************************************************************************"<<endl<<endl;

    cout<<"enter number of participants:";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"enter participant id:";
        cin>>id[i];
        cout<<"enter participant name:";
        cin>>name[i];
        cout<<"enter score:";
        cin>>score[i];
        cout<<endl;
    }

    cout<<"search student"<<endl;

    cout<<"Enter student id"<<endl;
    cin>>m;

    for(i=0;i<n;i++)
    {
        if(id[i]==m)
        {   cout<<"-------------------------------------"<<endl;
            cout<<"          participant found          "<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"     ID    :"<<id[i]<<endl;
            cout<<"    NAME   :"<<name[i]<<endl;
            cout<<"   SCORE   :"<<score[i]<<endl;
        }
    }

        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(score[i] < score[j])
                {
                    temp=score[i];
                    score[i]=score[j];
                    score[j]=temp;
                }
            }
            cout << "--------------------------------" << endl;
            cout << "          Ranking List          " << endl;
            cout << "--------------------------------" << endl;

            cout <<"Rank"<<"  "<<"Name"<<"  "<<"Score"<<endl;

            for(i = 0; i < n; i++)
            {
                cout <<i+1<<"  "<<name[i]<<"  "<<score[i]<<endl;
            }
            cout<<"top three performance"<<endl;
            for(i=0; i<3; i++)
            {
                cout<<i+1<<" "<<name[i]<<" "<<score[i]<<endl;
            }



        }

}
