import java.util.Scanner;
class primeDemo
{
    public static void main(String[]args)
    {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter any value to check if the given value is prime?");
        int num = obj.nextInt();
        int light =0;
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
            System.out.println(num + " is a prime number");
        }
        else
        {
            System.out.println(num + " is not a prime number");
        }
    }
}
