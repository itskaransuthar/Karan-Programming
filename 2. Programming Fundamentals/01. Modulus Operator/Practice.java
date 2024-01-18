class Practice
{
    public static void main(String[] args)
    {
        System.out.println(10 % 3);                 // 1
        System.out.println(10 - (10 / 3) * 3);      // 1

        System.out.println(10 % -3);                // 1
        System.out.println(10 - (10 / -3) * -3);    // 1

        System.out.println(-10 % 3);                // -1
        System.out.println(-10 - (-10 / 3) * 3);    // -1

        System.out.println(-10 % -3);               // -1
        System.out.println(-10 - (-10 / -3) * -3);  // -1
    }
};