/*
 *  Copyright 2010-2015 Fabric Software Inc. All rights reserved.
 */

#ifndef _FTL_MatchPrefixChar_h
#define _FTL_MatchPrefixChar_h

#include <FTL/Config.h>
#include <FTL/StrRef.h>

FTL_NAMESPACE_BEGIN

template<typename MatchChar>
struct MatchPrefixChar
{
  MatchPrefixChar() {}
  bool operator()( StrRef::IT &it, StrRef::IT itEnd ) const
  {
    if ( it != itEnd && _matchChar( *it ) )
    {
      ++it;
      return true;
    }
    else return false;
  }
private:
  MatchChar _matchChar;
};

FTL_NAMESPACE_END

#endif //_FTL_MatchPrefixChar_h
