#include<iostream>


using namespace std;

int main()
{
string str= "Python is the best programming language programming";
cout <<  str<<'\n';
cout <<" Position of the programming word is :";
//cout<< str.find("programming");

cout << str.rfind("programming");
return 0;
}
