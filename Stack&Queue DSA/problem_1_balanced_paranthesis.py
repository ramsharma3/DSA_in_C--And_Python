def isbal_para(exp):
    pair = {')' : '(', '}' : '{' , ']' :'['}
    stack = []
    
    for ch in exp:
        if ch in "([{":
            stack.append(ch)
        elif ch in ")]}":
            if not stack or stack[-1] != pair[ch]:
                return 0
            
            stack.pop()
    return len(stack) == 0

print(isbal_para("[()]"))
print(isbal_para("}{}[)]"))
                
                