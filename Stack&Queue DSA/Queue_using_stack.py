from collections import deque

class Queue:
    def __init__(self):
        self.stack1 = deque()
        self.stack2 = deque()

    def enque(self, data):
        self.stack2.append(data)

    def deque(self):
        if not self.stack2 and not self.stack1:
            print("Queue is empty!!")
            return

        if not self.stack1:
            while self.stack2:
                self.stack1.append(self.stack2.pop())
        
        return self.stack1.pop()

    def top(self):
        if not self.stack2 and not self.stack1:
            print("Queue is empty!!")
            return

        if not self.stack1:
            while self.stack2:
                self.stack1.append(self.stack2.pop())

        print("The front element is:", self.stack1[-1])  # Stack1 top = queue front

    def display(self):
        if not self.stack1 and not self.stack2:
            print("Queue is empty!!")
            return

        # Create a temporary view of the full queue
        temp = list(self.stack1)
        temp.reverse()  # stack1 elements are already reversed (front is top)
        temp += list(self.stack2)
        
        print("The content of queue is:")
        for i in temp:
            print(i, end=" ")
        print()


#__main__
 
q = Queue()

q.enque(4)
q.enque(8)
q.enque(12)
q.enque(16)
q.top()
q.deque()
q.display()

            
    
    
        
        

