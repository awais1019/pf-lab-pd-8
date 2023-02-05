#include<iostream>
using namespace std;
main()
{
    int number[3];
    for(int idx=0;idx<3;idx++)
    {
        cout<<"Enter number in string:";
        cin>>number[idx];
    }
        int transformation;
        cout<<"Enter number of time even-odd transformation:";
        cin>>transformation;
        int newvalue[3];
        int k=0;
       for(int idx=0;idx<3;idx++)
        {
          for(int j=0;j<transformation;j++)
          {
            if (number[idx]%2!=0)
            {
              newvalue[k]= number[idx]+2;
              number[idx]=newvalue[k];
              
            }
            else
            {
              newvalue[k]=number[idx]-2;
              number[idx]=newvalue[k];

            }
           
             
          }
           cout<<newvalue[k]<<" ";
          
         
        }
}