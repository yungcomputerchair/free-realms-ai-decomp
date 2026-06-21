// addr: 0x00f94a20
// name: StdString_lessByPrefixCompare
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StdString_lessByPrefixCompare(void * lhs, void * rhsString) */

bool StdString_lessByPrefixCompare(void *lhs,void *rhsString)

{
  int iVar1;
  
                    /* Compares a left string buffer/length against a std::string-like rhs and
                       returns true when the comparison result is negative. It handles small-string
                       optimization by choosing rhs+4 or the heap pointer based on capacity at
                       +0x18. */
  if (*(uint *)((int)rhsString + 0x18) < 0x10) {
    iVar1 = (int)rhsString + 4;
  }
  else {
    iVar1 = *(int *)((int)rhsString + 4);
  }
  iVar1 = FUN_00f942a0(0,*(undefined4 *)((int)lhs + 0x14),iVar1,
                       *(undefined4 *)((int)rhsString + 0x14));
  return iVar1 < 0;
}

