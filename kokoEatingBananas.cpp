//https://leetcode.com/problems/koko-eating-bananas/

#include<iostream>
using namespace std;

/*
class Solution {
    public int minEatingSpeed(int[] piles, int givenHour) {
        int low = 1, high = 100000000;
        
        while(low<=high){
            int mid = (low+high)/2, totalHourSoFar = 0;
            for(int p:piles){
                total += (p+mid-1)/mid;
            }
            if(totalHourSoFar>givenHour){ //security guard can come but koko still eating
                low = mid+1;
            }
            else{//security guard hasnt come but koko has gone after eating
                high = mid-1;
            }
        }
        return low //
    }
}

*/
int main(){

}