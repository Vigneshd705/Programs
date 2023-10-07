import javax.swing.JOptionPane;

public class GUI {
    public static void main(String[] args) {
        String name= JOptionPane.showInputDialog("Enter your name");
        JOptionPane.showMessageDialog(null,"Hello! "+name);
        int age=Integer.parseInt(JOptionPane.showInputDialog("Enter your age"));
        //JoptionPane will always get input as string so we use parseInt to convert it into integer
    }
}
