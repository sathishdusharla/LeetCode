class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s=0
        l=[]
        for i in digits:
            s=s*10+i
        s+=1
        st=str(s)
        for i in st:
            l.append(int(i))
        return l
