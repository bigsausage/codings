class KthLargest {
    int k_value;
    vector<int> nums_value;
public:
    KthLargest(int k, vector<int>& nums) {
        k_value=k;
        sort(nums.begin(),nums.end(),greater<int>());
        nums_value.assign(nums.begin(),nums.end());
    }
    
    int add(int val) {
        nums_value.push_back(val);
        sort(nums_value.begin(),nums_value.end(),greater<int>());
        nums_value.resize(k_value);
        return nums_value[k_value-1];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

/*
还有重载函数的sort也失效，需要查一下；
还有能否尝试自己进行排序函数的选择
*/
