class Node:

    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class LinkedList:

    def __init__(self):
        self.head = None

    def add_to_start(self, data):
        node = Node(data, self.head)
        self.head = node

    def add_to_end(self, data):
        node = Node(data, None)

        if self.head is None:
            self.head = node
            return

        init = self.head

        while init.next:
            init = init.next

        init.next = node

    def add_after_number(self, data, source):
        if self.head is None:
            print("List is Empty")
            return

        node = Node(data, None)

        init = self.head

        while init.data != source:
            init = init.next

        node.next = init.next
        init.next = node

    def add_before_number(self, data, source):
        if self.head is None:
            self.add_to_start(data)
            return

        node = Node(data, None)

        init = self.head
        temp = init.next
        while temp.data != source:
            temp = temp.next
            init = init.next

        node.next = init.next
        init.next = node

    def delete_after_number(self, source):
        if self.head is None:
            print("List is Empty")
            return

        init = self.head
        temp = init.next

        while init.data != source:
            init = init.next
            temp = temp.next

        if init.next is None:
            print(f"No number after {source}")

        if temp.next is None:
            init.next = None

        init.next = temp.next
        temp.next = None

    def delete_before_number(self, source):
        if self.head is None:
            print("No number in List")

        init = self.head
        temp = init.next

        if init.next is None:
            print(f"No number before {source}")

        while temp.next != source:
            temp = temp.next
            init = init.next

    def display_list(self):
        if self.head is None:
            print("List is Empty")
            return

        init = self.head
        output = []
        while init:
            output.append(init.data)
            init = init.next

        print(output)


if __name__ == '__main__':
    linkedlist = LinkedList()
    linkedlist.add_to_start(10)
    linkedlist.add_to_start(20)
    linkedlist.add_to_start(30)
    linkedlist.add_to_start(40)
    linkedlist.delete_after_number(40)
    # linkedlist.add_to_end(40)
    # linkedlist.add_after_number(5, 20)
    # linkedlist.add_before_number(15, 20)
    linkedlist.display_list()
