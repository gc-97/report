#include <assert.h>

#ifdef __ASSERT_H_
#define __ASSERT_H_
#endif

#define my_assert(_Expression) (void) (((_Expression)) || (__assert(#_Expression,__FILE__,__LINE__),0))
