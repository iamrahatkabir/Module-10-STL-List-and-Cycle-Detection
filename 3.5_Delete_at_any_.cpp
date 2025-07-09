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
    list<int> l = {10, 20, 30, 40, 50, 60, 70};
    
    // l.erase(next(l.begin(), 2));
    l.erase(next(l.begin(), 2), next(l.begin(), 5)); //Last index should be the index of the next value you want to delete;

    for(int val : l)
    {
        cout << val << endl;
    }
    

    return 0;
}