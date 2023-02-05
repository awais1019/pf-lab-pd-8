#include<iostream>
using namespace std;
main(){
string str1;
cin>>str1;
string str2;
cin>>str2;
char charac;
int str1_len = str1.length();
int str2_len = str2.length();
// for comparing strings
int counter = 0;
for (int idx=0;idx<str2_len;idx++){
    for (int j=0;j<str1_len;j++)
if (str1[idx]==str2[j]){
    counter++;
    str2[j] = ' ';
    break;
}

}
cout<<"They have "<<counter<<" characters in common";
}