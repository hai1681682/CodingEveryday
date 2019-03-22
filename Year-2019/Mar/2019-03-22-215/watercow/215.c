// ���ÿ���partition��������O(n)���Ӷ�
class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {
		int left = 0, right = nums.size() - 1;
		return __findKthLargest(nums, left, right, k);
	}

	int __findKthLargest(vector<int>& nums, int left, int right, int k) {
		int index = __partition(nums, left, right);
		if (index == (k - 1)) {
			return nums[index];
		}
		else if (index > k - 1) {
			return __findKthLargest(nums, left, index - 1, k);
		}
		else {
			return __findKthLargest(nums, index + 1, right, k);
		}
	}

	int __partition(vector<int>& nums, int left, int right) {
		// ���ص�ǰ����Ԫ��������indexֵ
		int v = nums[left]; 

		// nums[l+1,...j] < v �� nums[j+1, ...,r] > v
		int j = left;
		for (int i = j + 1; i <= right; i++) {
			if (nums[i] > v) {
				swap(nums[++j], nums[i]);
			}
		}

		swap(nums[left], nums[j]);
		return j;
	}
};