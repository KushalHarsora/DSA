class Tree:

    # Initialized an empty Node (Root Node)
    def __init__(self, data):
        self.parent = None
        self.children = []
        self.data = data

    # Add Child data to given object
    def add_child(self, child):
        print(self)
        print(self.data)
        child.parent = self
        self.children.append(child)


def build_tree():

    # Create a Root Node
    root = Tree("Electronics")

    # Create Children Node
    laptop = Tree("Laptop")
    laptop.add_child(Tree("Asus"))
    laptop.add_child(Tree("Lenovo"))

    mobile = Tree("Mobile")
    mobile.add_child(Tree("Samsung"))
    mobile.add_child(Tree("Apple"))
    mobile.add_child(Tree("Nokia"))
    mobile.add_child(Tree("Motorola"))

    tv = Tree("Tv")
    tv.add_child(Tree("Sony"))
    tv.add_child(Tree("MI"))
    tv.add_child(Tree("OnePlus"))

    # Add Child to Root Node
    root.add_child(laptop)
    root.add_child(mobile)
    root.add_child(tv)

    # Return Root Node
    return root


if __name__ == '__main__':
    build_tree()
