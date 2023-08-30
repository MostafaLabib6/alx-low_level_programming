


int _pow_recursion(int x, int y)
{
    int ans;
    
    if (x == 0) return (0);
    if (y == 0) return (1);
    ans = _pow_recursion(x, y / 2);
    ans = ans * ans;
    if (y & 1)
        return x * ans;
    return ans;

}
