#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string str;
  string str2="Writing ";
  string str3="print 10 and then 5 more";

  // used in the same order as described above:


  str.append(str2);

  str.append(str3,6,3);   // 2nd parameter takes as input which index to start appending from
                          // 3rd parameter takes as input where the input is the number of index upto which appending will occur from 2nd parameter
                          // "10 "

  str.append("dots are cool",5);            // "dots "
  str.append("here: ");                   // "here: "
  str.append(10,'.');   // first parameter takes the number of times the string has to be repeated;
                     // ".........."
  str.append(str3.begin()+8,str3.end());  // " and then 5 more"

  cout << str << endl;


  //cout << str << '\n';
  return 0;
}
