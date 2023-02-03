#include <bits/stdc++.h>
using namespace std;


int main(){

  // Complexities
  // Any addition, multiplication, division
  // arr[i]

  /* Example 1 */
  int n;
  int a = 0;
  for(int i = 0; i<n; i++){
    a++;
  }  


  /* Example 2 */
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      a++; //some O(1)
    }
  }

  /* Example 3 */
  for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
      a++;
    }
  }
  

  /* Example 4 */
  for(int i = 1; i<n; i*=2){
    for(int j = 0; j<i; j++){
      a++;
    }
  }

  /* Example 5 */
  for(int i = n; i>0; i/=2){
    for(int j = 0; j<i; j++){

    }
  }


  /* Example 6 */
  for(int i = 2; i<n; i = 5*i){
    for(int j = 0; j<i; j++){

    }
  }


  /* Example 7 */
  //
  for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){

    }
  }

  for(int i = 0; i<n; i*=2){
    for(int j = 0; j<i; j++){

    }
  }


  // Some more complexities
  // array of length n:
  // reverse() -> O(n) // check docs
  // sort() -> O(n log n) // again check docs

}
