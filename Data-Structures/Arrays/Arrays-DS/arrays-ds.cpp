#include <iostream>
#include <vector>

//my solution
std::vector<int> reverseArray(std::vector<int> a)
{
    reverse(a.begin(), a.end());
    return a;
}

//best solution
// std::vector<int> reverseArray(std::vector<int> a)
// {
//     int aux = 0;
//     int n = a.size();
//     for (int i = 0; i < n / 2; ++i)
//     {
//         aux = a[n - i - 1];
//         a[n - i - 1] = a[i];
//         a[i] = aux;
//     }
//     return a;
// }

int main()
{
    std::vector<int> array = {2, 9, 11, 20, 25};
    array = reverseArray(array);
    for (auto i : array)
        std::cout << i << std::endl;
}
