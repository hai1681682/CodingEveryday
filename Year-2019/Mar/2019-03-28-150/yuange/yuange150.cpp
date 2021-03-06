/***
 *_______________#########_______________________
 *______________############_____________________
 *______________#############____________________
 *_____________##_############___________________
 *____________###__######_#####__________________
 *____________###_########__####_________________
 *___________###__##########_####________________
 *__________####__###########_####_______________
 *________#####___###########__#####_____________
 *_______######___###_########___#####___________
 *_______#####___###___########___######_________
 *______######___###__###########___######_______
 *_____######___####_##############__######______
 *____#######__#####################_#######_____
 *____#######__##############################____
 *___#######__######_#################_#######___
 *___#######__######_######_#########___######___
 *___#######____##__######___######_____######___
 *___#######________######____#####_____#####____
 *____######________#####_____#####_____####_____
 *_____#####________####______#####_____###______
 *______#####______;###________###______#________
 *________##_______####________####______________
 */
/*
 * @Author: yuange
 * @LastEditors: yuange
 * @Description: Coding everyday!
 * @Date: 2019-04-01 09:52:31
 * @LastEditTime: 2019-04-01 09:52:46
 */
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto i : tokens) {
            if ("+" != i && "-" != i && "*" != i && "/" != i) {
                st.push(atoi(i.c_str()));
            } else {
                int t = st.top();
                st.pop();
                if ("+" == i) st.top() = st.top() + t;
                else if ("-" == i) st.top() = st.top() - t;
                else if ("*" == i) st.top() = st.top() * t;
                else st.top() = st.top() / t;
            }
        }
        return st.top();
    }
};