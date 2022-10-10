class Solution {
public:
    int MAH(vector<int>& height){
        
        stack<pair<int,int>>rs;
        vector<int>right;
        int pseudo_right=height.size();
        
        stack<pair<int,int>>ls;
        vector<int>left;
        int pseudo_left=-1;
        
        vector<int>area(height.size());
        vector<int>width(height.size());
        int maxArea = INT_MIN;
        
        for(int i=height.size()-1; i>=0; i--){
            if(rs.size()==0)
                right.push_back(pseudo_right);
            else if(rs.size()>0 && rs.top().first<height[i])
                right.push_back(rs.top().second);
            else if(rs.size()>0 && rs.top().first>=height[i]){
                while(rs.size()>0 && rs.top().first>=height[i])
                    rs.pop();
                if(rs.size()==0)
                    right.push_back(pseudo_right);
                else
                    right.push_back(rs.top().second);
            }
            rs.push({height[i],i});
        }
        reverse(right.begin(), right.end());
        
        
        
        for(int i=0; i<height.size(); i++){
            if(ls.size()==0)
                left.push_back(pseudo_left);
            else if(ls.size()>0 && ls.top().first<height[i])
                left.push_back(ls.top().second);
            else if(ls.size()>0 && ls.top().first>=height[i]){
                while(ls.size()>0 && ls.top().first>=height[i])
                    ls.pop();
                if(ls.size()==0)
                    left.push_back(pseudo_left);
                else
                    left.push_back(ls.top().second);
            }
            ls.push({height[i],i});
        }
        
        
        for(int i=0; i<width.size(); i++)
            width[i]=right[i]-left[i]-1;
       
        for(int i=0; i<area.size(); i++){
            area[i]=width[i]*height[i];
            maxArea=max(maxArea, area[i]);
        }
        //cout<<"MAH: "<<maxArea<<endl;
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        //cout<<"n: "<<n<<endl;
        if(n==0)
            return 0;
        int m = matrix[0].size();
        //cout<<"m: "<<m<<endl;
        vector<int>v;
        for(int j=0; j<m; j++){
            v.push_back(matrix[0][j]-'0');
        }
        int mx = MAH(v);
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]== '0')
                    v[j]=0;
                else
                    v[j]=v[j]+matrix[i][j]-'0';
            }
            mx=max(mx, MAH(v));
        }
        return mx;
    }
};
