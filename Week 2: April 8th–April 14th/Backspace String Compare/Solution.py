class Solution(object):
    def cal(self, string):
        arr=list(string)
        i=0
        while i<len(arr):
            if arr[i] == "#":
                if i>0:
                    del arr[i-1]
                    i-=1
                del arr[i]
                i-=1
            i+=1
        res="".join(arr)
        print(res)
        return res
    def backspaceCompare(self,x,y):
        return self.cal(x) == self.cal(y)

if __name__ == '__main__':
    a=Solution()
    #assert a.backspaceCompare("ab##", "c#d#") == True
