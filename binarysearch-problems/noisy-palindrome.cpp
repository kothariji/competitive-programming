// Link to problem - https://binarysearch.com/problems/Noisy-Palindrome
// Status - accepted ✅


bool solve(string s) {
    string pal = "";

    for (char x: s) {
        if (islower(x)) {
            pal += x;
        }
    }

    for (int x=0, y=pal.length()-1; x<pal.length()/2; x++, y--) {
        if (pal[x] != pal[y]) return false;
    }

    return true;    
}