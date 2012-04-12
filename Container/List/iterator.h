// File: iterator.h
// By: Ryan Kim
// For Linked lists

#ifndef ITERATOR_H
#define ITERATOR_H

#include <stdlib.h>
#include "common.h"
#include "entry.h"
#include "listnode.h"
#include "container.h"

class ContainerIterator
{
public:
        ContainerIterator();

        ListNode operator*() const;

        compare iterators
        bool operator==(const ContainerIterator& it) const;
        bool operator!=(const ContainerIterator& it) const;
        
        ContainerIterator operator++();
        ContainerIterator operator++(int);
        
        
private:
        ListNode *next;

        friend ContainerIterator Container :: Start() const;
        friend ContainerIterator Container :: End() const;

};

#endif
