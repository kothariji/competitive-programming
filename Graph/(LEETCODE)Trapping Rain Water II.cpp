//https://leetcode.com/problems/trapping-rain-water-ii/
const int dx[4]={0,0,-1,1};//Creating direction of traversasl for x coordinates
const int dy[4]={1,-1,0,0};//Creating direction of traversal for y coordinates

class Solution {
public:
    int trapRainWater(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        class my_comp
        {
          public:
            bool operator()(tuple<int,int,int>a,tuple<int,int,int>b)
            {
                return get<0>(a) > get<0>(b);
            }
        };

        priority_queue<tuple<int, int,int>, vector<tuple<int, int,int>>,my_comp> pq;
        pair<int, int> p;
        int x, y, a, b;
        for (int i=0; i<n; ++i){
            pq.push({mat[i][0], i,0});
            vis[i][0]=1;
            pq.push({mat[i][m-1], i,m-1});
            vis[i][m-1]=1;
        }
        for (int i=1; i<m-1; ++i){
            pq.push({mat[0][i], 0,i});
            vis[0][i]=1;
            pq.push({mat[n-1][i], (n-1),i});
            vis[n-1][i]=1;
        }
        int ans = 0;
        int maxv = 0;
        while (!pq.empty()){
            tuple<int,int,int> t = pq.top();
            int x = get<1>(t);
            int y = get<2>(t);
            int h = get<0>(t);
            pq.pop();
            maxv = max(maxv,h);
            for (int i=0; i<4; ++i){
                a=x+dx[i];
                b=y+dy[i];
                if (a<0 || a==n || b<0 || b==m || vis[a][b]) continue;               
                if(maxv > mat[a][b]) ans+= maxv - mat[a][b];
                pq.push({mat[a][b], a,b});
                vis[a][b]=1;
            }
        }

        return ans; 
    }
};
