// ע����ĿҪ����ʹ�ó���
// ���α���
// 1) left_product[]��һ�δ������ң���¼��ǰλ�õ����(��������ǰ��)�������ĳ˻�
// 2) right_product[]�ڶ��δ������󣺼�¼��ǰλ�õ��Ҳ�(��������ǰ��)�������ĳ˻�
// 3) ��nums[i]����һ���õ���left_product[i]����right_product[i]

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int length = nums.size();
		vector<int> left_product(length, 1);
		vector<int> right_product(length, 1);
		int cur_product = 1;

		// step 1:
		for (int i = 0; i < length; i++) {
			left_product[i] *= cur_product;
			cur_product *= nums[i];
		}

		// step 2:
		cur_product = 1;
		for (int i = length - 1; i >= 0; i--) {
			right_product[i] *= cur_product;
			cur_product *= nums[i];
		}

		// step 3:
		for (int i = 0; i < length; i++) {
			nums[i] = left_product[i] * right_product[i];
		}

		return nums;
	}
};