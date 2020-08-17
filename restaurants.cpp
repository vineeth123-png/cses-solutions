#include<bits/stdc++.h>
int main(){
  //fastIO
  int n;
  cin>>n;
  vector<pair<int, int>> arr;
  for(int i = 0; i<n; i++){
    int x, y;
    cin>>x>>y;
    arr.push_back({x, 1});
    arr.pub({y, -1});
  }
  sort(arr.begin(), arr.end());
  int curr =0, max_p = 0;
  for(int i = 0; i<2*n; i++){
    if(arr[i].S == 1)
    curr++;
    else
    curr--;
    max_p = max(curr, max_p);
  }
  cout<<max_p<<"\n";
  return 0;
}
