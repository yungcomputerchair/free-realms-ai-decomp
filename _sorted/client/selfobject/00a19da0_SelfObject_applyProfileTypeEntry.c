// addr: 0x00a19da0
// name: SelfObject_applyProfileTypeEntry
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SelfObject_applyProfileTypeEntry(void * this, void * entry) */

void __thiscall SelfObject_applyProfileTypeEntry(void *this,void *entry)

{
  uint id_;
  uint uVar1;
  
                    /* Processes an entry, notifies three owner/UI objects via virtual slot +0x3c,
                       and if the associated action-bar value is absent, updates the
                       ProfileTypeEntry map. Ties action bar lookup to profile type entries. */
  FUN_00a18990(entry);
  (**(code **)(**(int **)((int)this + 0x35638) + 0x3c))();
  (**(code **)(**(int **)((int)this + 0x3563c) + 0x3c))();
  (**(code **)(**(int **)((int)this + 0x35640) + 0x3c))();
  if (((entry != (void *)0x0) && (id_ = *(uint *)((int)entry + 0x10), 1 < (int)id_)) &&
     (uVar1 = ActionBarMap_getValueById(this,id_), uVar1 == 0)) {
    ProfileTypeEntryMap_setValue((void *)((int)this + 0x494),id_,*(uint *)entry);
  }
  return;
}

