// addr: 0x00aa6b50
// name: HousingObjectMap_findByGuid
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * HousingObjectMap_findByGuid(void * this, uint * guidKey) */

void * __thiscall HousingObjectMap_findByGuid(void *this,uint *guidKey)

{
  void *pvVar1;
  
                    /* Looks up a keyed node in a 0x400-bucket hash table using the guid/key value
                       pointed to by the argument. Housing context is inferred from neighboring
                       BaseHousingPacket and HousingPacketFixtureUpdate callers. */
  pvVar1 = *(void **)((int)this + (*guidKey & 0x3ff) * 4 + 0x14);
  while( true ) {
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
    if (*(uint *)((int)pvVar1 + 0x24) == *guidKey) break;
    pvVar1 = *(void **)((int)pvVar1 + 0x28);
  }
  return pvVar1;
}

