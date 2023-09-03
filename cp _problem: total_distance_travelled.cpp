/*
https://leetcode.com/contest/weekly-contest-350/problems/total-distance-traveled/

2739. Total Distance Traveled

A truck has two fuel tanks. You are given two integers, mainTank representing the fuel present in the main tank in liters and additionalTank representing the fuel present in the additional tank in liters.

The truck has a mileage of 10 km per liter. Whenever 5 liters of fuel get used up in the main tank, if the additional tank has at least 1 liters of fuel, 1 liters of fuel will be transferred from the additional tank to the main tank.

Return the maximum distance which can be traveled.

Note: Injection from the additional tank is not continuous. It happens suddenly and immediately for every 5 liters consumed.
*/




class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        
        long int ans = 0;
        int counter = 0;
        
        while(mainTank >= 1)
        {
            mainTank -= 1;
            ans += 10;
            
            counter++;
            
            if (counter == 5)
            {
                if (additionalTank >= 1)
                {
                    mainTank++;
                    additionalTank--;
                }
                
                counter = 0;
                
                
            }
            
        }
        
        return ans;
        
    }
};
