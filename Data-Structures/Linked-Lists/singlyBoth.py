class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def push_back(self, data):
        newNode = Node(data)
        if not self.head:
            self.head = self.tail = newNode
            return
        
        self.tail.next = newNode
        self.tail = newNode

    def print(self):
        entry = self.head
        while entry:
            print(entry.data, end=" ")
            #print(entry.data, entry.next)
            entry = entry.next
        print("\n")

l = LinkedList()
for i in range(10):
    l.push_back(i + 1)

l.print()