def LRiH(li):
    
    n = len(li)
    stack = []
    
    Maxarea = 0
    
    for i in range(n):
        
        while stack and li[stack[-1]] > li[i]:
            element = stack[-1]
            stack.pop()
            nse = i
            pse = stack[-1] if stack else -1
            Maxarea = max((li[element] * (nse - pse -1)), Maxarea)
            
        stack.append(i)
    
    while stack:
        
        nse = n
        element = stack[-1]
        stack.pop()
        pse = stack[-1] if stack else -1
        Maxarea = max(Maxarea, (li[element] * (nse - pse - 1)))
    
    return Maxarea

x = [3,2,10,11,5,6,3]
print("The largest rectangle area of the Histogram is: ", LRiH(x))

            