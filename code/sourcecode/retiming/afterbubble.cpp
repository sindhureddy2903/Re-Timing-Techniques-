#include <iostream>
#include <iomanip>

using namespace std;


void print(const int arr[])
{
	for(int i=0;i <10; i++) {
		cout << setw(3) << arr[i];
	}
	cout << endl;
}

/* sort arr[left]...arr[right] into increasing order */
void sortArray(int a[], int length)
{
	int  len=length;
	bool swapped= true;
	while(swapped)
	{
	    swapped=false;        
            //prologue starts here
	    a[0]>a[1];      
	    for(int i=1;i<len-1;i++)
	    {
	        int temp=0;
	        if(a[i]>a[i+1])
	        {
	            temp=a[i];
	            a[i]=a[i+1];
	            a[i+1]=temp;
	            swapped=true;
	        }//prologue ends here
	    
	    if(a[0]>a[len-1])      //epilogue starts here
	    {
	        int temp=a[0];
	        a[0]=a[len-1];
	        a[len-1]=temp;
	        swapped=true;
	        
	    }//epilogue ends here
	    }
	   
	}
  
}


int main ()
{
    int i;
    int a[10],n;
    
    std::cout<<"enter n";
    std::cin>>n;
    std::cout<<"enter array elements";
    for(i=0;i<n;i++)
    {
    std::cin>>a[i];
    }
    
    sortArray(a,n);
    print(a);
   
}