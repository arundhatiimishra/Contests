/* 
   Leetcode Weekly Contest 291
   Contest Link - https://leetcode.com/contest/weekly-contest-291/
*/



/*
   Question 1
   Question Link - https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/
   2259. Remove Digit From Number to Maximize Result
*/

/*
   Time Complexity - O(N) where N is size of string number
   Space Complexity - O(1) 
*/

class Solution {
public:
    string removeDigit(string number, char digit){
        int last_occ=-1;
        int idx_erase=-1;
        for(int i=0;i<number.size();i++){
            if(number[i]==digit){
                last_occ=i;
                if(i==number.size()-1){
                    idx_erase=i;
                    last_occ=-1;
                    break;
                }else if(number[i+1]>number[i]){
                    idx_erase=i;
                    last_occ=-1;
                    break;
                }else{
                    
                }
            }
        }
        if(last_occ!=-1){
            number.erase(number.begin()+last_occ);
        }else{
            number.erase(number.begin()+idx_erase);
        }
        return number; 
    }
};



/*
   Question 2
   Question Link - https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/
   2260. Minimum Consecutive Cards to Pick Up
*/

/*
   Time Complexity - O(N) where N is size of vector cards
   Space Complexity - O(N) where N is size of unordered map mera_map
*/

class Solution {
public:
    int minimumCardPickup(vector<int>& cards){
        int temp=-1;
        int answer=INT_MAX;
        unordered_map<int,int> mera_map;
        for(int i=0;i<cards.size();i++){
            if(mera_map.count(cards[i])==1){
                temp=1+i-mera_map[cards[i]];
                answer=min(answer,temp);
            }
            mera_map[cards[i]]=i;
        }
        if(temp==-1){
            return -1;
        }
        return answer;
    }
};



/* 
   Question 3
   Question Link - https://leetcode.com/problems/k-divisible-elements-subarrays/
   2261. K Divisible Elements Subarrays
*/

/*
   Time Complexity - O(N square) where N is size of vector nums
   Space Complexity - O(N) where N is maximum of size of map mera_map and vector temp
*/

class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p){
        map<vector<int>,int> mera_map;
        for(int i=0;i<nums.size();i++){
            vector<int> temp;
            int num_p=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]%p==0){
                    num_p++;
                    if(num_p<=k){
                        temp.push_back(nums[j]);
                        mera_map[temp]++;
                    }else{
                        break;
                    }
                }else{
                    temp.push_back(nums[j]);
                    mera_map[temp]++;
                }
            }
        }
        return mera_map.size();
    }
};



/* 
   Question 4
   Question Link - https://leetcode.com/problems/total-appeal-of-a-string/
   2262. Total Appeal of A String
*/