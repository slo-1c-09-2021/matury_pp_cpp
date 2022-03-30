#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream plik("cyfry.txt");
    long int cyf;
    int parz;
    while(plik>>cyf)
    {
        if(cyf%2==0) parz++;
    }
    cout << parz;

}
