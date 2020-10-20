# Diamond Square

## Code

```C++
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int i, j;
    for(i = 0 ; i < n ; i++) {
        for(j = i ; j < n-1 ; j++)
            cout << " ";
        for(j = 0 ; j < i*2+1 ; j++)
            cout << "*";   
        cout << endl;
    }
    for(i = n-1 ; i > 0 ; i--) {
        for(j = i ; j < n ; j++ )
            cout << " ";
        for(j = 0 ; j < i*2-1 ; j++ )
            cout << "*";
        cout << endl;
    }
    return 0;
}
```

## Output
 
![Diamond image](rows_6.png?raw=true "Diamond(row=6)")   

## Contributed By

| Name | GitHub Username | 
| --- | --- | 
| Srijita | SrijitaSarkar99 | 
