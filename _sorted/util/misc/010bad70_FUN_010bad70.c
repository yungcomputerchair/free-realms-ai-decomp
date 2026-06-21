// addr: 0x010bad70
// name: FUN_010bad70
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void remove_node_from_1024_hash(int table_, int node_) */

void __thiscall remove_node_from_1024_hash(void *this,int table_,int node_)

{
  int iVar1;
  int *piVar2;
  
                    /* Removes a node from a 1024-bucket chained hash table keyed by node+0x54 and
                       clears its hash/link fields. */
  piVar2 = (int *)((int)this + (*(uint *)(table_ + 0x54) & 0x3ff) * 4 + 0x10);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    while (iVar1 != table_) {
      piVar2 = (int *)(iVar1 + 0x50);
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        return;
      }
    }
    *piVar2 = *(int *)(iVar1 + 0x50);
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
  }
  return;
}

