/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXT_ICONV_H__
#define __EXT_ICONV_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant f_iconv_mime_encode(CStrRef field_name, CStrRef field_value, CVarRef preferences = null_variant);
Variant f_iconv_mime_decode(CStrRef encoded_string, int mode = 0, CStrRef charset = null_string);
Variant f_iconv_mime_decode_headers(CStrRef encoded_headers, int mode = 0, CStrRef charset = null_string);
Variant f_iconv_get_encoding(CStrRef type = "all");
bool f_iconv_set_encoding(CStrRef type, CStrRef charset);
Variant f_iconv(CStrRef in_charset, CStrRef out_charset, CStrRef str);
Variant f_iconv_strlen(CStrRef str, CStrRef charset = null_string);
Variant f_iconv_strpos(CStrRef haystack, CStrRef needle, int offset = 0, CStrRef charset = null_string);
Variant f_iconv_strrpos(CStrRef haystack, CStrRef needle, CStrRef charset = null_string);
Variant f_iconv_substr(CStrRef str, int offset, int length = INT_MAX, CStrRef charset = null_string);
String f_ob_iconv_handler(CStrRef contents, int status);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_ICONV_H__
