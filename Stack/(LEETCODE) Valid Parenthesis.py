class Solution:
    def isValid(self, s: str) -> bool:
        st = [s[0]]
        for i in range(1, len(s)):
            if len(st) == 0:
                st += s[i]
            else:
                if st[-1]+s[i] in ['()', '[]', '{}']:
                    st.pop()
                else:
                    st += s[i]
        return len(st) == 0
