class Solution {
    public boolean isMatch(String s, String p) {
        boolean[][] dp = new boolean[s.length() + 1][p.length()+1];
        dp[0][0] = true;
		
		// initialize first column and row
        for (int i = 1; i <= p.length(); i++) {
            dp[0][i] = p.charAt(i - 1) == '*' && dp[0][i - 2];
        }
        
        for (int i = 1; i <= s.length(); i++) {
            dp[i][0] = false;
        }
        
        for (int i = 1; i <= s.length(); i++) {
            for (int j = 1; j <= p.length(); j++) {
                if (p.charAt(j - 1) == '*') {
					// we use * to match current character in string i
					// aaa  -> aa   dp[i][j] = dp[i-1][j]
					// a*   -> a*
                    if (s.charAt(i - 1) == p.charAt(j - 2) || p.charAt(j - 2) == '.') {
                        dp[i][j] = dp[i-1][j];
                    }
					// ?* match 0 cahracters
					// aa
					// aab*
                    dp[i][j] = dp[i][j - 2] || dp[i][j];
                } else {
				// ease case
                    if (s.charAt(i - 1) == p.charAt(j - 1) || p.charAt(j - 1) == '.') {
                        dp[i][j] = dp[i - 1][j - 1];
                    }
                }
            }
        }
        return dp[s.length()][p.length()];
    }
    
    
}
