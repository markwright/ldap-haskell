/*
Haskell LDAP Interface
Copyright (C) 2005 John Goerzen <jgoerzen@complete.org>

This code is under a 3-clause BSD license; see COPYING for details.
*/

#include <ldap.h>

void freeLDAPobj(LDAP *ld) {
    ldap_unbind(ld);
}

