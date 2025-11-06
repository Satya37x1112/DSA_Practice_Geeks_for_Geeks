import java.util.*;
class right_angled_triangle{
    public static void main(String args[]){
        int a;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of iterations: ");
        a=sc.nextInt();
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<=i;j++)
            {

                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}