// addr: 0x010c2840
// name: FUN_010c2840
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_010c2840(void * hashList, void * entry) */

void * __thiscall FUN_010c2840(void *this,void *hashList,void *entry)

{
  uint uVar1;
  
                    /* Inserts an entry at the tail of a doubly linked list and into a 0x28-bucket
                       hash chain based on the entry key at offset 0xc. Class identity is unknown.
                        */
  *(undefined4 *)((int)hashList + 8) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)hashList + 4) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    *(void **)((int)this + 8) = hashList;
  }
  else {
    *(void **)(*(int *)((int)this + 0xc) + 4) = hashList;
  }
  *(void **)((int)this + 0xc) = hashList;
  uVar1 = *(uint *)((int)hashList + 0xc) % 0x28;
  *(undefined4 *)((int)hashList + 0x10) = *(undefined4 *)((int)this + uVar1 * 4 + 0x14);
  *(void **)((int)this + uVar1 * 4 + 0x14) = hashList;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return hashList;
}

