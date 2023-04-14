#include <bits/stdc++.h>
using namespace std;

int main()
{
    string Str, sol; cin >> Str >> sol;
    int j = 0, n = Str.length(), m = sol.length()  ;

    for (int i = 0; i < m; i++)
    {
        switch (sol[i])
        {
        case 'R':

            if (j + 1 < n)
                j++;
            break;

        case 'L':

            if (j > 0)
                j--;
            break;

        case 'T':

            if (Str[j] != '9')
            
                Str[j]++;

            break;

        case 'D':

            if (Str[j] != '0')

                Str[j]--;

            break;


        case 'S':

            i++;
            string temp;
            for (i; i < m && sol[i] >= '0' && sol[i] <= '9'; i++)

                temp.push_back(sol[i]);
                i--;


            int answer = stoi(temp);
            swap(Str[j], Str[answer - 1]);
            break;
        }
    }
    cout << Str << endl;
}