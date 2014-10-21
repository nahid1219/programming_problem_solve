#include<iostream>
#include<stdio.h>

int arr[10],givenint,index;

using namespace std;
void readCase(){
    int i;
    for(i=0;i<10;i++){
        cin >> arr[i];
    }
}
int abs(int n){
    return n > 0 ? n:-n;
}
int solve(){
    cin >> givenint;
    int i;
    for(i=0;i<10;i++) if(abs(givenint-arr[i])>=1000){
        index = i;
        return index;
    }
    return 0;
}
void solveCase(){
      cout << solve() << endl;
}
int main(){
//    freopen("input.txt","r",stdin);
    readCase();
    solveCase();
    return 0;
}
