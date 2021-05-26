#include <iostream>
using namespace std;

void asciiFigure(int size)
{
/*et is 8 for 8 * */
int et=8,l;

/*where l is the width */
l=8*(size-1);

/*printing the first row*/
for(int k = 1; k <=l/2; ++k)
{
cout <<"/";
}

for(int k = 1; k <=l/2; ++k)
{
cout <<"\\";
}
cout << endl;


/*decremented by 8 for next row*/
l=l-8;


/*nested loop for printing*/
for(int i = 1; i <= size-1; ++i)
{
for(int k = 1; k <=l/2; ++k)
{
cout <<"/";
}

for(int i=1;i<=et;i++)
{
   cout << "*";
}


for(int k = 1; k <=l/2; ++k)
{
cout <<"\\";
}


cout << endl;

/*increment the star number by 8*/
et=et+8;

/*decremented by 8 for every row*/
l=l-8;
}
   cout<<"\n";

}


int main()
{

   /*calling the functions for 3 ,5,7*/
   asciiFigure(3);
   asciiFigure(5);
   asciiFigure(7);
   return 0;
}

