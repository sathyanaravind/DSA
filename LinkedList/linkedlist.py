class Node:
	def __init__(self,data):
		self.data = data
		self.next = None

class LinkedList:

	def __init__(self):
		self.head = None

if __name__== '__main__':

	linked_list = LinkedList()

	#create nodes
	linked_list.head = Node(1)
	second = Node(2)
	third = Node(3)

	#connect nodes
	linked_list.head.next = second
	second.next = third

	#print the linked list
	while linked_list.head != None:
		print(linked_list.head.data,end="->")
		linked_list.head = linked_list.head.next

