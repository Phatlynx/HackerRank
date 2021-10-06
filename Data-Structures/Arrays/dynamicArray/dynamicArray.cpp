#include <vector>
#include <iostream>
using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries)
{
    vector<vector<int>> arr(n);
    int lastAnswer = 0;
    int idx;
    vector<int> ans;
    for (int x = 0; x < queries.size(); x++)
    {

        if (queries[x][0] == 1)
        {
            idx = ((queries[x][1] ^ lastAnswer) % n);
            arr[idx].push_back(queries[x][2]);
        }
        else if (queries[x][0] == 2)
        {
            idx = ((queries[x][1] ^ lastAnswer) % n);
            lastAnswer = arr[idx][(queries[x][2]) % (arr[idx].size())];
            ans.push_back(lastAnswer);
        }
    }
    return ans;
}

int main()
{
    int n = 2;

    vector<vector<int>> queries =
        {{1, 0, 5},
         {1, 1, 7},
         {1, 0, 3},
         {2, 1, 0},
         {2, 1, 1}

        };

    dynamicArray(n, queries);

    return 0;
}