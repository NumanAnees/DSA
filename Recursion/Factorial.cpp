#include <iostream>
using namespace std;
int iterative(int n)
{
    int f = 1;
    int j = 1;

    while (j <= n)
    {
        f = f * j;
        j = j + 1;
    }

    return f;
}

int recursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * recursion(n - 1);
}

int main()
{
    int n;
    bool fun;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl
         << "Enter 1 for iterative and 0 for Recursion: ";
    cin >> fun;
    if (fun == 0)
    {
        int result = recursion(n);
        cout << result;
    }
    else if (fun == 1)
    {
        int result = iterative(n);
        cout << result;
    }

    return 0;
}
