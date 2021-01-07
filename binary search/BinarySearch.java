class BinarySearch {
    public static void main(String args[]) {
        int arr[] = { 2, 3, 4, 5, 7, 8, 9, 10, 11, 12 };
        int n = arr.length;
        int x = 8;
        int index = -1;
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] == x) {
                index = mid;
                break;
            } else if (arr[mid] > x)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (index == -1)
            System.out.println("Element not present");
        else
            System.out.println("Element found at index " + index);
    }
}
