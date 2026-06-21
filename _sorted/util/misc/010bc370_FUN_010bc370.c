// addr: 0x010bc370
// name: FUN_010bc370
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void insert_node_into_8_hash(int table_, uint key_, int node_) */

void __thiscall insert_node_into_8_hash(void *this,int table_,uint key_,int node_)

{
                    /* Inserts a node into an 8-bucket hash and a doubly-linked list, storing the
                       key at node+0xc and incrementing count. */
  *(undefined4 *)(key_ + 0x14) = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 4) == 0) {
    *(uint *)((int)this + 8) = key_;
  }
  else {
    *(uint *)(*(int *)((int)this + 4) + 0x10) = key_;
  }
  *(uint *)((int)this + 4) = key_;
  *(int *)(key_ + 0xc) = table_;
  *(undefined4 *)(key_ + 8) = *(undefined4 *)((int)this + (table_ & 7U) * 4 + 0x10);
  *(uint *)((int)this + (table_ & 7U) * 4 + 0x10) = key_;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}

