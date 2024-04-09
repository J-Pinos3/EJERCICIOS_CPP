#ifndef INT_ARRAY_h
#define INT_ARRAY_h

class IntArray{

public:
    IntArray(int n);
    IntArray(const IntArray &);
    ~IntArray();

    long int arraySize() const;

    int get(int index);
    void set(int index, int value);

    void operator=(const IntArray &); 
    void operator=(int i);

    //concatenate arrays
    IntArray operator+(const IntArray &);
    int operator[](int index) const;
    int& operator[](int index);
    
private:
    long int size;
    int *data;

    bool safetyCheck(int index) const;

};

#endif //INT_ARRAY_h