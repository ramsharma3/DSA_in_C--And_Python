# Here we find the minimum sum of subarry of an array

def Min_sum(li):
    
    n = len(li)
    sum = 0
    
    mod = 1e9 + 7
    for i in range(0, n, 1):
        mini = li[i]
        for j in range(i,n,1):
            mini = min(mini,li[j])
            sum = (sum + mini) % mod
            
    return sum
            
x = [3,2,1,4]
print("The Minimum sum of subarray is: ",Min_sum(x))