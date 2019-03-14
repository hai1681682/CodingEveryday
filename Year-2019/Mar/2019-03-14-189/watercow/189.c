// ����һ��������˼·
/* *
* ������ת
* Original List                              : 1 2 3 4 5 6 7
* After reversing all numbers       : 7 6 5 4 3 2 1
* After reversing first k numbers  : 5 6 7 4 3 2 1
* After revering last n-k numbers : 5 6 7 1 2 3 4 --> Result
* ��ת�����Ƕ��ֽ���Ԫ�أ�Ȼ��ͷ++��β--
* ʱ�临�Ӷ�O(n)
* �ռ临�Ӷ�O��1)
* */

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		
		//����kҪ��֤С��nums.size������һ��ģ����
		k = k % nums.size();

		reverse(nums, 0, nums.size() - 1);
		reverse(nums, 0, k - 1);
		reverse(nums, k, nums.size() - 1);
	}

	void reverse(vector<int>& nums, int start, int end) {
		while (start < end) {
			int temp = nums[start];
			nums[start++] = nums[end];
			nums[end--] = temp;
		}
	}
};