#include<iostream>
using namespace std;
main()
{
    string array[4];
    for(int indx=0;indx<4;indx++)
    {
        cout<<"element in string:";
        getline(cin,array[indx]);   
    }
    int indx=0;
    if(array[indx]==array[indx+1]&&array[indx+2]==array[indx+3])
    {
       cout<<"true";
    }
    else
    {
          cout<<"false";
    }
     
}