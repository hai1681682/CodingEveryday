// �����Ͻǿ�ʼ(���Ͻ������Ǹ������ ������С��Ԫ��)
// 1��== target: return
// 2) > target: ȥ������������
// 3) < target: ȥ������������
// 4) ֱ����������Ϊ��
class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		if (matrix.empty()) return false;

		int col = matrix.size(), row = matrix[0].size();
		for (int i = 0, j = row - 1; i < col && j >= 0; ) {
			if (target > matrix[i][j]) i++;
			else if (target < matrix[i][j]) j--;
			else return true;
		}
		return false;
	}
};