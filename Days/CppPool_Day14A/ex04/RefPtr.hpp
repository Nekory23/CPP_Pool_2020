
#ifndef REF_PTR_HPP_
#define REF_PTR_HPP_

#include <cstddef>
#include "BaseComponent.hpp"

class RefPtr
{
    public:
        RefPtr(BaseComponent *rawPtr);
        RefPtr() : RefPtr(nullptr) {}
        RefPtr(RefPtr const &other);
        RefPtr &operator=(RefPtr const &other);
        ~RefPtr();

        BaseComponent *get() const;

    private:
        BaseComponent *_rawPtr;
        int *_counter;
};

#endif // REF_PTR_HPP_
