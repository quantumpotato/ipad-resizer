#import "IpadResizer.h"

CGPoint ipmpoint(float x, float y) {
    float XV = 1;
    float YV = 1;
    if (IS_IPAD()) {
        XV = 2.4;
        YV = 2.13;
    }
    return CGPointMake(x*XV, y*YV);
}

CGRect ipmrect(float x, float y, float w, float h) {
    float XV = 1;
    float YV = 1;
    if (IS_IPAD()) {
        XV = 2.4;
        YV = 2.13;
    }

    return CGRectMake(x*XV,y*YV,w*XV,h*YV);
}