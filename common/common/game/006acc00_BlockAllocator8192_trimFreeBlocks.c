// addr: 0x006acc00
// name: BlockAllocator8192_trimFreeBlocks
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BlockAllocator8192_trimFreeBlocks(void * this) */

void __fastcall BlockAllocator8192_trimFreeBlocks(void *this)

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
  
                    /* Trims/free-lists 0x2000-sized allocator blocks based on a live threshold from
                       counters and a tracking tree, freeing blocks while the next block remains
                       below threshold. */
  uVar3 = *(int *)((int)this + 0x20) - *(int *)((int)this + 0x18);
  uVar3 = -(uint)(uVar3 != 0) & uVar3;
  RbTreeIterator_ctorFromNode_006a(**(undefined4 **)((int)this + 0x28),(int)this + 0x24);
  local_c = local_14;
  local_8 = local_10;
  RbTreeIterator_ctorFromNode_006a(*(undefined4 *)((int)this + 0x28),(int)this + 0x24);
  bVar2 = RbTreeIterator_equalsChecked(&local_c,&local_14);
  if (!bVar2) {
    piVar4 = (int *)RbTreeIterator_getValue_006a();
    if (*piVar4 < (int)uVar3) {
      puVar5 = (uint *)RbTreeIterator_getValue_006a();
      uVar3 = *puVar5;
    }
  }
  while ((((*(uint *)(*(int *)((int)this + 0xc) + 0x2000) < uVar3 &&
           (_Memory = *(void **)((int)this + 0xc), _Memory != *(void **)((int)this + 0x10))) &&
          (iVar1 = *(int *)((int)_Memory + 0x2008), iVar1 != 0)) &&
         (*(uint *)(iVar1 + 0x2000) <= uVar3))) {
    *(int *)((int)this + 0xc) = iVar1;
    if (_Memory != (void *)0x0) {
      FUN_006aab4f();
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}

