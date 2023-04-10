#include <iostream>
#include <cmath>
using std::cout; using std::cin; using std::abs;    //abs = absolute value function    

int range = 7; //Can be any value between 0 and 26

int main()
{
    cout << "\n\t"; //padding

    for (int i = -range; i <= range; ++i)
    {
        for (int j = 0; j < range - abs(i); ++j)
            cout << "  ";
        for (int k = 65; k <= 65 + abs(i); k++)
            cout << char(k) << " ";
        for (int n = 65 + abs(i) - 1; n >= 65; --n)
            cout << char(n) << " ";

        cout << "\n\t";
    }

    cin.get();
    return 0;
}
