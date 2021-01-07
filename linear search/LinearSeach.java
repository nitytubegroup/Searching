class LinearSeach {
    public static void main(String args[]) {
        int arr[] = { 10, 7, 9, 8, 4, 12, 11, 3, 2, 5 };
        int x = 12;
        int index = -1;
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                index = i;
                break;
            }
        }
        if (index == -1)
            System.out.print("Element is not present in array\n");
        else
            System.out.print("Element is present at index " + index + "\n");
    }
}
