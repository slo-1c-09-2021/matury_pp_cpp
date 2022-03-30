#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream plik("cyfry.txt");
    string str;
    int suma;
    int najwieksza;
    int najmniejsza = 9999999;
    while(plik>>str)
    {
        for(int i=0; i<str.size(); i++)
        {
            suma +=  str[i];
        }
        if(suma>najwieksza) najwieksza = suma;
        if(suma<najmniejsza) najmniejsza = suma;
        suma = 0;
    }
    cout << najwieksza << endl;
    cout << najmniejsza;

}
