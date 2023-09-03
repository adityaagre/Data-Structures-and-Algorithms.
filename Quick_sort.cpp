#include<iostream>
using namespace std;

int partition(int array[], int begin, int end /*end is the inclusive index. if n, pass n-1*/){

    int pi_val=array[begin];

    //find position of pivot
    int count=0;
    for(int i=begin+1; i<=end ; i++){
        if(array[i]<=pi_val){
            count++;
        }
    }

    int piv_index=begin+count;

    //swap number at piv_index with number at begining(pivot)

    array[begin]=array[piv_index];
    array[piv_index]=pi_val;

    int low= begin;
    int high= end;

    
        while((low<piv_index)&&(high>piv_index)){
            

            while(array[low] <= pi_val)
            {
                low++;
            }

            while(array[high]>pi_val){
                high--;
            }

            if((low<piv_index)&&(high>piv_index)){
                int temp;
                temp = array[low];
                array[low]=array[high];
                array[high]=temp;

            }

        }
    return piv_index;

}

void quick_sort(int array[], int begin, int end){
    if(begin>=end){
        return;
    }

    int p= partition(array, begin, end);

    quick_sort(array, begin, p-1);
    quick_sort(array, p+1, end);
}

int main()
{

	int arr[] = { 9, 3, 4, 2, 1, 8 };
	int n = 6;

	quick_sort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
