#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int l=str.size();
    int START;
    for(int i=-(l-1)/2;i<=(l-1)/2;i++){
        for(int j=0;j<abs(i);j++){
            cout<<" ";
        }
        for(int j=abs(i);j<l-abs(i);j++){
            cout<<str[j];
        }
        cout<<endl;
    }
 return 0;
}

