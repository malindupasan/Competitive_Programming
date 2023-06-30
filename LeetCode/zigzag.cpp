#include <iostream>
#include <string>
#include <vector>

using namespace std;

string convert(string s, int numRows)
{
    int n = s.length();
    vector<string> arr(numRows);

    for (int i = 0; i < numRows; i++)
    {
        arr[i] = "";
    }

    int i = 0;
    while (i < n)
    {
        for (int j = 0; j < numRows; j++)
        {
            if (i >= n)
                break;

            if (s[i] != ' ')
            {
                arr[j] += s[i];
            }

            i++;
        }
        for (int k = numRows - 2; k > 0; k--)
        {
            if (i >= n)
                break;

            if (s[i] != ' ')
            {
                arr[k] += s[i];
            }

            i++;
        }
    }

    string ans = "";
    for (int i = 0; i < numRows; i++)
    {
        ans += arr[i];
    }

    return ans;
}

int main()
{
    int nr = 4;
    string s = "PAYPALISHIRING";
    cout << convert(s, nr) << endl;

    return 0;
}
