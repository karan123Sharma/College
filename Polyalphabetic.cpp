#include <iostream>
using namespace std;
int main()
{
    string Str = "wearediscoveredsaveyourself";
    string key, Enc, Dec;
    cin >> key;
    for (int i = 0; i < Str.size(); i++)
    {
        key += key[i];
    }
    for (int i = 0; i < Str.size(); i++)
    {
        Enc += (Str[i] - 'a' + key[i] - 'a') % 26 + 'a';
    }
    cout << Enc << endl;
    for (int i = 0; i < Enc.size(); i++)
    {
        Dec += (((Enc[i] - key[i]) + 26) % 26) + 'a';
    }
    cout << Dec << endl;
}