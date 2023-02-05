#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    string flag="non_boom";
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter array value"<<i+1<<":";
        cin>>array[i];
           
        if(array[i]==7||array[i]%10==0||array[i]%7==0)
        {
            flag="boom";
        }
      
     }
        cout<<flag;
}