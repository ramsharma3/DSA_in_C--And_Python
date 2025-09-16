class circularQueue:
    def __init__(self, Size):
        self.arr = [None] * Size
        self.front = -1
        self.rear  = -1
        self.Size = Size
    
    def enqueue(self, value):
        if((self.rear + 1) % self.Size == self.front):
            print("THe QUeue is full")
        else:
            if(self.front == -1):
                self.front = 0
                self.rear = 0
            else:
                self.rear = (self.rear + 1) % self.Size
            self.arr[self.rear] = value
            
    def dequeue(self):
        if(self.front == -1):
            print("Queue is empty:)")
        else:
            removed_val = self.arr[self.front]
            self.front = (self.front+1) % self.Size
            return removed_val
    def display(self):
        if(self.front == -1):
            print("Queue is empty:)")
        else:
            print("The QUeue contains: ", end=" ")
            i = self.front
            while True:
                print(self.arr[i], end=" ")
                if i == self.rear:
                    break
                i = (i + 1) % self.Size
            print()
            
#___main__

q = circularQueue(5)
q.enqueue(5)
q.enqueue(6)
q.enqueue(69)
q.enqueue(96)
q.enqueue(19)
q.dequeue()
q.dequeue()
q.enqueue(5)
q.enqueue(5)

q.display()






            