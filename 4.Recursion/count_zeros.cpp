#include <iostream>
using namespace std;

int count(int n)
{
    if (n <= 9)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int lastdigit = n % 10;
    int i = 0;
    if (lastdigit == 0)
    {
        i = 1;
    }
    
    return i + count(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << count(n);
}