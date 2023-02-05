#include<iostream>
using namespace std;
main()
{
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    string desire_fruit;
    cout<<"Enter name of fruit:";
    getline(cin,desire_fruit);
    int kg;
    int amount[4];
    cout<<"enter kgs:";
    cin>>kg;
    for(int i=0;i<4;i++)
    {
      amount[i]=kg*price[i];
    }
    for(int i=0;i<4;i++)
    {
        if(desire_fruit==fruit[i])
        {
            cout<<"the fruit"<<desire_fruit<<"="<<amount[i];
        }
    }
     
}