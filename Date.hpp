#ifndef dateheader
#define dateheader

class Date{
    private:
        int day;
        int month;
        int year;
    
    public:
        Date(int d, int m, int y);
        void createDate(Date input);
        void printDate();
        
};

#endif