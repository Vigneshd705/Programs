package Codes;
class Box {
    int width, breadth, height;

    // Box(int w, int b, int h) {
    //     this.width = w;
    //     this.height = h;
    //     this.breadth = b;
    //     System.out.println("Constructor is called");
    // }

    void volume(int w, int b, int h) {
        this.width = w;
        this.height = h;
        this.breadth = b;
        System.out.println(width * breadth * height);
    }
}

public class thiskw {
    public static void main(String[] args) {
        Box vol=new Box();
        vol.volume(1,2,3);
        vol.volume(10,2,3);
    }
}
