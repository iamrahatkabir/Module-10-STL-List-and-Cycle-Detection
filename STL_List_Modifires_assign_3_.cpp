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
    list<int> l = {10, 20, 30};
    list<int> l2;

    //Assign list to another list;
    // l2 = l; //1;
    l2.assign(l.begin(), l.end()); //2

    for(int val : l2)
    {
        cout << val << endl;
    }
    

    return 0;
}