// addr: 0x012b8f50
// name: PropertyTypeOwner_setTypeIdOrDefault
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTypeOwner_setTypeIdOrDefault(int this, int type_id) */

void __thiscall PropertyTypeOwner_setTypeIdOrDefault(void *this,int this,int type_id)

{
                    /* Stores a supplied type id at this+0x3c, or uses the default value 0x9f3 when
                       the caller passes -1, then calls FUN_012b8530 to finish registration/update.
                       It is invoked by CommandSubsystem_initializeDefaultTypeIds. */
  if (this == -1) {
    *(undefined4 *)((int)this + 0x3c) = 0x9f3;
    ArchetypeDB_loadIndex(this,0x9f3);
    return;
  }
  *(int *)((int)this + 0x3c) = this;
  ArchetypeDB_loadIndex(this,this);
  return;
}

