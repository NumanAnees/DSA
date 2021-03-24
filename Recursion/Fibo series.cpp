

#include <iostream>
using namespace std;
void iterative(int m)
{
    int n = m, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {

        if (i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";
    }
}
int recursion(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return recursion(n - 1) + recursion(n - 2);
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
        iterative(n);
    }

    return 0;
}
