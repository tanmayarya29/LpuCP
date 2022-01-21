#include<iostream>
using namespace std;

char maxOccuringChar(string &s){//from left
    int n=s.length();
    bool a[256];
    fill(a,a+256,false);
    int minI=-1;
    char res;
    for(int i=n;i>=0;i--){
        if(!a[s[i]]){
            a[s[i]]=true;
        }else{
            minI=i;
            res=s[i];
        }
    }
    return res;
}

int main(){
    string s="civi";
    cin>>s;
    cout<<maxOccuringChar(s)<<endl;
}