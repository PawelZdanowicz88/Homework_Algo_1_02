#include <iostream>

int seach_elm(int arr[], int x, int n)
{
    int left = 0;
    int right = n - 1;
    bool condition = true;
    int middle = 0;
    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (x < arr[middle])
        {
            right = middle - 1;
        }
        if (x >= arr[middle])
        {
            left = middle + 1;
        }
    }
    return (n - left);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int x = 0;
    std::cout << "Введите точку осчета: ";
    std::cin >> x;
    int arr[]{ 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int elm = seach_elm(arr, x, n);
    std::cout << "Количество элеиментов больше " << x << ": " << elm << std::endl;
    return 0;
}

