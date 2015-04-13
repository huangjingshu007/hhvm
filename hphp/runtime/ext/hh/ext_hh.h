/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2014 Facebook, Inc. (http://www.facebook.com)     |
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

#ifndef incl_HPHP_EXT_HH_H_
#define incl_HPHP_EXT_HH_H_

#include "hphp/runtime/ext/extension.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
bool HHVM_FUNCTION(autoload_set_paths,
                   const Variant& map,
                   const String& root);
bool HHVM_FUNCTION(could_include, const String& file);
Variant HHVM_FUNCTION(serialize_memoize_param, const Variant& param);
void HHVM_FUNCTION(set_frame_metadata, const Variant& metadata);
///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_HH_H_
