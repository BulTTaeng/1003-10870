#include <iostream>
#include <stdlib.h>

using namespace std;

int dp0[41] = {0,};
int dp1[41] = {0,};

int main() {
  int T;
  cin >> T;
  int * num = (int*)malloc(sizeof(int) * (T+1) );
  for(int i =0; i<T; i++){
    cin >> num[i];
  }
  dp0[0] =1;
  dp1[0] = 0;
  dp0[1] = 0;
  dp1[1] = 1;

  for(int i =2; i<41; i++){
    if(dp0[i] == 0){
      dp0[i] = dp0[i-1] + dp0[i-2];
    }

    if(dp1[i] == 0 ){
      dp1[i] = dp1[i-1] + dp1[i-2];
    }
  }
  for(int i =0; i<T; i++){
    cout << dp0[num[i]] << " " << dp1[num[i]] << "\n";
  }

  return 0;
}
