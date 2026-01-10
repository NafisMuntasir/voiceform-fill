#include<bits/stdc++.h>

int main()
{
    int n, odd_index, even_index, odd_count = 0, even_count = 0;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        std::cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even_count++;
            even_index = i + 1;
        }

        else
        {
            odd_count++;
            odd_index = i + 1;
        }

        
    }

    std::cout << (odd_count < even_count ? odd_index : even_index);
}