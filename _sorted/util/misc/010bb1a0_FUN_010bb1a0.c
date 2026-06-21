// addr: 0x010bb1a0
// name: FUN_010bb1a0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint * lookup_8_hash_canonical_node(int table_, uint key_) */

uint * lookup_8_hash_canonical_node(int table_,uint key_)

{
  uint *puVar1;
  uint *puVar2;
  
                    /* Looks up a key in an 8-bucket chained hash and resolves alias keys until a
                       node with matching primary key is found. Owner class is not evident. */
  puVar2 = *(uint **)(table_ + 0x30 + (key_ & 7) * 4);
  if (puVar2 == (uint *)0x0) {
LAB_010bb1de:
    puVar2 = (uint *)0x0;
  }
  else {
    while (puVar2[3] != key_) {
      puVar2 = (uint *)puVar2[2];
      if (puVar2 == (uint *)0x0) {
        return (uint *)0x0;
      }
    }
    while (*puVar2 != key_) {
      puVar1 = puVar2 + 3;
      puVar2 = (uint *)puVar2[2];
      while( true ) {
        if (puVar2 == (uint *)0x0) goto LAB_010bb1de;
        if (puVar2[3] == *puVar1) break;
        puVar2 = (uint *)puVar2[2];
      }
    }
  }
  return puVar2;
}

