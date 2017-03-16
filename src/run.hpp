//
//  run.hpp
//  lsm-tree
//
//  Created by Aron Szanto on 3/2/17.
//  Copyright © 2017 Aron Szanto. All rights reserved.
//

#ifndef RUN_H
#define RUN_H
#include <stdio.h>
#include <cstdint>


    
    template <class K, class V>
    class Run {
        
    public:
        virtual void insert_key(const K key, const V value) = 0;
        virtual void delete_key(const K key) = 0;
        virtual V lookup(K key) = 0;
        virtual unsigned long long num_elements() = 0;
        virtual void set_size(const size_t size) = 0;
    };
    
    


#endif /* run_h */

