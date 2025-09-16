# Trapping Rain Water problem

def T_R_W_problem(li):
    
    n = len(li)
    total_sum = 0
    prefix_max = [0] * n
    suffix_max = [0] * n
    
    #prefix
    prefix_max[0] = li[0]
    for i in range (1,n):
        prefix_max[i] = max( prefix_max[i-1], li[i])
    
    # suffix
    suffix_max[-1] = li[-1]
    for j in range(n-2,-1,-1):
        suffix_max[j] = max( suffix_max[j+1], li[j])
    
    for i in range(n):
        
        z = min(prefix_max[i],suffix_max[i]) - li[i]
        if z > 0:
            total_sum += z
        
    return total_sum


trapped = [0,1,0,2,1,0,1,3]
print("The total of trapped water is: ", T_R_W_problem(trapped))
        
        