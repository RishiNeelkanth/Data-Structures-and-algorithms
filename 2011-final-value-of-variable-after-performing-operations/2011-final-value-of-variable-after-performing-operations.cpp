class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int nn=operations.size();
        cout<<operations[0][2];
        int p=0;
        int n=0;
        for(int i=0;i<nn;i++)
        {
            if(operations[i][1]=='+')
            {
                p++;
            }
            if(operations[i][1]=='-')
            {
                n++;
            }
            
        }
        return p-n;
    }
};