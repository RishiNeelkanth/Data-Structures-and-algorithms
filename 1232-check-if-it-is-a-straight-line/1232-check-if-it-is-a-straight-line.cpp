     class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        int x=coordinates[0][0];
        int y=coordinates[0][1];
        
        int x1=coordinates[1][0];
        int y1=coordinates[1][1];
        int x1diffx=x1-x;
        int y1diffy=y1-y;
        for(int i=2;i<n;i++)
        {
            int x2=coordinates[i][0];
            int y2=coordinates[i][1];
            int x2diffx1=x2-x1;
            int y2diffy1=y2-y1;
            if((x2diffx1 * y1diffy)!=(y2diffy1*x1diffx))
            {
                return false;
            }   
        }
       return true;
    }
};           

