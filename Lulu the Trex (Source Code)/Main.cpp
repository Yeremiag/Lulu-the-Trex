#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x;
	cin >> x;
        int l = 1, r = x, ans = -1, mid = 0;
        while(l <= r){
            mid = l+floor((r-l)/2);
            cout << l << r << mid << "\n";
            if (mid*mid <= x){
                ans = mid;
                l = mid + 1;
                
            }else{
                r = mid - 1;
            }
        }return ans;
}