class SegmentTree{
public:
	vector<int>g;
	vector<int>v;
	int deflt;
	SegmentTree(vector<int>&a,int b){
		int n=(int)a.size();
		v=a;deflt=b;
		g=vector<int>(4*n,0);
		build(1,0,n-1);
	}
	void build(int ind,int left,int right){
		if(left==right){
			g[ind]=v[left];
			return;
		}
		int mid=(left+right)/2;
		build(2*ind,left,mid);
		build(2*ind+1,mid+1,right);
	}
	int query(int ind,int start,int end,int pos){
		if(start==end){
			return g[ind];
		}
		else{
			g[2*ind]+=g[ind];
			g[2*ind+1]+=g[ind];
			g[ind]=0;
			int mid=(start+end)/2;
			if(start<=pos and pos<=mid){
				return query(2*ind,start,mid,pos);
			}
			else{
				return query(2*ind+1,mid+1,end,pos);
			}
		}
	}
	void update(int ind,int l,int r,int start,int end,int val){
		if(l>end or start>r){return;}
		
		if(start==end){
			g[ind]+=val;
		}
		else if(l<=start and end<=r){
			g[ind]+=val;
		}
		else{
			int mid=(start+end)/2;
			update(2*ind,l,r,start,mid,val);
			update(2*ind+1,l,r,mid+1,end,val);
		}
	}
	int comb(int a,int b){
		return a+b;
	}
};