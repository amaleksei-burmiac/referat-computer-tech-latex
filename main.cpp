#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>

using namespace std;

int main()
{
    ///pair<string, int > p;
    ///p.first;
    ///p.second;

    map<string, int > M;

    ///M["ABC"] = 15;
    M.insert({"ABC", 15});
    M.emplace("ABC", 15);

    auto it = M.find("ABC");

    (*it).second
    it->second

    M.erase("ABC");

}
