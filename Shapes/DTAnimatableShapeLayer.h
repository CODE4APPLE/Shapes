//
//  DTAnimatableShapeLayer.h
//  Shapes
//
//  Created by Denys Telezhkin on 31.08.14.
//  Copyright (c) 2014 Denys Telezhkin. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <QuartzCore/QuartzCore.h>

#if __has_feature(nullability) // Xcode 6.3+
#pragma clang assume_nonnull begin
#else
#define nullable
#define __nullable
#define null_resettable
#endif

/**
 `DTAnimatableShapeLayer` allows implicit animation of CAShapeLayer path. It uses CTTransaction animation duration and animation timing function to animate a change.
 */

@interface DTAnimatableShapeLayer : CAShapeLayer

/**
 Set of all animatable properties on CAShapeLayer. By default, contains "path" key. Add properties to the set, if you wan't them to change with animation.
 
 To animate changes, use CATransaction, or provided CATransaction+AnimateWithDuration convenience category.
 */
@property (nonatomic, strong, null_resettable) NSMutableSet * animatableKeys;

@end

#if __has_feature(nullability)
#pragma clang assume_nonnull end
#endif