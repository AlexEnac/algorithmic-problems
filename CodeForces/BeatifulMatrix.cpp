#include<iostream>
//#include<math.h>
#include<algorithm>
using namespace std;
int  a[6][6];
int main(){
    int currentI, currentJ;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                currentI = i;
                currentJ = j;
            }
        }
    }
    if(currentJ == 3 && currentI == 3)
        cout<<0;
    else{
        cout << abs(3 - currentJ) +abs( 3 - currentI);
    }
    return 0;
}