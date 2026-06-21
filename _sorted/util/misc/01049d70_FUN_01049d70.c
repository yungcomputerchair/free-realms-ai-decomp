// addr: 0x01049d70
// name: FUN_01049d70
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int lookup_hash64_bucket_node(int table_, uint key_) */

int __thiscall lookup_hash64_bucket_node(void *this,int table_,uint key_)

{
  int iVar1;
  
                    /* Looks up a node in a 64-bucket chained hash table using key & 0x3f and
                       returns the matching node whose field +0x28 equals the key. */
  iVar1 = *(int *)((int)this + (table_ & 0x3fU) * 4 + 0x18);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x28) == table_) break;
    iVar1 = *(int *)(iVar1 + 0x2c);
  }
  return iVar1;
}

