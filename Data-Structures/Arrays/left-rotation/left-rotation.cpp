#include <vector>

using namespace std;

vector<int> rotateLeft(int d, vector<int> arr)
{
    vector<int> result(arr.size());
    int index = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        index = i - d;
        if (index < 0)
            result[index + arr.size()] = arr[i];
        else
            result[index] = arr[i];
    }
    return result;
}