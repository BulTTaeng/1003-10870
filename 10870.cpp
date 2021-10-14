#include <iostream>
#include <stdlib.h>

using namespace std;

int dp[21] = {0, };

int pibo(int num);

int main() {

  int n;
  cin >> n;

  dp[1] = 1;
  
  cout << pibo(n);

  return 0;
}

int pibo(int num){
  if(num == 0){
    return 0;
  }
  else if(dp[num] != 0){
    return dp[num];
  }
  else{
    return dp[num] = pibo(num-1) + pibo(num-2);
  }
  
}