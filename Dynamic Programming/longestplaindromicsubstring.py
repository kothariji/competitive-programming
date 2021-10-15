// Problem Statement link:- https://leetcode.com/problems/longest-palindromic-substring/	
  
  def longestPalindrome(self, s: str) -> str:

	  n=len(s)
	  dp=[]
	  for _ in range(n):
		dp.append([None]*n)

	  maxLen=1
	  start,end=0,0 #start,end

	  for i in range(n):
		dp[i][i]=1 #main diag

		if i+1<=n-1:#2nd diag
		  if s[i]==s[i+1]: 
			dp[i][i+1]=2 
			maxLen=2
			start,end=i,i+1 #start,end
		  else:
			dp[i][i+1]=0



	  for d in range(2,n): #2,3,4,..,n
		for rStart in range(n):
		  cEnd=d+rStart
		  if cEnd>n-1: break

		  if s[rStart]==s[cEnd] and dp[rStart+1][cEnd-1]>0:
			dp[rStart][cEnd]=dp[rStart+1][cEnd-1]+2

			#update the longest palindromic substring
			if (cEnd-rStart+1)>maxLen:
			  maxLen=(cEnd-rStart+1)
			  start,end=rStart,cEnd

		  else:dp[rStart][cEnd]=0




	  return s[start:end+1]
