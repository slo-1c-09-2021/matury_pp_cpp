#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int suma;
    ifstream plik("hasla.txt");
    while(plik>>str)
        for(int j=0; j<str.size()-1; j++)
        {
            suma = (int)str[j] + (int)str[j+1];
            if(suma == 220)
            {
            cout << str << endl;
            suma = 0;
            break; }

        }
}
