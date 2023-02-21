#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        if(nums.size() != 1)
        {
        int last = nums.size()-1;
        int i = last;
        int count1 =0;
         if(nums[last] > nums[last-1])
            {
                int temp = nums[last];
                nums[last] = nums[last-1];
                nums[last-1] = temp;
                return ;
            }
        else
        for(i= nums.size()-1; i > 0; i--)
        {
           if(nums[i] <=nums[i-1])
           continue;
           else
           {
                
                   int k = i;
                   int j = last;
                   int temp1 = nums[last];
                   while(k < j)
                   {
                       int temp = nums[k];
                       nums[k] = nums[j];
                       nums[j] = temp;
                       k++;
                       j--;
                   }
                   int max  = nums[i-1];
                   for(int l = i; l<= last; l++)
                   {
                       if(nums[l] > max)
                       {
                           max = l;
                           break;
                       }
                   }
                   int temp2 = nums[i-1]; 
                   nums[i-1] = nums[max];
                   nums[max] = temp2;
                   break;
           }
        }
        if(i==0)
        {
            int j = 0;
            int k = last;
            while(j < k)
            {
                int temp = nums[j];
                nums[j] = nums[k];
                nums[k] = temp;
                j++;
                k--;
            }
        }
        }
    }
};