// addr: 0x00d8d76a
// name: __strnicmp
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int __strnicmp(char * leftString, char * rightString, uint maxCount_) */

int __cdecl __strnicmp(char *leftString,char *rightString,uint maxCount_)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* Visual Studio case-insensitive string compare wrapper; uses the ASCII
                       implementation in the default locale and validates null/count arguments. */
  if (DAT_01bf3680 == 0) {
    if (((leftString != (char *)0x0) && (rightString != (char *)0x0)) && (maxCount_ < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(leftString,rightString,maxCount_);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_00d8e452();
    *puVar1 = 0x16;
    FUN_00d83c09(0,0,0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(leftString,rightString,maxCount_,(_locale_t)0x0);
  }
  return iVar2;
}

