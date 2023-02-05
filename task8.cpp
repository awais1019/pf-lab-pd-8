#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter number of colours:";
    cin >> size;
    string array[size];
     int time = size * 2;
    for (int indx = 0; indx < size; indx++)
    {
        cout << "colour name:";
        cin>> array[indx];
    }
    for (int indx = 0; indx < size; indx++)
    {
        if (array[indx] != array[indx + 1])
        {
            time = time + 1;
        }
    }
   
    cout << time-1;
}