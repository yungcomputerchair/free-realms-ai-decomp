// addr: 0x01331de0
// name: PointerVector_clear
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_clear(void * vector) */

void __fastcall PointerVector_clear(void *vector)

{
  void *last;
  void *first;
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Clears a pointer vector by erasing the full begin/end range through 01331410
                       after range assertions. */
  last = *(void **)((int)vector + 8);
  if (last < *(void **)((int)vector + 4)) {
    FUN_00d83c2d();
  }
  first = *(void **)((int)vector + 4);
  if (*(void **)((int)vector + 8) < first) {
    FUN_00d83c2d();
  }
  PointerVector_eraseRangeAssignIterator(vector,local_8,vector,first,vector,last,unaff_EDI);
  return;
}

