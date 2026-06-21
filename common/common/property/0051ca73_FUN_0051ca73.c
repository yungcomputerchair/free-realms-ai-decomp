// addr: 0x0051ca73
// name: FUN_0051ca73
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTree_insertValueMaybeRebalance(void * tree, void * value) */

void __thiscall StdRbTree_insertValueMaybeRebalance(void *this,void *tree,void *value)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
                    /* Inserts a value into a red-black tree, either allocating a new node or
                       rebalancing/placing through the iterator helper. */
  uVar1 = FUN_004ce3cf();
  uVar2 = FUN_004d4beb();
  if (uVar1 < uVar2) {
    uVar3 = FUN_005036d7(*(undefined4 *)((int)this + 8),1,tree);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  else {
    FUN_004e11cf(*(undefined4 *)((int)this + 8),this);
    FUN_00517609(&local_c,local_c,local_8,tree);
  }
  return;
}

