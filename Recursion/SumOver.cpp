#include <iostream>
using namespace std;
double SumOver(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    return ((1.0 / n) + SumOver(n - 1));
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    double result;
    result = SumOver(n);
    cout << result;

    return 0;
}