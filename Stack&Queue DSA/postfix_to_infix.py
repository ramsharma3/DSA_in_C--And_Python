from collections import deque as dq

def postfix2infix(exp):
    
    st = dq()
    i = 0
    size = len(exp)
    
    while( i < size):
        if exp[i].isalnum():
            st.append(exp[i])
        else : 
            t1 = st[-1]
            st.pop()
            t2 = st[-1]
            st.pop()
            
            val = '(' + t2 + exp[i] + t1 + ')'
            st.append(val)
        
        i+=1 
    
    return st[-1]

exp = "ab-de+f*/"
print("The Infix expression is: ", postfix2infix(exp))
            
            