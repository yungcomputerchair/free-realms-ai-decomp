// addr: 0x012f29f0
// name: StringVector_findContainingString
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StringVector_findContainingString(void * stringVector, void * needle) */

int __cdecl StringVector_findContainingString(void *stringVector,void *needle)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
                    /* Searches a vector of 0x1c-byte std::string elements for the first string
                       containing needle and returns its index, or the vector size if not
                       found/needle empty. Evidence is the loop over begin/end and string find
                       helper 01231320. */
  if (*(int *)((int)needle + 0x14) != 0) {
    uVar3 = *(uint *)((int)stringVector + 4);
    if (*(uint *)((int)stringVector + 8) < uVar3) {
      FUN_00d83c2d();
    }
    while( true ) {
      uVar1 = *(uint *)((int)stringVector + 8);
      if (uVar1 < *(uint *)((int)stringVector + 4)) {
        FUN_00d83c2d();
      }
      if (uVar3 == uVar1) break;
      if (*(uint *)((int)stringVector + 8) <= uVar3) {
        FUN_00d83c2d();
      }
      if (*(uint *)((int)needle + 0x18) < 0x10) {
        iVar2 = (int)needle + 4;
      }
      else {
        iVar2 = *(int *)((int)needle + 4);
      }
      iVar2 = FUN_01231320(iVar2,0,*(undefined4 *)((int)needle + 0x14));
      if (iVar2 == 0) {
        uVar1 = *(uint *)((int)stringVector + 4);
        if (*(uint *)((int)stringVector + 8) < uVar1) {
          FUN_00d83c2d();
        }
        return (int)(uVar3 - uVar1) / 0x1c;
      }
      if (*(uint *)((int)stringVector + 8) <= uVar3) {
        FUN_00d83c2d();
      }
      uVar3 = uVar3 + 0x1c;
    }
  }
  if (*(int *)((int)stringVector + 4) == 0) {
    return 0;
  }
  return (*(int *)((int)stringVector + 8) - *(int *)((int)stringVector + 4)) / 0x1c;
}

