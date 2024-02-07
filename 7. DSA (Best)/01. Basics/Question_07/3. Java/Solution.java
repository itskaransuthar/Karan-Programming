// Calculate power of a positive integer

import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter a number: ");
        int num = sc.nextInt();

        System.out.print("Enter a power: ");
        int p = sc.nextInt();

        sc.close();
        int ans = num;

        for (int i = 0; i < p - 1; i++)
        {
            ans *= num;
        }

        System.out.println("\n" + num + "^" + p + " = " + ans);
    }
}