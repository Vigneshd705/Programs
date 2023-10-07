class Box {
     int width, breadth, height;
     void volume(int w, int b, int h) {
        this.width = w;
        this.height = h;
        this.breadth = b;
    }
    void display()
    {
        System.out.println(width * breadth * height);
    }
}

public class Main {
    public static void main(String[] args) {
            Box vol=new Box();
            Box vol1=new Box();
            vol.volume(1,2,3);
            vol1.volume(10,2,3);
            vol.display();
            vol1.display();
        }
    }
