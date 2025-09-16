from collections import deque as d 

def prefix_to_infix(exp):
    
    size = len(exp)
    i = size - 1
    st = d()
    
    while i != -1:
        if exp[i].isalnum():
            st.append(exp[i])
            
        else:
            t1 = st[-1]
            st.pop()
            t2 = st[-1]
            st.pop()
            t3 = '(' + t1 + exp[i] + t2 + ')'
            st.append(t3)
        i = i - 1
        
    return st[-1]

exp = "*+pq-mn"
print("The infix expression is: ", prefix_to_infix(exp))


            
            
        