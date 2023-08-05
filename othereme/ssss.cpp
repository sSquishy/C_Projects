#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"ENTER NUMBER OF ELEMENTS:  ";
    cin>>n;
    cout<<"\nENTER ELEMENTS: \n";

    int arr[n];
    
    for(int i = 0; i < n; i++)
		{
        	cin>>arr[i];
    	}

    

    cout << "\nENTERED ELEMENTS: ";
    for(int i=0; i<n; i++) 
		{
        	cout<<arr[i]<<" ";
    	}

	int count=0;
    cout<<"\nREPEATING ELEMENTS ARE: ";
    	for(int i = 0; i < n; i++)
			{
        		for(int j = i + 1; j < n; j++)
					{
            			if(arr[i]==arr[j])
						{
                			cout<<arr[j]<<" ";
            			}
        			}
			}
    return 0;
}



