<<<<<<< HEAD
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 计算两个数之和
     * @param s string字符串 表示第一个整数
     * @param t string字符串 表示第二个整数
     * @return string字符串
     */
    string solve(string s, string t) {
        if (s.size() == 0) return t;
        if (t.size() == 0) return s;
        int n = max(s.size(), t.size()) + 1, ind1 = s.size() - 1, ind2 = t.size() - 1, carry = 0;
        string ans(n, '0');
        for (int i = n - 1; i >= 0; --i) {
            int x = ind1 >= 0 ? s[ind1] - '0' : 0;
            int y = ind2 >= 0 ? t[ind2] - '0' : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            sum %= 10;
            ans[i] = sum + '0';
            --ind1;
            --ind2;
        }
        if (ans[0] == '0') return ans.substr(1);
        return ans;
    }
=======
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 计算两个数之和
     * @param s string字符串 表示第一个整数
     * @param t string字符串 表示第二个整数
     * @return string字符串
     */
    string solve(string s, string t) {
        if (s.size() == 0) return t;
        if (t.size() == 0) return s;
        int n = max(s.size(), t.size()) + 1, ind1 = s.size() - 1, ind2 = t.size() - 1, carry = 0;
        string ans(n, '0');
        for (int i = n - 1; i >= 0; --i) {
            int x = ind1 >= 0 ? s[ind1] - '0' : 0;
            int y = ind2 >= 0 ? t[ind2] - '0' : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            sum %= 10;
            ans[i] = sum + '0';
            --ind1;
            --ind2;
        }
        if (ans[0] == '0') return ans.substr(1);
        return ans;
    }
>>>>>>> 7e04968311bb275f479c596a29ab1b1e2fc8797b
};