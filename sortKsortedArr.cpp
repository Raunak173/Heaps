/*

Given an integer array whose elements may be misplaced by no more than `k` positions from the correct sorted order, efficiently sort it in linear time and constant space.

Input: nums[] = [1, 4, 5, 2, 3, 7, 8, 6, 10, 9], k = 2
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	void sortKSortedArray(vector<int> &nums, int k)
	{
		// Write your code here...
		priority_queue <int,vector <int>,greater<int>> minH;
		int n=nums.size();
		vector <int> v;
		for(int i=0;i<n;i++){
			minH.push(nums[i]);
			if(minH.size()>k){
				v.push_back(minH.top());
				minH.pop();
			}
		}
        while(!minH.empty()){
            v.push_back(minH.top());
            minH.pop();
        }
		nums.clear();
		nums=v;
	}
};

int main(){
    Solution obj;
    int n,k;
    cin>>n>>k;
    vector <int> nums(n,0);
    for(int i=0;i<n;i++) cin>>nums[i];
    obj.sortKSortedArray(nums,k);
    for(auto x:nums){
        cout<<x<<" ";
    }
    return 0;
}
