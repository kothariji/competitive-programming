package com.viraj;

public class RotatedSorted {
    public static void main(String[] args){
        int[] arr = {3, 5, 1};
        System.out.println(search(arr, 3));

    }

    static int search(int[] arr, int target){
        int pivot = findPivot(arr);

        //if you did not find a pivot it means the array is not rotated
        if(pivot == -1){
            //just do normal binary search
            return binarySearch(arr, target, 0 , arr.length - 1);
        }
        //if pivot is found , you have found two ascending sorted array
        //case 1
        if (arr[pivot] == target){
            return pivot;
        }
        //case 2
        if(target >= arr[0]){
            return binarySearch(arr, target, 0 ,pivot-1);
        }

        return binarySearch(arr,target,pivot+1, arr.length-1);

    }

    static int binarySearch(int[] arr, int target, int start, int end ){

        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid] > target){
                end = mid - 1;
            }
            else if(arr[mid]< target){
                start = mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }


    static int findPivot(int[] arr){
        int start = 0;
        int end = arr.length - 1;

        while(start <= end){
            int mid = start + (end - start) / 2;
            //4 cases over here
            //1
            if(mid < end && arr[mid] > arr[mid+1]){
                return mid; // peak
            }
            //2
            if(mid > start && arr[mid] < arr[mid-1]){
                return mid - 1; //peak
            }
            //3
            if(arr[mid] <= arr[start]){
                end = mid -1; // ignore element from mid to the end
            }
            //4
            else{
                start = mid + 1; // more bigger nos lie ahead of mid. so ignore elements previous to mid
            }
        }
        return -1;
    }
}
