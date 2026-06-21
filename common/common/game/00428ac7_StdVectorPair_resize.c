// addr: 0x00428ac7
// name: StdVectorPair_resize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorPair_resize(void * this, uint newSize) */

void __thiscall StdVectorPair_resize(void *this,uint newSize)

{
  uint uVar1;
  int iVar2;
  undefined4 *extraout_EAX;
  void *unaff_EDI;
  undefined1 *puVar3;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Resizes a vector-like container of pair entries upward by appending default
                       values or downward by erasing a tail range. */
  uVar1 = StdVector_size(this);
  if (uVar1 < newSize) {
    FUN_00416f56(*(undefined4 *)((int)this + 8),this);
    puVar3 = &stack0x00000008;
    iVar2 = StdVector_size(this);
    StdVectorDword_insertFillRange(local_c,local_8,newSize - iVar2,puVar3);
  }
  else {
    uVar1 = StdVector_size(this);
    if (newSize < uVar1) {
      FUN_00416f56(*(undefined4 *)((int)this + 8),this);
      FUN_00416f56(*(undefined4 *)((int)this + 4),this);
      Pair_copyAfterConstructingValue(local_14,local_1c,(void *)newSize,unaff_EDI);
      FUN_0041f5e6(local_14,*extraout_EAX,extraout_EAX[1],local_c,local_8);
    }
  }
  return;
}

