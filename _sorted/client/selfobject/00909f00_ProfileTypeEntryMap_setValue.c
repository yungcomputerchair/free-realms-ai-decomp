// addr: 0x00909f00
// name: ProfileTypeEntryMap_setValue
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProfileTypeEntryMap_setValue(void * this, uint id_, uint value_) */

void __thiscall ProfileTypeEntryMap_setValue(void *this,uint id_,uint value_)

{
  int iVar1;
  
                    /* Finds a ProfileTypeEntry keyed by id in an 8-bucket hash table and updates
                       its value, or inserts a new entry if missing. Type is inferred from nearby
                       SoeUtil::HashListMap<int,ProfileTypeEntry,8,-1> destructor. */
  iVar1 = *(int *)((int)this + (id_ & 7) * 4 + 0x3c);
  while( true ) {
    if (iVar1 == 0) {
      FUN_008fbf40(&id_,&id_,&value_);
      return;
    }
    if (*(uint *)(iVar1 + 0x10) == id_) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  *(uint *)(iVar1 + 4) = value_;
  return;
}

