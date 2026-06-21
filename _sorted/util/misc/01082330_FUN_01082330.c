// addr: 0x01082330
// name: FUN_01082330
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 contains_hash2_key(int table_, uint key_) */

undefined4 __thiscall contains_hash2_key(void *this,int table_,uint key_)

{
  int iVar1;
  
                    /* Tests whether a key exists in a 2-bucket chained hash table and returns the
                       node pointer encoded with a success byte. Owner class is not evident. */
  for (iVar1 = *(int *)((int)this + (table_ & 1U) * 4 + 0x28); iVar1 != 0;
      iVar1 = *(int *)(iVar1 + 0x10)) {
    if (*(int *)(iVar1 + 0xc) == table_) goto LAB_0108234f;
  }
  iVar1 = 0;
LAB_0108234f:
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
}

