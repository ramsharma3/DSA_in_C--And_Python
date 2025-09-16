# Next Greater Element
from collections import deque as d
def NGE(li):
    
    n = len(li)
    ans = [-1] * n
    stack = d()
    
    for i in range(n-1,-1,-1):
        while stack and stack[-1] <= li[i]:
            stack.pop()
        if not stack :
            ans[i] = -1
            stack.append(li[i])
        else:
            ans[i] = stack[-1]
        stack.append(li[i])
    return ans

x = [21,45,3,21,346,7,87,6,0]
print("The NGE of this list is: ", NGE(x))

            
            
            
            
        
        
            
        
        
    
    
    
    
    
    