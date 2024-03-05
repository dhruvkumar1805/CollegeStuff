#include <iostream>
using namespace std;
int main()
{
    int x, y;

    cout << "Enter the numbers:\n";
    cin >> x >> y;

    int *num_1, *num_2, temp;
    num_1 = &x;
    num_2 = &y;

    temp = *num_1;
    *num_1 = *num_2;
    *num_2 = temp;

    cout << "Numbers after swapping: ";
    cout << "\nfirst number = " << x;
    cout << "\nsecond number = " << y;

    return 0;
}