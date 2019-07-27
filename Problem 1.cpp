#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long total = 0;

        int i = 0;

        while((i + 15) < n)
        {

            i+=15;

            //cout << i << endl;;
            //cout << i-15 <<endl;
            total += i -15;
            total += (4*i - 12 - 9 - 6 - 3);
            total += (2*i - 10 - 5);

            //cout << total << endl << endl;
        }
        int x = i;
        int y = i + 5;

        //cout << x << " " << y << endl;
        for(x; x < n; x+=3)
        {
            //cout << x << endl;
            total += x;
        }
        for(y; y < n; y+=5)
        {
            total += y;
        }
        
        
        cout << total << endl;

    }
    return 0;
}

