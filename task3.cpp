#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter string=";
    getline(cin,word);
    int lenght=word.length();
        if(lenght%2==0)
         {
            cout<<"true";
         }
         else
         {
            cout<<"false";
         }
    
}