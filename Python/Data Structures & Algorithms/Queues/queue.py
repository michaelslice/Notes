from collections import deque

queue = deque(["Eric", "John", "Michael"])
queue.append("Terry") # Add Terry
queue.append("Graham") # Graham 
queue.popleft() # The front moves
# 'Eric'
queue
# deque(['Michael', 'Terry], "Graham")
