#include <iostream>
#include <fstream>

using namespace std;

int main ()
{

    char arr[100];
    cout << "Enter your name and age" << endl;
    cin.getline(arr,100);

    //ofstream = output or write
    ofstream personalInfo("sampleDocOfPersonalInfo.txt", ios::app);
    personalInfo << arr;
    personalInfo.close();
    cout << " File write operation performed successfully" << endl;

    //ifstream = input or read

    cout << "Reading from file operations" << endl;

    char arr1[100];
    ifstream obj("sampleDocOfPersonalInfo.txt");
    obj.getline(arr1,100);

    cout << "array content: " << arr1 << endl;
    cout << "File operation completed" << endl;
    obj.close();



















return 0;
}
