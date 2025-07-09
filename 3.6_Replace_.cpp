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
    list<int> l = {10, 20, 30, 20, 50, 20, 70};
    
    replace(l.begin(), l.end(), 20, 100); //first 2 values are the range[l.begin(), l.end()], //3rd value[20] is what you want to replace; //4th value[100] is what you want to place by replacing;

    for(int val : l)
    {
        cout << val << endl;
    }
    

    return 0;
}