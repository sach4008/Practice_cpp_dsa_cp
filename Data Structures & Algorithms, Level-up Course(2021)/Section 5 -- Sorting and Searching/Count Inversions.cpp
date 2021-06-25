// GFG Question;


    //helper method
long long merge(long long array[],long long s,long long e){
	long long i = s;
	long long m = (s+e)/2;
	long long j = m + 1;

	vector<long long> temp;

	long long cnt = 0;

	while(i<=m and j<=e){
		if(array[i] <= array[j]){
			temp.push_back(array[i]);
			i++;
		}
		else{
			cnt += (m - i + 1);
			temp.push_back(array[j]);
			j++;
		}
	}

	//copy rem elements from first array
	while(i<=m){
		temp.push_back(array[i++]);
	}

	// or copy rem elements from second array
	while(j<=e){
		temp.push_back(array[j++]);
	}

	//copy back the eleemtns from temp to original array
	long long k = 0 ;
	for(long long idx = s; idx <=e ;idx++){
		array[idx] = temp[k++];
	}
	return cnt;
}

//sorting method
    long long int inversion_count(long long arr[],long long s,long long e){
	//base case
	if(s>=e){
		return 0;
	}
	//rec case
	long long mid = (s+e)/2;
	long long C1 = inversion_count(arr,s,mid);
	long long C2 = inversion_count(arr,mid+1,e);
	long long CI =  merge(arr,s,e);
	return C1 + C2 + CI;
}
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return inversion_count(arr,0,N-1);
    }

};
