// addr: 0x012b5250
// name: PropertyTree_copyCtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTree_copyCtor(int this, int other) */

int __thiscall PropertyTree_copyCtor(void *this,int this,int other)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copy-constructs an RB-tree by allocating a fresh header, initializing it
                       empty, then copying nodes from another tree through FUN_012b2e80. The
                       sentinel byte is at node+0x15. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0166d0d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_012b1a10();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_012b2e80(this);
  ExceptionList = local_10;
  return (int)this;
}

