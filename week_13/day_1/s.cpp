 string a, b;
    cin >> a >> b;
    int n = a.size();
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0' and a[i + 1] == '1')
        {
            if (b[i] == '0' and b[i + 1] == '1')
                flag = true;
        
        }
    }
    cout << (flag ? "YES\n" : "NO\n");