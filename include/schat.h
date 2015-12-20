#ifndef __SCHAT_H__
#define __SCHAT_H__

#ifdef SCHAT_DYNAMIC
# ifdef WIN32
#  ifdef SCHAT_BUILD
#   define SCHAT_EXPORT __declspec( dllexport )
#  else
#   define SCHAT_EXPORT __declspec( dllimport )
#  endif
# endif
#endif
 
#ifndef SCHAT_EXPORT
# define SCHAT_EXPORT
#endif

#endif/*__SCHAT_H__*/
