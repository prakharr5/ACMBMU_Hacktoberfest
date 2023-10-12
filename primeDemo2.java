import java.util.Scanner;
class primeDemo2
{
    public static void main(String[]args)
    {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter any value for min range?");
        int r1= obj.nextInt();
        System.out.println("Enter any value for max range?");
        int r2= obj.nextInt();
        int light =0;
        for(int num = r1;num<=r2;num++)
        {
            for(int i=2;i<=num/2;i++)
            {
                if(num%i==0)
                {
                    light =1;
                    break;
                }
                else
                {
                    light =0;
                }
            }
            if(light==0)
            {
                System.out.print(num + " ");
            }
        }
    }
}
