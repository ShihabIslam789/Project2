//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

//  Modified by Tiziana Ligorio for CSCI 235 Hunter college 2019

/** Header file for an array-based implementation of the ADT bag.
 @file ArrayBag.h */

#ifndef ARRAY_BAG_
#define ARRAY_BAG_

#include <vector>
#include <algorithm>
#include <iostream>



template<class T>
class ArrayBag
{

public:
    /** default constructor**/
    ArrayBag();

    /**
     @return item_count_ : the current size of the bag
    **/
    int getCurrentSize() const;

    /**
     @return true if item_count_ == 0, false otherwise
     **/
    bool isEmpty() const;

    /**
     @return true if new_entry was successfully added to items_, 
     false will not add a new_entry
     **/
    bool add(const T& new_entry);

    /**
     @return true if an_etry was successfully removed from items_, false otherwise
     **/
    bool remove(const T& an_entry);

    /**
     @post item_count_ == 0
     **/
    void clear();

    /**
     @return true if an_entry is found in items_, false otherwise
     **/
    bool contains(const T& an_entry) const;

    /**
     @return the number of times an_entry is found in items_
     **/
    int getFrequencyOf(const T& an_entry) const;

    /**
     @return a vector having the same cotntents as items_
     **/
    std::vector<T> toVector() const;

    /**
    @post cycles through all elements of the array items and print
    **/
    void display() const;
    /**
    @param a_bag an object from ArrayBag
    @post adds items as long as space is availibe 
    **/
    void operator+=(const ArrayBag<T>& a_bag);

    /**
    @param a_bag subtracted  from this bag
    @post removes data of items_ that is also in a_bag
    **/
    void operator-=(const ArrayBag<T>& a_bag);


protected:
    static const int DEFAULT_CAPACITY = 200;  //max size of items_
    T items_[DEFAULT_CAPACITY];              // Array of bag items
    int item_count_;                         // Current count of bag items


    /**
     @param target  found in items_
     @return  the index target  or -1,
     **/
    int getIndexOf(const T& target) const;


}; // end ArrayBag


#include "ArrayBag.cpp"
#endif