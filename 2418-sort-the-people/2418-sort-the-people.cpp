class Solution {
public:
   
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<pair<int, string>> A;
        int N = names.size();
        for(int i = 0; i < N; i++) {
            A.push_back({heights[i], names[i]});
        }

        sort(A.rbegin(), A.rend());

        vector<string> ans;
        int i=0;
        for(auto it : A) {
            names[i]=it.second;
            i++;
        }
        return names;
    }

    
};