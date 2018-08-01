//Code Rectified

#include <stdio.h>

#include <vector>
#include <algorithm>

int solution(std::vector<int> &A,std::vector<int> &B){
	int n =A.size();
	int m = B.size();
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	int i=0;
	for(int k =0;k<n;k++){
		while(i < m - 1 && B[i] < A[k])
			i++;
		if(A[k] == B[i])
			return A[k];
	}
	return -1;
}


int main()
{
    std::vector<int> A = {1,1,5,5};
    std::vector<int> B = {4,2,5,3,2};
    int result = solution(A,B);
    printf("Result: %d",result);
    return 0;
}