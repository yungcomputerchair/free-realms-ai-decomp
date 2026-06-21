// addr: 0x008bf5f0
// name: ActionBarMap_findByIdAndSelect
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionBarMap_findByIdAndSelect(void * this, uint id_) */

bool __thiscall ActionBarMap_findByIdAndSelect(void *this,uint id_)

{
  undefined4 *puVar1;
  
                    /* Looks up an action-bar entry in a 5-bucket hash table by id and, if found,
                       updates current/previous selected entry fields at +0x70/+0x74. Called by
                       SelfObject_ParseFromBlob and action-bar helpers. */
  puVar1 = *(undefined4 **)((int)this + (id_ % 5) * 4 + 0x14);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return false;
    }
    if (puVar1[0x36] == id_) break;
    puVar1 = (undefined4 *)puVar1[0x35];
  }
  if (puVar1 == (undefined4 *)0x0) {
    return false;
  }
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x70) = *puVar1;
  return true;
}

