/* ISC license. */

#include <errno.h>
#include <skalibs/posixplz.h>
#include <skalibs/djbunix.h>
#include <skalibs/strerr2.h>

void xexecvep (char const *file, char const *const *argv, char const *const *envp, char const *path)
{
  execvep(file, argv, envp, path) ;
  strerr_dieexec(errno == ENOENT ? 127 : 126, file) ;
}
