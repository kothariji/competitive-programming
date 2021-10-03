#include<bits/stdc++.h>
using namespace std;

vector<int> get_K_index(int n,int k)
{
	vector<int> temp;
	map<int,int> mp;
	
	for(int i=0;i<k-1;i++)
	{
		int r = rand()%n;
		while(mp.find(r)!=mp.end() or r==0 )
			r = rand()%n;
		
		mp[r] = 1;
		temp.push_back(r);
		

	}
	sort(temp.begin(),temp.end());
	return temp;
}

vector< vector<int> > divide_to_slice(int a[],int n,vector<int> &k_ind)
{
	int size = k_ind.size();
	vector<vector<int> > t(size+1);
	for(int i=0;i<size;i++)
	{
		int end = k_ind[i];
		int st = (i==0?0:k_ind[i-1]);
		for(int j=st;j<end;j++)
			t[i].push_back(a[j]);
	}
	int end = n;
	int st = k_ind[size-1];
	for(int j=st;j<end;j++)
		t[size].push_back(a[j]);
	return t;
}

vector<int> merge_slices(int a[],int n,vector<vector<int> > &slices)
{
	vector<int> b;
	for(int i=0;i<slices.size();i++)
	{
		for(int j=0;j<slices[i].size();j++)
			b.push_back(slices[i][j]);
	}
	return b;
}

int LIS(vector<int> &a,int n)
{
	int lis[n];
	lis[0] = 1;
	int tail[n];
	tail[0] = a[0];
	int l = 1;
	for(int i=1;i<n;i++)
	{
		int p = lower_bound(tail,tail+l,a[i]) - tail;
		tail[p] = a[i];
		if( p==l )
			l++;
		
	}
	return l;
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);

	// cout << n << k << endl;
	int a[n];
	vector<int> A(n);
	// cout << "hi";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		// cout << a[i] << " " ;
		A[i] = a[i];
	}
	// cout << "hi";
	int La = LIS(A,n);
	int Lb,M=0;
	vector<int> final_B;

	// if( n>= 5*1e3 )
	// {
	// 	srand(time(0));
	// 	vector<int> K;
	// 	// k = 3;
	// 	for(int i=0;i<k;i++)
	// 		K.push_back(i);


		
		
	// 	vector<int> final_k;
	// 	vector<int> final_perm;

	// 	for(int z=0;z<10;z++)
	// 	{

	// 		// get the k-1 indices to slice the array
	// 		// cout << "choose K-indices: ";
	// 		vector<int> k_ind = get_K_index(n,k);
	// 		// for(int j=0;j<k_ind.size();j++)
	// 		// 	cout << k_ind[j] << " ";
	// 		// cout << endl;

	// 		// now divide the array into k slices
	// 		vector<vector<int> > slices = divide_to_slice(a,n,k_ind);
	// 		// cout << "the slices: \n";
	// 		// for(int i=0;i<slices.size();i++)
	// 		// {
	// 		// 	for(int j=0;j<slices[i].size();j++)
	// 		// 		cout << slices[i][j] << " ";
	// 		// 	cout << endl;
	// 		// }

	// 		// merge the slices into one B
	// 		// vector<int> B = merge_slices(a,n,slices);
	// 		// cout << "The final permutation B: ";
	// 		// for(int i=0;i<B.size();i++)
	// 		// 	cout << B[i] << " ";
	// 		// cout << endl;

	// 		// cout << endl;
	// 		int loop = 0;
			
	// 		// generate permutations of k
	// 		do { 
	// 	  //       for(int j=0;j<K.size();j++)
	// 			// 	cout << K[j] << " ";
	// 			// cout << endl;
	// 			random_shuffle(K.begin(), K.end());
	// 			vector<int> B;
	// 			for(int i=0;i<K.size();i++)
	// 			{
	// 				for(int j=0;j<slices[K[i]].size();j++)
	// 					B.push_back(slices[K[i]][j]);
	// 			}

	// 			// for(int i=0;i<B.size();i++)
	// 			// 	cout << B[i] << " ";
	// 			// cout << endl;

	// 			// get LIS of B;
	// 			Lb = LIS(B,n);

	// 			if( Lb >= La and Lb > M)
	// 			{
	// 				M = Lb;
	// 				final_B = B;
	// 				// final_k = k_ind;
	// 				// final_perm = K;
	// 			}
	// 			loop++;
	// 			if(loop == 10)
	// 				break;
	// 			unsigned seed = 0; 
				

	// 	    } while (1);
	// 	}

	// 	cout << "La: " << La << "\nLb: " << M << endl;
	// 	for(int i=0;i<n;i++)
	// 		printf("%d ",final_B[i]);
	// 	printf("\n");
	// }
	// else
	// {
		srand(time(0));
		if(n < 5*1e4)
		{
			for(int i=0;i<n-k+1;i++)
			{
				vector<int> V = A;
				sort(A.begin()+i,A.begin()+i+k-2);
				Lb = LIS(A,n);
				if( Lb>=La and Lb>M)
				{
					M = Lb;
					final_B = A;

				}
				A = V;

			}
			// cout << "La: " << La << "\nLb: " << M << endl;
			for(int i=0;i<n;i++)
				printf("%d ",final_B[i]);
			printf("\n");
		}
		else
		{
			vector<int> rand_ind;
			unordered_map<int,int> mp;
			// cout << "hi";
			for(int i=0;i<100;i++)
			{
				int r = rand()%(n-k);
				while(mp.find(r)!=mp.end() )
					r = rand()%(n-k);
				
				mp[r] = 1;
				rand_ind.push_back(r);
				

			}
			// for(int i=0;i<100;i++)
			// 	cout << rand_ind[i] << " ";
			// cout << endl;
			for(int i=0;i<80;i++)
			{
				vector<int> V = A;
				sort(A.begin()+rand_ind[i],A.begin()+rand_ind[i]+k-2);
				Lb = LIS(A,n);
				if( Lb>=La and Lb>M)
				{
					M = Lb;
					final_B = A;

				}
				A = V;

			}
			// cout << "La: " << La << "\nLb: " << M << endl;
			for(int i=0;i<n;i++)
				printf("%d ",final_B[i]);
			printf("\n");
		}

		

	// }
	
	
}