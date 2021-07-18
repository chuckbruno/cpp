namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
    private:

        double sales[QUARTERS];
        double average;
        double max;
        double min;
        void setAverage();
        void setMaxMin();
    public:
        Sales();
        Sales(double [], int n);
        void ShowSales();

    };

}