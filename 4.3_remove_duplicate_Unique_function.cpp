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
    list<int> l = {10, 20, 30, 10, 40, 10, 50, 10, 60};
    l.sort(); //Ascending;
    
    //List needs to be sorted to use Unique Function
    l.unique();

    for(int val : l)
    {
        cout << val << endl;
    }

    return 0;
}