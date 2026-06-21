// addr: 0x010d4490
// name: FUN_010d4490
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void insert_node_into_4_hash(int table_, uint key_, int node_) */

void __thiscall insert_node_into_4_hash(void *this,int table_,uint key_,int node_)

{
                    /* Inserts a node into a 4-bucket chained hash and tail-linked list, storing key
                       at node+0x20 and incrementing count. */
  *(undefined4 *)(key_ + 0x24) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) == 0) {
    *(uint *)((int)this + 4) = key_;
  }
  else {
    *(uint *)(*(int *)((int)this + 8) + 0x28) = key_;
  }
  *(uint *)((int)this + 8) = key_;
  *(int *)(key_ + 0x20) = table_;
  *(undefined4 *)(key_ + 0x1c) = *(undefined4 *)((int)this + (table_ & 3U) * 4 + 0x10);
  *(uint *)((int)this + (table_ & 3U) * 4 + 0x10) = key_;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}

