class Node:
    def __init__(self, info): 
        self.info = info  
        self.left = None  
        self.right = None 
        self.level = None 

    def __str__(self):
        return str(self.info) 

class BinarySearchTree:
    def __init__(self): 
        self.root = None

    def create(self, val):  
        if self.root == None:
            self.root = Node(val)
        else:
            current = self.root
         
            while True:
                if val < current.info:
                    if current.left:
                        current = current.left
                    else:
                        current.left = Node(val)
                        break
                elif val > current.info:
                    if current.right:
                        current = current.right
                    else:
                        current.right = Node(val)
                        break
                else:
                    break

"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.info (the value of the node)
"""
def topView(root):
    #Write your code here
    
    q = []
    d = {}
    
    if not root:
        return
    
    q.append((root, 0))
    
    while q != []:
        node, horiz_dist = q[0]
        q = q[1:]
        
        if horiz_dist not in d:
            d[horiz_dist] = node.info
        
        
        if node.left:
            q.append((node.left, horiz_dist - 1))
        
        if node.right:
            q.append((node.right, horiz_dist + 1))
    
    keys = sorted([key for key, _ in d.items()])
    
    for key in keys:
        print(str(d[key]) + ' ', end='')



tree = BinarySearchTree()
t = int(input())

arr = list(map(int, input().split()))

for i in range(t):
    tree.create(arr[i])

topView(tree.root)