#include<iostream>
using namespace std;
int main()
{
    short int i,j,x,z,a[4][4],b[4][4],c[4][4];
    cout<<"***********************************************************"<<endl<<
    "                  MATRIX MULTIPLICATION                    "<<endl<<
    "*************************************************************"<<endl<<endl;


    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<"enter the value of "<<i<<" row and "<<j<<" column in first matrix:";
            cin>>a[i][j];
        }
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<"enter the value of "<<i<<" row and "<<j<<" column in sec matrix:";
            cin>>b[i][j];
        }
    }
    for(x=1;x<=3;x++)
    {
            for(i=1;i<=3;i++)
            {
                c[x][i]=0;
                for(j=1;j<=3;j++)
                {
                    c[x][i]=c[x][i]+(a[x][j]*b[j][i]);
                }
                cout<<c[x][i]<<" ";
            }
        cout<<endl;
    }
}
