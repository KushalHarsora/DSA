"""
Build A Tree Like this -

Nilupul (CEO)
    |__Chinmay (CTO)
        |__Vishwa (Infrastructure Head)
            |__Dhaval (Cloud Manager)
            |__Abhijit (App Manager)
        |__Aamir (Application Head)
    |__Gels (HR Head)
        |__Peter (Recruitment Manager)
        |__Waqas (Policy Manager)
"""


class Tree:

    def __init__(self, position, name):
        self.parent = None
        self.position = position
        self.name = name
        self.children = []

    def add_child(self, child):
        child.parent = self
        self.children.append(child)

    def __get_level(self):
        level = 0
        p = self.parent
        while p:
            p = p.parent
            level += 1
        return level

    # Print Only Position Tree
    def print_tree_position(self):
        print(self.position)
        if self.children:
            for child in self.children:
                spaces = ' ' * (child.__get_level() * 2)
                print(spaces + '|__', end="")
                child.print_tree_position()

    # Print only Name Tree
    def print_tree_name(self):
        print(self.name)
        if self.children:
            for child in self.children:
                spaces = ' ' * (child.__get_level() * 2)
                print(spaces + '|__', end="")
                child.print_tree_name()

    # Print Both Name and Position
    def print_tree(self):
        print(self.name + " " + f"({self.position})")
        if self.children:
            for child in self.children:
                spaces = ' ' * (child.__get_level() * 2)
                print(spaces + '|__', end="")
                child.print_tree()


def build_tree():

    # Create a root node
    root = Tree("CEO", "Nilupul")
    # Create CTO Node
    cto = Tree("CTO", "Chinmay")
    infrastructure_head = Tree("Infrastructure Head", "Vishwa")
    infrastructure_head.add_child(Tree("Cloud Manager", "Dhaval"))
    infrastructure_head.add_child(Tree("App Manager", "Abhijit"))
    cto.add_child(infrastructure_head)
    cto.add_child(Tree("Application Head", "Aamir"))
    # Create HR Head Node
    hr_head = Tree("HR Head", "Gels")
    hr_head.add_child(Tree("Recruitment Manager", "Peter"))
    hr_head.add_child(Tree("Policy Manager", "Waqas"))
    # Add Children to Root Node
    root.add_child(cto)
    root.add_child(hr_head)

    return root


if __name__ == '__main__':
    rootMain = build_tree()
    print("\nPositions are ->")
    rootMain.print_tree_position()
    print("\nNames are ->")
    rootMain.print_tree_name()
    print("\nPosition and Name Tree is ->")
    rootMain.print_tree()
