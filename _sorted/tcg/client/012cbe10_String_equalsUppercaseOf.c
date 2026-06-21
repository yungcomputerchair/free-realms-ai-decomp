// addr: 0x012cbe10
// name: String_equalsUppercaseOf
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool String_equalsUppercaseOf(void * source, void * candidate) */

bool String_equalsUppercaseOf(void *source,void *candidate)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
                    /* Compares two strings of equal length, uppercasing each character from the
                       first string before comparing it to the second. Evidence is the _toupper call
                       inside the per-character comparison loop. */
  uVar1 = *(uint *)((int)source + 0x14);
  if (uVar1 != *(uint *)((int)candidate + 0x14)) {
    return false;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    while( true ) {
      if (uVar1 < uVar3) {
        FUN_00d83c2d();
      }
      if (*(uint *)((int)source + 0x18) < 0x10) {
        iVar2 = (int)source + 4;
      }
      else {
        iVar2 = *(int *)((int)source + 4);
      }
      if (*(uint *)((int)candidate + 0x14) < uVar3) {
        FUN_00d83c2d();
      }
      if (*(uint *)((int)candidate + 0x18) < 0x10) {
        iVar4 = (int)candidate + 4;
      }
      else {
        iVar4 = *(int *)((int)candidate + 4);
      }
      iVar2 = _toupper((int)*(char *)(uVar3 + iVar2));
      if (iVar2 != *(char *)(iVar4 + uVar3)) break;
      uVar1 = *(uint *)((int)source + 0x14);
      uVar3 = uVar3 + 1;
      if (uVar1 <= uVar3) {
        return true;
      }
    }
    return false;
  }
  return true;
}

