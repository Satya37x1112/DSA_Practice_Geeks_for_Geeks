import java.util.*;
class right_angled_triangle{
    public static void main(String args[]){
        int a;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of iterations: ");
        a=sc.nextInt();
        for(int i=a;i>0;i--)
        {
            for(int space=i;space>0;space--)
            {
                    System.out.print(" ");
            }
            for(int j=0;j<=a-i;j++)
            {

                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}