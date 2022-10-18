class BinarySearch {
  public static int binarySearch(int a[], int x) {
    int n = a.length;
    int l=0,r=n-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(a[mid]==x)return mid;
        else if(a[mid]>x)r=mid-1;
        else l=mid+1;
    }
    return -1;
  }

  public static void main(String args[]) {
  int array[] = { 10, 20, 30, 40, 50, 60 };
  int x = 50;

  int result = binarySearch(array, x);

  if (result == -1)
    System.out.print("Element not found");
  else
    System.out.print("Element found at index: " + result);
  }
}