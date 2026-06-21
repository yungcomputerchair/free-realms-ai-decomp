// addr: 0x005ea9bc
// name: StdVectorDword_equals
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StdVectorDword_equals(void * lhs, void * rhs) */

bool __cdecl StdVectorDword_equals(void *lhs,void *rhs)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Compares two dword vectors by first checking sizes and then comparing
                       iterator ranges, returning true only if both length and contents match. */
  iVar2 = StdVectorDword_size(lhs);
  iVar3 = StdVectorDword_size(rhs);
  if (iVar2 == iVar3) {
    CheckedIndexIterator_ctor(*(undefined4 *)((int)rhs + 4),rhs);
    CheckedIndexIterator_ctor(*(undefined4 *)((int)lhs + 8),lhs);
    CheckedIndexIterator_ctor(*(undefined4 *)((int)lhs + 4),lhs);
    cVar1 = FUN_005e9139(local_1c,local_18,local_14,local_10,local_c,local_8);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

