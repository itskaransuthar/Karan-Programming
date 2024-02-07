// Multiplication table making (Take input from user)

import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num;
        System.out.print("\nEnter a number: ");
        num = sc.nextInt();

        for (int i = 1; i <= 10; i++)
        {
            System.out.println(num + " x " + i + " = " + (num * i));
        }

        sc.close();
    }
}