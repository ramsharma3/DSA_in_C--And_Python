# Nearest smaller element [NSE]
from collections import deque as d

def find_NSE(li):
    
    n = len(li)
    ans = [0] * n
    st = d()
    
    for i in range (0, n, 1):
        while st and st[-1] >= li[i]:
            st.pop()
        if not st:
            ans[i] = -1
            
        else : 
            ans[i] = st[-1]
        st.append(li[i])
    return ans 

# complexity of the program is 0(2n)

list1 = [4,5,2,10,8]
print("The NSE of the list is: ", find_NSE(list1))
        
    