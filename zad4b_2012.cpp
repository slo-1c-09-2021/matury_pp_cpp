#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream plik("cyfry.txt");
    string str;
    string najwliczba;
    string najmliczba;
    int suma;
    int najwieksza;
    int najmniejsza = 9999999;
    while(plik>>str)
    {
        for(int i=0; i<str.size(); i++)
        {
            suma += (int)str[i] - '0';
        }
        if(suma>najwieksza)
        {
            najwieksza = suma;
            najwliczba =  str;
        }
        if(suma<najmniejsza)
        {
            najmniejsza = suma;
            najmliczba = str;
        }
        suma = 0;
    }
    cout << najwieksza << endl;
    cout << najwliczba << endl;
    cout << najmniejsza << endl;
    cout << najmliczba;

}
