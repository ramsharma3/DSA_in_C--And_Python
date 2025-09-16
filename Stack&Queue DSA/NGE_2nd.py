from collections import deque as d

def find_NGE(li):
    
    n = len(li)
    Ans = [-1] * n
    st = d()
    
    for i in range(2 * n - 1 , -1 , -1):
        
        while st and li[i%n] >= st[-1]:
            st.pop()
            
        if(i < n):
           
            Ans[i] = st[-1] if st else -1
        st.append(li[i%n])
    return Ans
        
li1 = [2,10,7,21,5,4]
print("The NGE of this list is: ",find_NGE(li1))
        
        