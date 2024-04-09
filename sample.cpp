#include<bits/stdc++.h>
using namespace std;

int findpivot(vector<int> nums) {
    int start = 0;
    int end = nums.size() - 1;
    int mid;

    while (start < end) {
        mid = start + (end - start) / 2;
        if (nums[mid] > nums[0]) {
            start = mid + 1;
        } else if (nums[start] == nums[mid] && nums[mid] == nums[end]) {
            // Handle the case when start, mid, and end have the same value
            // In this case, simply move both start and end towards the center
            start++;
            end--;
        } else if (nums[start] == nums[mid]) {
            start = mid+1;
        } else if (nums[end] == nums[mid]) {
            end = mid-1;
        } else {
            end = mid-1;
        }

        
    }
    if(nums[mid]>nums[mid+1]){
        return start+1;
    }
    return start;
}

int main() {
    vector<int> v = {1,2,1};
    cout << findpivot(v);
    return 0;
}