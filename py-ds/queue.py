class queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        if not self.is_empty():
            return self.items.pop(0)
        raise IndexError("dequeue from empty queue")

    def size(self):
        return len(self.items)
queue_instance = queue()
queue_instance.enqueue(1)
queue_instance.enqueue(2)   
print(queue_instance.dequeue())  # Output: 1
queue_instance.enqueue(3)
print(queue_instance.size())     # Output: 2