#ifdef TEST_MODE

#include <stdio.h>
#include <assert.h>
#include "../src/vectors/vector_ops.h"

int main(){
Vector v=create_vector(3);
v.data[0]=1;
v.data[1]=2;
v.data[2]=3;
assert(v.size==3);
assert(v.data[1]==2);
printf("Good to go!");
assert(v.data[2]==6);
return 0;
}
#endif