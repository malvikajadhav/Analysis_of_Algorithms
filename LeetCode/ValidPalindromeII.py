class Solution(object):
    def validPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        def check(s,l,r):
            while l<r: 
                if (s[l]!=s[r]):
                    return False
                l = l+1
                r = r-1
            return True
        
        l = 0
        r = len(s)-1
        while l<r:
            if s[l]!=s[r]:
                return check(s,l+1,r) or check(s,l,r-1)
            l=l+1
            r=r-1
        return True
            
