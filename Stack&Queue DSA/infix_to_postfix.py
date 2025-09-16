# # conversion from infix to prefix 
# from collections import deque

# precedence = {
#     '+': 1,
#     '-': 1,
#     '*': 2,
#     '/': 2,
#     '^': 3
# }

# def infix_to_postfix(s):
#     i = 0
#     st = deque()
#     ans = []
#     n = len(s)
#     while(i < n):
#         if((s[i] >= 'A' and s[i] <= 'Z') or  # Just use isalnum() function instead all this
#         (s[i] >= 'a' and s[i] <= 'z') or 
#         (s[i] >= '0' and s[i] <='9')):
#             ans.append(s[i])
        
#         elif(s[i] == '('):
#             st.append(s[i])
        
#         elif(s[i] == ')'):
#             while(st and st[-1] != '('):
#                 ans.append(st[-1])
#                 st.pop()
#             st.pop()
        
#         else:
#             while(st and st[-1] != '(' and 
#                   precedence.get(s[i], 0) >= precedence.get(st[i],0)):
#                 ans.append(st.pop())
#             st.append(s[i])    
#         i += 1
    
#     while st:
#         ans.append(st.pop())
                  
    
#     return ''.join(ans)


# x = "x+y+2y^2+c(y-v)"
# print("The Answer is: " ,infix_to_postfix(x))

            
        
from collections import deque

precedence = {
    '+': 1,
    '-': 1,
    '*': 2,
    '/': 2,
    '^': 3
}

def infix_to_postfix(s):
    i = 0
    st = deque()
    ans = []
    n = len(s)

    while i < n:
        if s[i].isalnum():  # ✅ Better way to check operand
            ans.append(s[i])

        elif s[i] == '(':
            st.append(s[i])

        elif s[i] == ')':
            while st and st[-1] != '(':
                ans.append(st.pop())
            st.pop()  # remove '('

        else:
            while (st and st[-1] != '(' and 
                   precedence.get(st[-1], 0) >= precedence.get(s[i], 0)):
                ans.append(st.pop())
            st.append(s[i])

        i += 1

    while st:
        ans.append(st.pop())

    return ''.join(ans)

# ✅ Fixed expression: use * for multiplication
x = "x+y+2*y^2+c*(y-v)"
