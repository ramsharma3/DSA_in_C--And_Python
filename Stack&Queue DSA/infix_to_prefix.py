from collections import deque

# Precedence dictionary
pred = {
    '+' : 1,
    '-' : 1,
    '*' : 2,
    '/' : 2,
    '^' : 3
}

# Reverse the expression and swap parentheses
def reverse_exp(exp):
    rev = ''
    for ch in exp[::-1]:
        if ch == '(':
            rev += ')'
        elif ch == ')':
            rev += '('
        else:
            rev += ch
    return rev

# Infix to Prefix conversion
def infix_to_prefix(exp):
    exp = reverse_exp(exp)
    op = deque()
    ans = deque()

    for ch in exp:
        if ch.isalnum():  # operand
            ans.append(ch)

        elif ch == '(':
            op.append(ch)

        elif ch == ')':
            while op and op[-1] != '(':
                ans.append(op.pop())
            op.pop()  # remove '('

        else:  # operator
            while op and op[-1] != '(' and pred.get(op[-1], 0) >= pred.get(ch, 0):
                ans.append(op.pop())
            op.append(ch)

    while op:
        ans.append(op.pop())

    # Reverse final result to get prefix
    return ''.join(reversed(ans))

# Test
exp = "(A-B/C)*(A/K-L)"
print("Prefix:", infix_to_prefix(exp))
