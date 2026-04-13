public class ArrayRemove {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int removeIndex = 2; // Index of the element to remove (0-based)

        // Create a new array with one less element
        int[] newArr = new int[arr.length - 1];

        // Copy elements before the remove index
        for (int i = 0; i < removeIndex; i++) {
            newArr[i] = arr[i];
        }

        // Copy elements after the remove index
        for (int i = removeIndex + 1; i < arr.length; i++) {
            newArr[i - 1] = arr[i];
        }

        // Print the new array
        System.out.print("Array after removal: ");
        for (int num : newArr) {
            System.out.print(num + " ");
        }
    }
}
