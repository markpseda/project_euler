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
        long n;
        cin >> n;
        long prevNum = 1;
        long num = 2;
        long total = 2;
        long nextNum = -1;
        while(nextNum < n)
        {
            if(nextNum % 2 == 0)
            {
                total += nextNum;
            }
            nextNum = prevNum + num;
            prevNum = num;
            num = nextNum;
        }
        cout << total << endl;
        // 1, 2, 3, 5, 8, 13, 21
    }
    return 0;
}