// addr: 0x010bb150
// name: FUN_010bb150
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint * lookup_1024_hash_canonical_node(int table_, uint key_) */

uint * __thiscall lookup_1024_hash_canonical_node(void *this,int table_,uint key_)

{
  uint *puVar1;
  uint *puVar2;
  
                    /* Looks up a key in a 1024-bucket chained hash and follows canonical/alias keys
                       until the node whose primary key matches is found. Owner class is not
                       evident. */
  puVar2 = *(uint **)((int)this + (table_ & 0x3ffU) * 4 + 0x18);
  if (puVar2 == (uint *)0x0) {
LAB_010bb18c:
    puVar2 = (uint *)0x0;
  }
  else {
    while (puVar2[0x15] != table_) {
      puVar2 = (uint *)puVar2[0x14];
      if (puVar2 == (uint *)0x0) {
        return (uint *)0x0;
      }
    }
    while (*puVar2 != table_) {
      puVar1 = puVar2 + 0x15;
      puVar2 = (uint *)puVar2[0x14];
      while( true ) {
        if (puVar2 == (uint *)0x0) goto LAB_010bb18c;
        if (puVar2[0x15] == *puVar1) break;
        puVar2 = (uint *)puVar2[0x14];
      }
    }
  }
  return puVar2;
}

