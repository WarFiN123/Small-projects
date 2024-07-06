#include <iostream>

int main()
{
    int n = 0;
    int time = 0;
    std::cout << "Enter the number of people: ";
    std::cin >> n;
    std::cout << "Enter the time: ";
    std::cin >> time;
    int pos = 1;
    int direction = 0;
    for (int i = 0; i < time; i++)
    {
        if (pos < n && direction == 0)
        {
            pos++;
        }
        else if (pos > 1 && pos < n && direction == 1)
        {
            pos--;
        } 
        else if (pos == n && direction == 0)
        {
            pos--;
            direction = 1;
        }
        else if (pos == 1 && direction == 1)
        {
            pos++;
            direction = 0;
        }
    }

    std::cout << pos;
    return pos;
}