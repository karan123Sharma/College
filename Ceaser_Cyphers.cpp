#include <iostream>
using namespace std;
string CeaserCypher(string Str, int key)
{
    string Enc;
    for (int i = 0; i < Str.size(); i++)
    {
        Enc += (((Str[i] - 'a')  + key ) % 26) + 'a';
    }
    return Enc;
}
void Decrypt(string Enc, int key)
{
    string Dec;
    for (int i = 0; i < Enc.size(); i++)
    {
        Dec += (((Enc[i] - 'a') - key) % 26) + 'a';
    }
    cout << Dec;
}
string Polyalphabetic(string Str)
{
    string Key;
    cin >> Key;
    string PolyEnc;
    for (int i = 0; i < Key.size(); i++)
    {
        PolyEnc += (Str[i] - 'a' + Key[i] - 'a') % 26 + 'a';
    }
    cout<<PolyEnc;
    return PolyEnc;
}
int main()
{
    string Str;
    cin >> Str;
    int key;
    cin >> key;
    string E_Text;
    string Enc = CeaserCypher(Str, key);
    cout << Enc;
    cout << endl;
    cout << "Decrypt" << endl;
    Decrypt(Enc, key);
}