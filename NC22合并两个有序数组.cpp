class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int ap=0,bp=0;
        int ans=m;
        for(ap=0,bp=0;ap<m&&bp<n;)
        {
            if(B[bp]<=A[ap])//如果数组B的值小于等于A的值，即可以把B插入到A中了，此时A中m加一，A,B指针分别后移一位
            {
                for(int i=m-1;i>=ap;i--)
                {
                    A[i+1]=A[i];
                }
                m++;
                A[ap]=B[bp];
                bp++;
                ap++;
            }
            else//如果B的值大于A，则A应该往前移动一位
            {
                ap++;
            }
        }
        if(bp==n)return;//bn==n，说明By已经全部插入到A中了，结束
        else//否则说明此时B[bp]比A中的任何一个值都大（想不通画一画就懂了），所以此时只需把B中剩余元素全部移到A后面即可
        {
            for(int i=m;i<ans+n;i++)//注意这里应该是ans+n,而不是m+n,因为m的值在插入的过程中已经被修改了（被这个卡半天）
            {
                A[i]=B[bp++];
            }
        }
    }
};