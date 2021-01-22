public class jumpsearch {
    public static void main(String[] args) {
        int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 700 };
        int x = 610;
        int index = -1;
        int n = arr.length;
        int step = (int) Math.floor(Math.sqrt(n));
        int last = -1;
        for (int i = step - 1; i < n; i += step) {
            if (arr[i] >= x) {
                last = i;
                break;
            }
        }
        // linear search parameters
        int start, end;
        if (last == -1) {
            start = (n / step) * step;
            end = n - 1;
        } else {
            start = last - step + 1;
            end = last;
        }
        for (int i = start; i <= end; i++) {
            if (arr[i] == x) {
                index = i;
                System.out.println(x + " is found at index " + index + "\n");
                break;
            }
        }
        if (index == -1)
            System.out.println(x + " is not present in the array\n");
    }
}
