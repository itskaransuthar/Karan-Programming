// Print natural numbers from 1 to 100 but difference is 3

class Solution {
    public static void main(String[] args) {
        System.out.print("\nNatural numbers from 1 to 100 but difference is 3: ");

        for (int i = 1; i <= 100; i += 3)
        {
            System.out.print(i + " ");
        }

        System.out.println();
    }
}