#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    string s;
    cout << "Enter the message" << '\n';
    cin >> s;
    cout << "Enter key" << '\n';
    cin >> n;
    vector <vector<char> > a(n,vector<char>(s.size(),' '));
    int j = 0, flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        a[j][i]=s[i];
        
        if(j==n-1){
            flag=1;
        }
        else if(j==0){
            flag = 0;
        }
        if(flag==0){
            j++;
        }
        else{
            j--;
        }
    }

for(int i=0;i<n;i++){
    for(int j=0;j<s.size();j++){
        if(a[i][j] != ' '){
            cout<<a[i][j];
        }
    }
}
    cout << '\n';
    
    cout << "Decryption" << endl;
    flag = 0;
    j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        cout << a[j][i];
        if (j == n - 1)
        {
            flag = 1;
        }
        else if (j == 0){
            flag = 0;
        }
        if (flag == 0)
        {
            j++;
        }
        else
            j--;
    }
    cout << '\n';
    return 0;
}