//Parth Shah
//AU1940065
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> atemp = new ArrayList<Integer>();
        for(int i = 0;i<n;i++)
        {
            int temp = sc.nextInt();
            atemp.add(temp);
        }
        int result = 0;
        for(int i = 0;i<n-1;i++)
        {
            int temp = Math.abs(atemp.get(i) - atemp.get(i+1));
            result += temp;
        }
        System.out.println(result);
    }
}
