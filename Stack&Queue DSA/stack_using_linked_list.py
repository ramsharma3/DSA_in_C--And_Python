class stack:
    class node:
        def __init__(self, data):
            self.next = None
            self.data = data
    
    def __init__(self):
        self.top = None
    
    def push(self, data):
        new_node = self.node(data)
        new_node.next = self.top
        self.top = new_node
        
    def pop(self):
        
        if(self.top.next == None):
            print("The top element is : ", self.top.data)
        if self.top is None:
            print("The stack is empty!!")
        else : 
            temp = self.top
            self.top = self.top.next
            return temp
    
    def peek(self):
        if self.top is None:
            print("The stack is empty!!")
        
        else:
            print("The top element is: ", self.top.data)
    
    def isEmpty(self):
        return self.top is None
    
    def display(self):
        if self.top is None:
            print("The stack is empty!!")
        
        else : 
            temp = self.top
            while temp is not None:
                print(temp.data, end = " ")
                temp = temp.next
            print()
                
                
# __main__

x = stack()
x.push(5)
x.push(8)
x.push(5)
x.display()

x.pop()
x.peek()

x.isEmpty()
x.pop()

x.display()

        
            
        
        