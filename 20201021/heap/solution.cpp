class KthLargest {
    int k_value;
    priority_queue<int,vector<int>,greater<int>> pq;
public:
    KthLargest(int k, vector<int>& nums) {
        for(int num:nums){
            pq.push(num);
            if(pq.size()>k) pq.pop();
        }
        k_value=k;
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>k_value) pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

/*
直接用递增的优先队列直接实现就好..但是有点..
执行结果：
通过
显示详情
执行用时：
88 ms
, 在所有 C++ 提交中击败了
55.38%
的用户
内存消耗：
20 MB
, 在所有 C++ 提交中击败了
27.14%
的用户


*/
