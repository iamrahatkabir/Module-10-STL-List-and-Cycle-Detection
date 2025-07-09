#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // list<int> l2 = l;

    // int a[] = {10, 20, 30};
    // list<int> l2(a, a+3); //Passing the value of array in list; a(variable name), a+3(name + array size);

    vector<int> v = {10, 20, 30};
    list<int> l2(v.begin(), v.end());

    
    for(int val : l2) // Range Based For Loop
    {
        cout << val << endl;
    }

    return 0;
}