class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
    
    
        lt1= list(s)
        lt2= list(t)
        m=len(t)
    
        for i in range(m):
            if lt2[i] in lt1:
                lt1.remove(lt2[i])
    
        if lt1 == [] :
            return True
        else:
            return False
        
