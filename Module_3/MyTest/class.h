#ifndef CLASS_H
#define CLASS_H

class Cup{
    int ounces;

    public:
        // Constructor with no entries:
        Cup(void);
        Cup(int oz);
        ~Cup();
        int remaining_oz(){return ounces;};
        void fill_cup(int x);
};

#endif 