from collections import deque as d

def min_sub(li):
    
    n = len(li)
    leftmax = [0]*n
    rightmax = [0] * n
    stack = []
    mod = (10 ** 9) + 7
    
    for i in range(0,n):
        count = 1
        while stack and stack[-1][0] > li[i]:
            count = count + stack.pop()[1]
        leftmax[i] = count
        stack.append((li[i],count))
        
    stack = []
    
    for i in range(n-1,-1,-1):
        count = 1
        while stack and stack[-1][0] >= li[i]:
            count = count + stack.pop()[1]
        rightmax[i] = count 
        stack.append((li[i],count))
    total = 0    
    for i in range(0,n):
        
        total = (rightmax[i] * leftmax[i] * li[i]) + total
        total = total % mod
    return total

x = [2,2,3,1]
print("The Minimum of subarray is: ", min_sub(x))
        



def max_sub(li):
    
    n = len(li)
    leftmax = [0]*n
    rightmax = [0] * n
    stack = []
    mod = (10 ** 9) + 7
    
    for i in range(0,n):
        count = 1
        while stack and stack[-1][0] <= li[i]:
            count = count + stack.pop()[1]
        leftmax[i] = count
        stack.append((li[i],count))
        
    stack = []
    
    for i in range(n-1,-1,-1):
        count = 1
        while stack and stack[-1][0] < li[i]:
            count = count + stack.pop()[1]
        rightmax[i] = count 
        stack.append((li[i],count))
    total = 0    
    for i in range(0,n):
        
        total = (rightmax[i] * leftmax[i] * li[i]) + total
        total = total % mod
    return total

x = [2,2,3,1]
print("The Maximum of subarray is: ", max_sub(x))
        
    
def subarray_range(li):
    x = max_sub(li)
    y = min_sub(li)
    return x - y
 
x = [2,2,3,1]   
print("The sum of subarray range is: ",subarray_range(x))

    
    
    