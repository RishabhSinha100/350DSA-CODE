class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
         int tw=24;
          int sum=arrivalTime+delayedTime;
         if(sum>=tw){
              return sum-tw;
         }
         else{
                return sum;
         }
    }
};