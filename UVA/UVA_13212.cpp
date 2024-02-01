#include <bits/stdc++.h>

using namespace std;

int n;
long long int cont;

void merge(int arr[], int left, int middle, int right){

	int aux[n];
	int i=left, j=middle+1, k=left;
	
	for(int i = left; i <= right; i++){
		aux[i] = arr[i];
	}
	//printf("L- %d %d %d\n",left,middle,right);
	while(i <= middle && j <= right){
	
	//	printf("%d %d %d %d %d\n",aux[i],aux[j],i,j,k);
		if(aux[i] <= aux[j]){
			arr[k] = aux[i];
			i++;
		} else {
			cont += middle - i+1;
			arr[k] = aux[j];
			j++;	
		}
		k++;
	}
	while(i <= middle){	
		arr[k] = aux[i];
		i++;
		k++;
	}
	while(j <= right){	
		arr[k] = aux[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int left, int right){
	
	int middle = (left+right)/2;
	
	if(left >= right)return;
	
	mergeSort(arr,left,middle);
	mergeSort(arr,middle+1,right);
	
	merge(arr,left,middle,right);

}

int main(){

    while(cin>>n && n!=0){
        cont = 0;
        int vec[n];
        for(auto &v: vec) cin >> v;
        mergeSort(vec, 0, n-1);
        
        cout << cont << "\n";
    }
    

    return 0;
}