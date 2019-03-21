// �ؼ���͵����
// ���������е�����𰸣���������˼·��ɽ��
// ̰���㷨
// 1) ���ҵ���ǰ�Լ�֮ǰ��Сֵmin
// 2) �ҵ���min���max
// 3) ������max��ľͷ���true
class Solution {
public:
	bool increasingTriplet(vector<int>& nums) {
		int min = INT_MAX, max = INT_MAX;
		for (auto n : nums) {
			if (n < min) min = n;
			else if (n > min and n < max) max = n;
			else if (n > max) return true;
 		}
		return false;
	}
};