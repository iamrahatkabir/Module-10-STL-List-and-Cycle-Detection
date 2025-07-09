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
    list<int> l(10, 3);

    // for(auto it = l.begin(); it != l.end(); it++) //Using Iterator;
    // {
    //     cout << *it << endl;
    // }

    //OR

    for(int val : l) // Range Based For Loop
    {
        cout << val << endl;
    }

    return 0;
}