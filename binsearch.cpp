#include <bits/stdc++.h>

using namespace std;

int main(){
  int n = 10;
  vector<int> arr = {2, 3, 4, 5, 8, 9, 10, 77, 107, 109};
  int l = 0, r = n-1;
  int ans = -1;
  int target = 77;
  while (l <= r) {
      int mid = (l+r)/2;
      if(arr[mid] == target) {
        cout << mid << '\n';
        ans = mid;
        break;
      }
      if (arr[mid] < target) {
        l = mid + 1;
      }
      else r = mid-1;
  }
}