#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream plik("cyfry.txt");
    string str;
    bool rosnaca;
    while(plik>>str)
    {
        for(int i=0; i<str.size()-1; i++)
        {
            if(str[i]>=str[i+1]) rosnaca = 0;
        }
        if(rosnaca) cout << str << endl;
        rosnaca = 1;
    }

}
