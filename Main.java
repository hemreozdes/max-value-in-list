import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int i, nums, k, order = 1, big;
        System.out.print("How many numbers do you want to compare?");
        i=scan.nextInt();
        int[] listt = new int[i];
        for(k=0;k<i;k++){
            System.out.print("Enter "+order+". number=");
            nums=scan.nextInt();
            listt[k]=nums;
            order++;
        }
        System.out.print("numbers = ");
        for(k=0;k<i;k++)
            System.out.print(listt[k]+" ");
        System.out.println();
        big=listt[0];
        for (k=1;k<i;k++){
            if(listt[k]>big){
                big=listt[k];
            }
        }
        System.out.println("Biggest number is "+big);
    }
}

