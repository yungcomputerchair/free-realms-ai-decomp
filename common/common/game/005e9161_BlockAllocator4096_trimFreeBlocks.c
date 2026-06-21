// addr: 0x005e9161
// name: BlockAllocator4096_trimFreeBlocks
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BlockAllocator4096_trimFreeBlocks(void * this) */

void __fastcall BlockAllocator4096_trimFreeBlocks(void *this)

{
  void *_Memory;
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Computes a live-block threshold from allocation counters and a tracking tree,
                       then frees the current 0x1000-sized block when the next block is below that
                       threshold. */
  uVar3 = *(int *)((int)this + 0x20) - *(int *)((int)this + 0x18);
  uVar3 = -(uint)(uVar3 != 0) & uVar3;
  RbTreeIterator_ctorFromNode(**(undefined4 **)((int)this + 0x28),(int)this + 0x24);
  local_c = local_14;
  local_8 = local_10;
  RbTreeIterator_ctorFromNode(*(undefined4 *)((int)this + 0x28),(int)this + 0x24);
  bVar2 = CheckedTreeIterator_equals_nodeFlag21C(&local_c,&local_14);
  if (!bVar2) {
    piVar4 = (int *)CheckedTreeIterator_derefValue_nodeFlag21B();
    if (*piVar4 < (int)uVar3) {
      puVar5 = (uint *)CheckedTreeIterator_derefValue_nodeFlag21B();
      uVar3 = *puVar5;
    }
  }
  if ((((*(uint *)(*(int *)((int)this + 0xc) + 0x1000) < uVar3) &&
       (_Memory = *(void **)((int)this + 0xc), _Memory != *(void **)((int)this + 0x10))) &&
      (iVar1 = *(int *)((int)_Memory + 0x1008), iVar1 != 0)) && (*(uint *)(iVar1 + 0x1000) <= uVar3)
     ) {
    *(int *)((int)this + 0xc) = iVar1;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

