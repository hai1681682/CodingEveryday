说一下坑点：
1. 不能直接求斜率，因为计算机存储的问题。
2. 使用gcd最大公约替换斜率表示时，应当分情况讨论
    1）1. 高度差为0 长度差不为零 则返回(1, 0) 而不是返回(width差, 0)
    2）2 . 高度差为0 长度差不为0 则返回(0,0)
3. 对于重复点的考虑，如[1,1][1,1][2,2][2,2]应返回4
    使用三个计数器：
    1）专门记录斜率为(0,0)下最多点的个数
    2）记录剩余情况下最多点的个数
    3）max_num: 将前两个计数器相加与max_num比较来更新max_num