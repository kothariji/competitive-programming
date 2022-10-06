class Solution {
public:
    map<vector<int>, int>mp;
    int i;
    void day_30(int m)
    {
        for(int d=1;d<=30;d++)
        {
            mp[{d,m}]=i;
            i++;
        }
        return;
    }
    void day_31(int m)
    {
        for(int d=1;d<=31;d++)
        {
            mp[{d,m}]=i;
            i++;
        }
        return;
    }
    void day_28(int m)
    {
        for(int d=1;d<=28;d++)
        {
            mp[{d,m}]=i;
            i++;
        }
        return;
    }
    int get_day(string s)
    {
        string str=s.substr(3);
        return stoi(str);
    }
    int get_month(string s)
    {
        string str=s.substr(0,3);
        return stoi(str);
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        i=1;
        day_31(1);
        day_28(2);
        day_31(3);
        day_30(4);
        day_31(5);
        day_30(6);
        day_31(7);
        day_31(8);
        day_30(9);
        day_31(10);
        day_30(11);
        day_31(12);
        
        int ad1,ad2,am1,am2;
        ad1=get_day(arriveAlice);
        ad2=get_day(leaveAlice);
        am1=get_month(arriveAlice);
        am2=get_month(leaveAlice);
        
        
        
        int bd1,bd2,bm1,bm2;
        bd1=get_day(arriveBob);
        bd2=get_day(leaveBob);
        bm1=get_month(arriveBob);
        bm2=get_month(leaveBob);
        
        vector<int>visited(366,-1);
        int ans=0;        
        
        for(int i=mp[{ad1,am1}];i<=mp[{ad2,am2}];i++)
        {
            visited[i]=0;
        }

        for(int i=mp[{bd1,bm1}];i<=mp[{bd2,bm2}];i++)
        {
            if(visited[i]==0)
            {
                ans++;
            }
        }
        return ans;
    }
};
