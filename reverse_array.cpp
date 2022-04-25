

void reverseArray(vector<int> &arr , int m)
{
	if(m==arr.size()) return ;	//
	int j=1;
	int n=arr.size();
	for(int i=m+1;i<=(arr.size()-m)/2+m;i++,j++){
		swap(arr[i],arr[n-j]);
	}
	return;
}
