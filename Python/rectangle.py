class rectangle:
    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth

    def display_area(self):
        print(f"The area of the rectangle is {self.length*self.breadth}")
    def display_perimeter(self):
        print(f"The perimeter of the rectangle is {2*(self.length+self.breadth)}")
class square(rectangle):
    def __init__(self,side):
        self.length=side
        self.breadth=side
    def display_area(self):
        return super().display_area()
    def display_perimeter(self):
        return super().display_perimeter()
    

#rectangle1=square(int(input("Enter the length: ")),int(input("Enter the breadth: ")))
rectangle1=square(int(input("Enter the side: ")))
rectangle1.display_area()
rectangle1.display_perimeter()
