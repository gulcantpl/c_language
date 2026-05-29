double median(double x, double y, double z)
{

    if ((y <= x && x <= z) || (z <= x && x <= y)) {
        return x;
    }
    
    
    if ((x <= y && y <= z) || (z <= y && y <= x)) {
        return y;
    }
    
    
    return z;
}