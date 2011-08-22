//
//  IpadResizer.h
//  MedMyst
//
//  Created by Anthony Broussard on 7/26/11.
//  Copyright 2011 ChaiONE. All rights reserved.
//

#import <Foundation/Foundation.h>

//ipad make point
CGPoint ipmpoint(float x, float y);
//ipad make rect
CGRect  ipmrect(float x, float y, float w, float h);

#ifdef UI_USER_INTERFACE_IDIOM
    #define IS_IPAD() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#else
    #define IS_IPAD() (false)
#endif