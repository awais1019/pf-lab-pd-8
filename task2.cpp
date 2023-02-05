#include<iostream>
using namespace std;
main()
{
    string movie[5]={"gladiator","starwars","terminator","takinglives","tombrider"};
    int price=500;
    string desire_movie;
    cout<<"Enter name of movie:";
    getline(cin,desire_movie);
    int discount[1];

    for(int i=0;i<5;i++)
    {
        if(desire_movie==movie[i])
        {
          if (i%2==0)
          {
            discount[i]=price*0.1;
            discount[i]=price-discount[i];
            cout<<discount[i];
          }
          else
          {
            discount[i]=price*0.05;
            discount[i]=price-discount[i];
            cout<<discount[i]; 
          }
          
        }
    }
     
}