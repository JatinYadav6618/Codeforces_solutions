#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int total;
while(n--){
int arr[3];
for(int i=0;i<3;i++){
    cin>>arr[i];
}
int sum=arr[0]+arr[1]+arr[2];
if(sum>=2){
    total++;
}

}
cout<<total;

return 0;
}