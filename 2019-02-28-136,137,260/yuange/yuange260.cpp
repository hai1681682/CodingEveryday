// ����������赥�����ֵ�����Ϊa��b����a���ĳλΪ1����b��λ���Ϊ0�����ֳ�����
class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		int x = 0, a = 0, b = 0;
		for (auto item : nums)
			x ^= item;
		x &= -x; // ʹ�����ַ�ʽ���Ը�����ҵ����bitλΪ1��λ��
		for (auto item : nums)
		{
			if (item & x)
				a ^= item;
			else
				b ^= item;
		}
		return vector<int>{a, b};
	}
};