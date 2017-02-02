/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

#include <MI.h>
#include <iconv.h>
#include "BufferManipulation.h"

static MI_Boolean ConvertString(Batch *batch,
                         char *fromFormat,
                         char *toFormat,
                         const char *from,
                         size_t fromBuffLen,
                         char **to,
                         size_t toBuffLen)
{
    char *toBufferCurrent;
    char *fromBuffer = (char*)from;
    size_t fromBytesLeft = fromBuffLen;
    size_t toBytesLeft = toBuffLen;
    size_t iconv_return;
    iconv_t iconvData;
    MI_Boolean returnValue = MI_FALSE;

    iconvData = iconv_open(toFormat, fromFormat);
    if (iconvData == (iconv_t)-1)
    {
        printf("Failed to create iconv, %d\n", errno);
        goto cleanup;
    }

    *to = Batch_Get(batch, toBytesLeft);
    if (*to == NULL)
        goto cleanup;
    toBufferCurrent = *to;

    iconv_return = iconv(iconvData, &fromBuffer, &fromBytesLeft, &toBufferCurrent, &toBytesLeft);
    if (iconv_return == (size_t)-1)
    {
        printf("Failed to convert string with iconv, %d\n", errno);
        goto cleanup;
    }

    returnValue = MI_TRUE;

cleanup:
    if (iconvData != (iconv_t)-1)
    {
        iconv_close(iconvData);
    }

    return returnValue;
}

MI_Boolean Utf8ToUtf16Le(Batch *batch, const char *from, MI_Char16 **to)
{
    size_t fromBuffLen = strlen(from)+1;
    return ConvertString(batch, "UTF-8", "UTF-16LE", from, fromBuffLen, (char**) to, fromBuffLen*2);
}

size_t Utf16LeStrLenBytes(const MI_Char16* str)
{
    size_t len = 0;

    while (str[len] != 0 )
    {
        len++;
    }

    return (len+1)*2; /* Return null terminator length as well */
}
MI_Boolean Utf16LeToUtf8(Batch *batch, const MI_Char16 *from, char **to)
{
    size_t fromBuffLen = Utf16LeStrLenBytes(from);
    return ConvertString(batch, "UTF-16LE", "UTF-8", (char*) from, fromBuffLen, to, fromBuffLen/2);
}

