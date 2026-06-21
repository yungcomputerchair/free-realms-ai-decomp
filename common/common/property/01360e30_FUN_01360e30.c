// addr: 0x01360e30
// name: FUN_01360e30
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint DoublePassState_allocateLoopMarker(void * this) */

uint __fastcall DoublePassState_allocateLoopMarker(void *this)

{
  uint uVar1;
  bool *pbVar2;
  int *unaff_ESI;
  uint local_4;
  
                    /* Increments a counter at offset 0x1c8, inserts the new id into an
                       IntToBoolMap, marks it true, and returns the id. */
  *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + 1;
  uVar1 = *(uint *)((int)this + 0x1c8);
  local_4 = uVar1;
  pbVar2 = IntToBoolMap_getOrInsert((void *)((int)this + 0x1cc),&local_4,unaff_ESI);
  *pbVar2 = true;
  return uVar1;
}

