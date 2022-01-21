//https://www.geeksforgeeks.org/check-if-two-people-starting-from-different-points-ever-meet/

#include<iostream>
using namespace std;

bool willMeet(int x1,int v1,int x2,int v2){
    /*
    c1 x1==x2 => true
    c2 x1<x2 and v1<v2 =>false
    c3 x1<x2 and v1>v2 =>may be
    c4 x1>x2 and v1<v2 =>may be
    c5 x1>x2 and v1>v2 =>false
    */
    if(x1==x2){//c1
        return true;
    }
    else if(x1<x2 && v1<v2){//c2
        return false;
    }
    else if(x1>x2 && v1>v2){//c5
        return false;
    }else{//c3,c4
        //using relative velocity if abs(x1-x2)%abs(v1-v2)==0
        if(abs(x1-x2)%abs(v1-v2)==0){
            return true;
    }
    return false;
    }
}

int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    willMeet(x1,v1,x2,v2)?cout<<"Yes":cout<<"No";
}