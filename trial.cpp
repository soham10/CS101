#include <simplecpp>
main_program{
    int number, rev = 0, remainder;
    cout << "\nEnter a number : ";
    cin >> number;
    cout << "\nReversed Number : ";
    while(number != 0)
    {
        remainder = number%10;
        rev = rev*10 + remainder;
        number /= 10;
    }

    cout << rev << endl;
}

