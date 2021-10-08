#include <vector>
#include <string>
#include <iostream>
#include <map>
using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{

    vector<int> result;

    map<string, int> compare;
    for (auto i : strings)
        compare[i]++;

    for (auto j : queries)
        result.push_back(compare[j]);

    // vector<int> result;
    // int count = 0;

    // for (int i = 0; i < strings.size(); i++)
    // {
    //     for (int j = 0; j < queries.size(); j++)
    //     {
    //         if (strings[i] == queries[j])
    //             result[j]++;
    //     }

    // }
    return result;
}

int main()
{
    std::vector<int> answer;
    std::vector<string> strings = {"ab", "ab", "abc", "ab"};
    std::vector<string> queries = {"ab", "abc", "bc"};
    answer = matchingStrings(strings, queries);
    for (auto i : answer)
        std::cout << i << std::endl;
}
