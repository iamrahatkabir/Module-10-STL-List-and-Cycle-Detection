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
    
    auto it = find(l.begin(), l.end(), 70); //First 2 values are the the range; //3rd value is what you want to find;

    if(it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found" << endl;
    }
    

    return 0;
}