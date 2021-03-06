/*
 * Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009 Apple Inc. All rights reserved.
 * Copyright (C) 2006 Samuel Weinig <sam.weinig@gmail.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#import <WebKit/DOMHTMLElement.h>

#if WEBKIT_VERSION_MAX_ALLOWED >= WEBKIT_VERSION_1_3

@class DOMFileList;
@class DOMHTMLFormElement;
@class NSString;
@class NSURL;

@interface DOMHTMLInputElement : DOMHTMLElement
@property(copy) NSString *accept;
@property(copy) NSString *alt;
@property BOOL autofocus AVAILABLE_IN_WEBKIT_VERSION_4_0;
@property BOOL defaultChecked;
@property BOOL checked;
@property BOOL disabled;
@property(readonly, retain) DOMHTMLFormElement *form;
@property(readonly, retain) DOMFileList *files AVAILABLE_IN_WEBKIT_VERSION_4_0;
@property BOOL indeterminate AVAILABLE_WEBKIT_VERSION_3_0_AND_LATER;
@property int maxLength;
@property BOOL multiple AVAILABLE_IN_WEBKIT_VERSION_4_0;
@property(copy) NSString *name;
@property BOOL readOnly;
@property(copy) NSString *size;
@property(copy) NSString *src;
@property(copy) NSString *type;
@property(copy) NSString *defaultValue;
@property(copy) NSString *value;
@property(readonly) BOOL willValidate AVAILABLE_IN_WEBKIT_VERSION_4_0;
@property int selectionStart AVAILABLE_WEBKIT_VERSION_3_0_AND_LATER;
@property int selectionEnd AVAILABLE_WEBKIT_VERSION_3_0_AND_LATER;
@property(copy) NSString *align;
@property(copy) NSString *useMap;
@property(copy) NSString *accessKey AVAILABLE_WEBKIT_VERSION_1_3_AND_LATER_BUT_DEPRECATED_AFTER_WEBKIT_VERSION_5_1;
@property(readonly, copy) NSString *altDisplayString AVAILABLE_WEBKIT_VERSION_3_0_AND_LATER;
@property(readonly, copy) NSURL *absoluteImageURL AVAILABLE_WEBKIT_VERSION_3_0_AND_LATER;

- (void)select;
- (void)setSelectionRange:(int)start end:(int)end AVAILABLE_WEBKIT_VERSION_3_0_AND_LATER;
- (void)click;
@end

#endif
