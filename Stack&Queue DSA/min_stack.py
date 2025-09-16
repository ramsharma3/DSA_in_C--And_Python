# in this file we write a code to find the minimun number in the stack

from collections import deque as d

class Min_stack:
    
    def __init__(self,value, min):
        self.value = value
        self.min = 0
        
    stack = d()
    
    def push(self,value,min):
        if self.stack:
            if self.value < self.min:
                self.min = self.value
        else:
            self.min = self.value
            self.stack.append(self.value,self.min)
            
    def min_stack(self):
        return self.min
    
    
        
        
        
        