class SegmentTree{
public:
	vector<int>g;
	vector<int>v;
	int deflt; // default value for segtree
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
		g[ind]=comb(g[2*ind],g[2*ind+1]);
	}
	int query(int l, int r){
		return query(1,l,r,0,v.size()-1);
	}
	int query(int ind,int l,int r,int start,int end){
		if(l>end or r<start){return deflt;}
		if(start==end){
			return g[ind];
		}
		if(start>=l and r>=end){
			return g[ind];
		}
		
		int mid=(start+end)/2;
		int left=query(2*ind,l,r,start,mid);
		int right=query(2*ind+1,l,r,mid+1,end);
		return comb(left,right);
	}
	void update(int pos, int val){
		return update(1,0,v.size()-1,pos,val);
	}
	void update(int ind,int l,int r,int pos,int val){
		if(l==r){
			g[ind]=val;
			v[pos]=val;
			return;
		}
		int mid=(l+r)/2;
		if(pos>=l and pos<=mid){
			update(2*ind,l,mid,pos,val);
		}
		else{
			update(2*ind+1,mid+1,r,pos,val);
		}
		g[ind]=comb(g[2*ind],g[2*ind+1]);
	}
	int comb(int a,int b){
		return min(a,b);   //operation which is performed on segtree
	}
};