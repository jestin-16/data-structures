public class ArrayDelete{
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int deleteIndex = 2; // Index of the element to delete

        // Create a new array with one less element
        int[] newArr = new int[arr.length - 1];

        // Copy elements before the delete index
        for (int i = 0; i < deleteIndex; i++) {
            newArr[i] = arr[i];
        }

        // Copy elements after the delete index
        for (int i = deleteIndex + 1; i < arr.length; i++) {
            newArr[i - 1] = arr[i];
        }

        // Print the new array
        System.out.print("Array after deletion: ");
        for (int num : newArr) {
            System.out.print(num + " ");
        }
    }
}