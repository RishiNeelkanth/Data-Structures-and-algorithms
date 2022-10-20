class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=INT_MIN;
        for(auto it : sentences)
        {
            int n=count(it.begin(),it.end(),' ');
            maxi=max(maxi,n);
        }
        return maxi+1;
    }
};