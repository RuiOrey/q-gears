/*
-----------------------------------------------------------------------------
The MIT License (MIT)

Copyright (c) 2013-08-17 Tobias Peters <tobias.peters@kreativeffekt.at>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
-----------------------------------------------------------------------------
*/
#include "common/QGearsStringUtil.h"

namespace QGears
{
    //---------------------------------------------------------------------
    void
    StringUtil::splitPath(  const String &qualifiedName, String &outPath )
    {
        String base, ext;
        splitFullFilename( qualifiedName, base, ext, outPath );
    }

    //---------------------------------------------------------------------
    void
    StringUtil::splitBase(  const String &qualifiedName, String &outBasename )
    {
        String path, ext;
        splitFullFilename( qualifiedName, outBasename, ext, path );
    }

    //---------------------------------------------------------------------
    void
    StringUtil::splitFull(  const String &qualifiedName, String &outBasename )
    {
        String ext;
        splitBaseFilename( qualifiedName, outBasename, ext );
    }

    //---------------------------------------------------------------------
}
