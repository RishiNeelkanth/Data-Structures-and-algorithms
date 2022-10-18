class Solution {
public:
    int fib(int n) {
        int ans[n+1];
        if(n<2)
        {
            return n;
        }
        //ans[0]=0;
        //ans[1]=1;
        int a=0;
        int b=1;
        int c=0;
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};