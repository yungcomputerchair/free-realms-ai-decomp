// addr: 0x012bd450
// name: PropertyTypeId_setOrDefault
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTypeId_setOrDefault(int * this, int type_id) */

void __thiscall PropertyTypeId_setOrDefault(void *this,int type_id)

{
                    /* Stores a type id in the first field, using default 0x9f3 when passed -1, then
                       calls FUN_012bcf20 to complete initialization. It is used by
                       CommandSubsystem_initializeDefaultTypeIds and another command setup path. */
  if (type_id == -1) {
    *(undefined4 *)this = 0x9f3;
    ActionDB_loadIndex(this,0x9f3);
    return;
  }
  *(int *)this = type_id;
  ActionDB_loadIndex(this,type_id);
  return;
}

