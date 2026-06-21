// addr: 0x013a1f20
// name: PropertyContainerMap_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyContainerMap_ctor(void * this, void * allocator) */

void * __thiscall PropertyContainerMap_ctor(void *this,void *allocator)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Constructs a red-black tree map used by PropertyContainer, creating the
                       sentinel node, wiring root/left/right to it, zeroing size, and initializing
                       the comparator/allocator state. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_016857f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_013a06a0();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  STLTree_copyNodesFrom(this,allocator);
  ExceptionList = local_10;
  return this;
}

