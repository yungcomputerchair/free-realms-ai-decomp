// addr: 0x0132bf20
// name: FUN_0132bf20
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_0132bf20(void * this) */

bool __cdecl FUN_0132bf20(void *this)

{
  char cVar1;
  
                    /* Returns true only if the flag getter at +0x365 is true and a secondary
                       predicate also returns true. The owning class and flag meanings are unknown.
                        */
  cVar1 = FUN_01348ec0();
  if (cVar1 != '\0') {
    cVar1 = FUN_013488c0();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

