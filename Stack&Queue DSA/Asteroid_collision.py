def asteroid_collision(asteroids):
    stack = []
    
    for a in asteroids:
        while stack and a < 0 < stack[-1]:
            if stack[-1] < -a:
                stack.pop()
                continue
            elif stack[-1] == -a:
                stack.pop()
            break
        else:
            stack.append(a)
    
    return stack

x = [4, 7, 1, 1, 2, -3, -7, 17, 15, -16]
print("After collision, asteroids remaining:", asteroid_collision(x))
