// addr: 0x010c1830
// name: FUN_010c1830
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_010c1830(void * hashList, int * key) */

void * __thiscall FUN_010c1830(void *this,void *hashList,int *key)

{
  void *pvVar1;
  
                    /* Finds an entry in a 0x28-bucket hash table by key, walking the bucket chain
                       until the stored key at offset 0xc matches. Class identity is unknown. */
  pvVar1 = *(void **)((int)this + (*(uint *)hashList % 0x28) * 4 + 0x14);
  while( true ) {
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
    if (*(uint *)((int)pvVar1 + 0xc) == *(uint *)hashList) break;
    pvVar1 = *(void **)((int)pvVar1 + 0x10);
  }
  return pvVar1;
}

