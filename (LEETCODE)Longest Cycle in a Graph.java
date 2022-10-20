class Solution {
    public int longestCycle(int[] edges) {
        ArrayList<ArrayList<Integer>> adj= new ArrayList<>();
        ArrayList<ArrayList<Integer> > ans = new ArrayList<ArrayList<Integer> >();
        for(int i=0;i<edges.length;i++)
        {
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<edges.length;i++)
        {
            if(edges[i]!=-1)
            adj.get(i).add(edges[i]);
        }
        int k=kosaraju(edges.length,adj,ans);
        if(ans.size()!=0)
        Collections.sort(ans,(a,b)->b.size()-a.size());
        if(ans.size()==0)
        {
            return -1;
        }
        return ans.get(0).size();
    }
    public int kosaraju(int n, ArrayList<ArrayList<Integer>> adj, ArrayList<ArrayList<Integer> > ans)
    {
        //code here
        int vis[] = new int[n]; 
        Stack<Integer> st = new Stack<Integer>(); 
        for(int i = 0;i<n;i++) {
        	if(vis[i] == 0) {
        		dfs(i, st, adj, vis); 
        	}
        }

        ArrayList<ArrayList<Integer> > transpose = new ArrayList<ArrayList<Integer> >();
		        // ArrayList<ArrayList<Integer> > ans = new ArrayList<ArrayList<Integer> >();

		for (int i = 0; i < n; i++) 
			transpose.add(new ArrayList<Integer>());

		for(int i = 0;i<n;i++) {
			vis[i] = 0; 
			for(Integer it: adj.get(i)) {
				transpose.get(it).add(i); 
			}
		}
         int cnt = 0;
		while(st.size() > 0) {
			int node = st.peek(); 
			st.pop(); 
			if(vis[node] == 0) {

				cnt++;
				ArrayList<Integer> p= new ArrayList<>();
				revDfs(node, transpose, vis,p);
				if(p.size()>1)
				ans.add(new ArrayList<>(p));
				
			}
		}

		return cnt;
    }
    private void dfs(int node, Stack<Integer> st, ArrayList<ArrayList<Integer>> adj, int vis[]) {
		vis[node] = 1;
		for(Integer it : adj.get(node)) {
			if(vis[it] == 0) {
				dfs(it, st, adj, vis); 
			}
		}

		st.push(node); 
	}
	private void revDfs(int node, ArrayList<ArrayList<Integer>> transpose, int vis[],ArrayList<Integer> curr) {
		vis[node] = 1;
// 		System.out.print(node + " "); 
   curr.add(node);
		for(Integer it : transpose.get(node)) {
			if(vis[it] == 0) {
				revDfs(it, transpose, vis,curr); 
			}
		}
	}
}
