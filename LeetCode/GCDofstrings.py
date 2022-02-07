class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        len1 = len(str1)
        len2 = len(str2)
        result = ""
        for i in range(len1):
            temp = str1[:i+1]         
            if (str1 == (len1//len(temp))*temp):
                if (str2 == (len2//len(temp))*temp) :
                    result = temp
        return result
        
