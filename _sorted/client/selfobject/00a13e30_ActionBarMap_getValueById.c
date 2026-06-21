// addr: 0x00a13e30
// name: ActionBarMap_getValueById
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ActionBarMap_getValueById(void * this, uint id_) */

uint __thiscall ActionBarMap_getValueById(void *this,uint id_)

{
  int iVar1;
  
                    /* Looks up an entry by id in an 8-bucket hash area at this+0x4d0 and returns
                       the value at node+4, or zero if not found. Called by an action-bar-adjacent
                       helper. */
  iVar1 = *(int *)((int)this + (id_ & 7) * 4 + 0x4d0);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(iVar1 + 0x10) == id_) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return *(uint *)(iVar1 + 4);
}

