//
//  OEXTokenTextStorage.h
//  OEXTokenField
//
//  Created by Nicolas BACHSCHMIDT on 16/03/2013.
//  Copyright (c) 2013 Octiplex. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol OEXTokenTextStorageDelegate;

/*- OEXTokenTextStorage is used internally by OEXTokenFieldCell to perform attachment cell replacement as the tokens are inserted in the editor text view.
 */
@interface OEXTokenTextStorage : NSTextStorage

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-property-type"
@property(weak) id <OEXTokenTextStorageDelegate> delegate;
#pragma clang diagnostic pop

- (id)initWithAttributedString:(NSAttributedString *)attrStr;

@end

#pragma mark -

@protocol OEXTokenTextStorageDelegate <NSObject>

@optional
- (void)tokenTextStorage:(OEXTokenTextStorage *)textStorage updateTokenAttachment:(NSTextAttachment *)attachment forRange:(NSRange)range;

@end