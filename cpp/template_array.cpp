#include <iostream>
#include <algorithm>

template <typename T, size_t N>
void sortArray(T (&arr)[N])
{
    std::sort(arr, arr + N);
}
int main()
{
    const int size = 5;
    int numbers[size];
    std::cout << "Enter " << size << " Numbers:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    sortArray(numbers);
    std::cout << "\nArray in sorted form:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}