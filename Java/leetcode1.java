import java.util.ArrayList;

public class leetcode1 {
    public static void main(String[] args) {
        String licensePlate = "1s3 PSt";
        licensePlate = licensePlate.toLowerCase();
        System.out.println(licensePlate);
        ArrayList<Character> temp_arr = new ArrayList(1);
        // Character temp_arr[]=new Character[120];
        String[] words = { "step", "steps", "striple", "stepple" };
        int len_l = licensePlate.length();
        int len_w = words.length, len_t = 0, count = 0;
        for (int i = 0; i < len_l; i++) {
            if (Character.isAlphabetic(licensePlate.charAt(i))) {
                temp_arr.add(licensePlate.charAt(i));
                len_t++;
            }
        }
        for (int i = 0; i < len_w; i++) {
            // count=0;
            for (int j = 0; j < len_t; j++) {
                count = 0;
                for (int k = 0; k < words[i].length(); k++) {
                    if (temp_arr.get(j) == words[i].charAt(k)) {
                        count++;
                    }
                }
                
                if (count == len_t) {
                    System.out.println(words[i]);
                }
            }

        }
    }
}
