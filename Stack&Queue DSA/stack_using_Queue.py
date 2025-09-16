from queue import Queue

class StackUsingQueue:
    def __init__(self):
        self.q = Queue()

    def push(self, x):
        self.q.put(x)
        # Rotate all previous elements behind the new one
        for _ in range(self.q.qsize() - 1):
            self.q.put(self.q.get())

    def pop(self):
        if self.q.empty():
            print("Stack is empty")
            return None
        return self.q.get()

    def top(self):
        if self.q.empty():
            print("Stack is empty")
            return None
        top_element = self.q.get()
        self.q.put(top_element)
        for _ in range(self.q.qsize() - 1): # rerotate to maintain the stack order
            self.q.put(self.q.get())
        return top_element

    def is_empty(self):
        return self.q.empty()

    def size(self):
        return self.q.qsize()


#__main__

s = StackUsingQueue()
s.push(10)
s.push(20)
s.push(30)

print(s.top())   
print(s.pop())  
print(s.top())   

