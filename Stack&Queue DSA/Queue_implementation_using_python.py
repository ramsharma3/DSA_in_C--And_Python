# Using PYthon
class myQueue : 
    def __init__(self ,Size): #I t is a contrucotr 
        self.Start = 0
        self.end = 0
        #self.currentSize = 0
        self.Size = Size
        self.arr = [None] * Size
        
    def enqueue(self, data):
        if(self.end == self.Size):
            print("Queue is full")
        else:
            self.arr[self.end] = data
            self.end = self.end + 1
    
    def dequeue(self):
        if(not self.end):
            return 0
        else:
            removed = self.arr[self.Start]
            self.Start = self.Start + 1
            return removed
    
    def display(self):
        if(self.Start == self.end):
            print("The QUeue is empty!!")
        else:
            print("The Queue contains : ", self.arr[self.Start:self.end])

#___main____
x = myQueue(5)
x.enqueue(19)
x.enqueue(69)
x.display()
x.dequeue()
x.display()
x.enqueue(5)
x.enqueue(78)
x.enqueue(54)
x.enqueue(7)
x.display()
x.dequeue()
x.dequeue()
x.dequeue()
x.display()
x.enqueue(56)
x.enqueue(8)
x.display()
    
        

    
                
                
    
    