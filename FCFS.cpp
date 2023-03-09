#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the Number of Proccesses";
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    int Arrival_Time[n] ;
    for (int i = 0; i < n; i++)
    {
        cin >> Arrival_Time[i];
    }
    int Burst_Time[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Burst_Time[i];
    }
    int Completion_Time[n], WT[n];
    int TAT[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            Completion_Time[i] = Burst_Time[i];
        }
        else if (i > 0)
        {
            Completion_Time[i] = Burst_Time[i] + Completion_Time[i - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        TAT[i] = Completion_Time[i] - Arrival_Time[i];
    }
    for (int i = 0; i < n; i++)
    {
        WT[i] = TAT[i] - Burst_Time[i];
    }
    cout << "P_ID"
         << "  "
         << "Arrival_Time"
         << "  "
         << "Burst_Time"
         << "  "
         << "Completion_Time"
         << "  "
         << "TAT"
         << "  "
         << "WT"
         << "  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << "    " << Arrival_Time[i] << "    " << Burst_Time[i] << "   " << Completion_Time[i] << "    " << TAT[i] << "    " << WT[i] << "    " << endl;
    }
}