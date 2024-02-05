#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t, n, m, N, i, j;
    cin >> t;

    vector <string> resultados(t);

    for(int x = 0; x < t; x++)
    {
        cin >> n >> m >> N;
        cin >> i >> j;

        if ((i - N >= 0 && j - N >= 0) || (i + N < n && j + N < m) || (i - N > 0 && j + N < m) || (i + N <= n && j - N <= 0))
        {
            resultados[x] = "YES";
        }
        else
        {
            resultados[x] = "NO";
        }
    }

    for (int k = 0; k < t -1; k++)
    {
        cout << resultados[k] << "\n";
    }

    cout << resultados[t - 1];

    return 0;
}