class animal {
    void makeSound() {
        System.out.println("dog:barks");
    }
}
    class cat extends animal
    {

        void makeSound()
        {
            super.makeSound();
            System.out.println("cat:Meows");
        }
    }

public class ass1 {
    public static void main(String[] args) {
    cat obj=new cat();
    obj.makeSound();
    }
}