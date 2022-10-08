import java.util.Arrays;

public class MergeSort {
    public static void main(String[] args) {
        int[] arr={5,4,2,4,1};
        arr=merge(arr);
        System.out.println(Arrays.toString(arr));
    }
    static int[] merge(int[] arr){
        if(arr.length == 1)
            return arr;
        int mid=arr.length/2;
        int[] left=merge(Arrays.copyOfRange(arr, 0, mid));
        int[] right=merge(Arrays.copyOfRange(arr, mid, arr.length));

        return mergeArr(left, right);
        
    }
    static int[] mergeArr(int[] left, int[] right){
        int[] mix=new int[left.length+right.length];
        int j=0,i=0,k=0;

        while(i<left.length && j<right.length){
            if(left[i]<right[j]){
                mix[k++]=left[i];
                i++;
            }else{
                mix[k++]=right[j];
                j++;
            }
        }
        while(i<left.length){
            mix[k++]=left[i++];
        }

        while(j<right.length){
            mix[k++]=right[j++];
        }

        return mix;
    }
}
