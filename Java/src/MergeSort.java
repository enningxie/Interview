// 归并排序
public class MergeSort {
    public static void merge(int[] arr, int left, int mid, int right){
        int[] help = new int[right - left +1];
        int l = left;
        int r = mid  + 1;
        int index = 0;
        while(l <= mid && r <= right){
            if(arr[l] <= arr[r]){
                help[index++] = arr[l++];
            } else{
                help[index++] = arr[r++];
            }
        }
        while(l < mid){
            help[index++] = arr[l++];
        }
        while(r < right){
            help[index++] = arr[r++];
        }
        for(int i = 0; i < help.length; i++){
            arr[left + i] = help[i];
        }

    }
    public static void process(int[] arr, int left, int right){
        if(left == right){
            return;
        }
        int mid = (left + right) / 2;
        process(arr, left, mid);
        process(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
    public static void mergeSort(int[] arr){
        if(arr == null || arr.length < 2){
            return;
        }
        process(arr, 0, arr.length - 1);
    }
}
