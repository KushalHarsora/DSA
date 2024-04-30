class Tree:

    # Root Node
    def __init__(self, data):
        self.parent = None
        self.children = []
        self.data = data

    def add_child(self, child):
        child.parent = self
        self.children.append(child)


# Created Root Node
electronics = Tree("Electronics")
# Created children of root node
laptop = Tree("Laptop")
phone = Tree("Phone")

# Add children
electronics.add_child(laptop)
electronics.add_child(phone)

# Add Children to Laptop
lenovo = Tree("Lenovo")
asus = Tree("Asus")
hp = Tree("Hp")
laptop.add_child(lenovo)
laptop.add_child(asus)
laptop.add_child(hp)

# Add Children to Phone
samsung = Tree("Samsung")
oneplus = Tree("OnePlus")
motorola = Tree("Motorola")
nokia = Tree("Nokia")
pixel = Tree("Pixel")
phone.add_child(samsung)
phone.add_child(oneplus)
phone.add_child(motorola)
phone.add_child(nokia)
phone.add_child(pixel)
