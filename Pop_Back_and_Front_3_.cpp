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
    
    l.push_back(40);
    l.push_front(100);


    l.pop_back(); // Deletes at tail;
    l.pop_front(); // Deletes at head;

    for(int val : l)
    {
        cout << val << endl;
    }
    

    return 0;
}