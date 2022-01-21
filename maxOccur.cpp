#include<iostream>
using namespace std;

char maxOccuringChar(string &s){
    int n=s.length();
    int a[256];
    fill(a,a+256,0);
    for(int i=0;i<n;i++){
        a[s[i]]++;
    }
    int max=0,maxI=0;
    char res;
    for(int i=0;i<256;i++){
        if(a[i]>max){
            max=a[i];
            maxI=i;
            res=i;
        }
    }
    return res;
}

int main(){
    string s="civi";
    cin>>s;
    cout<<maxOccuringChar(s)<<endl;
}