https://viblo.asia/p/sap-xep-vun-dong-63vKjeYk52R
void heap_sort(int N, int a[])
{
    priority_queue < int, vector < int >, greater < int > > qu_min;
    
    // Thêm các phần tử của mảng vào priority_queue.
    for (int i = 1; i <= N; ++i)
        qu_min.push(a[i]);
        
    // In ra các phần tử trong priority_queue.
    while (!qu_min.empty())
    {
        cout << qu_min.top() << ' ';
        qu_min.pop();
    }
}
