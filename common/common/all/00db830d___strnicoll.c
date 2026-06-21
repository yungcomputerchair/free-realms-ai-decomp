// addr: 0x00db830d
// name: __strnicoll
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int __strnicoll(char * leftString, char * rightString, uint maxCount_) */

int __cdecl __strnicoll(char *leftString,char *rightString,uint maxCount_)

{
  int iVar1;
  
                    /* Visual Studio locale-aware case-insensitive collation wrapper; falls back to
                       __strnicmp when no locale state is active. */
  if (DAT_01bf3680 == 0) {
    iVar1 = __strnicmp(leftString,rightString,maxCount_);
    return iVar1;
  }
  iVar1 = __strnicoll_l(leftString,rightString,maxCount_,(_locale_t)0x0);
  return iVar1;
}

