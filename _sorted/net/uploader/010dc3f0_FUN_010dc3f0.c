// addr: 0x010dc3f0
// name: FUN_010dc3f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_010dc3f0(void * list, int entryOffset_) */

void __thiscall FUN_010dc3f0(void *this,void *list,int entryOffset_)

{
  int iVar1;
  int iVar2;
  
                    /* Unlinks an entry from an intrusive doubly linked list stored in an
                       array/buffer and decrements the list count. Class identity is unknown. */
  iVar1 = *(int *)((int)this + 0xc);
  if (*(int *)(iVar1 + (int)list) == 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar1 + 4 + (int)list);
  }
  else {
    *(undefined4 *)(*(int *)(iVar1 + (int)list) + 4 + iVar1) =
         *(undefined4 *)(iVar1 + 4 + (int)list);
  }
  iVar2 = *(int *)(iVar1 + 4 + (int)list);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(iVar1 + (int)list);
  }
  else {
    *(undefined4 *)(iVar2 + *(int *)((int)this + 0xc)) = *(undefined4 *)(iVar1 + (int)list);
  }
  *(undefined4 *)(iVar1 + 4 + (int)list) = 0;
  *(undefined4 *)(iVar1 + (int)list) = 0;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  return;
}

