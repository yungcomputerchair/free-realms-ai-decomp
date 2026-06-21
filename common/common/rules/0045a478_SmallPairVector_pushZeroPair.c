// addr: 0x0045a478
// name: SmallPairVector_pushZeroPair
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SmallPairVector_pushZeroPair(void * container) */

bool __fastcall SmallPairVector_pushZeroPair(void *container)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint unaff_ESI;
  
                    /* After a capacity/growth check, appends an eight-byte zero pair to the
                       vector-like buffer stored through offset 0x98 and increments its count. */
  bVar3 = unknown_allocator_hasAvailableSpace
                    (*(void **)((int)container + 0x98),&DAT_00000004,6,3,unaff_ESI);
  if (!bVar3) {
    return false;
  }
  puVar2 = (undefined4 *)
           (*(int *)(*(int *)((int)container + 0x98) + 0x1c) +
           *(int *)(*(int *)((int)container + 0x98) + 0x24) * 8);
  *puVar2 = 0;
  puVar2[1] = 0;
  piVar1 = (int *)(*(int *)((int)container + 0x98) + 0x24);
  *piVar1 = *piVar1 + 1;
  return true;
}

