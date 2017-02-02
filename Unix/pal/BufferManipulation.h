/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

#ifndef _BufferManipulation_h_
#define _BufferManipulation_h_
#include <MI.h>
#include <base/batch.h>


MI_Boolean Utf8ToUtf16Le(Batch *batch, const char *from, MI_Char16 **to);
MI_Boolean Utf16LeToUtf8(Batch *batch, const MI_Char16 *from, char **to);
size_t Utf16LeStrLenBytes(const MI_Char16* str);


#endif /* _BufferManipulation_h_ */
