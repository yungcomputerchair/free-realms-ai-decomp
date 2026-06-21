// addr: 0x00a16360
// name: ActionBarMap_Insert
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ActionBarMap_Insert(void * this, uint id_, void * entry) */

int __thiscall ActionBarMap_Insert(void *this,uint id_,void *entry)

{
                    /* Inserts an action bar entry into the 5-bucket ActionBarMap hash/list, storing
                       id at entry+0x39c and linking into both list order and bucket chain. Existing
                       name and caller ActionBar_GetOrCreateById support this. */
  *(undefined4 *)((int)entry + 0x3a0) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) == 0) {
    *(void **)((int)this + 4) = entry;
  }
  else {
    *(void **)(*(int *)((int)this + 8) + 0x3a4) = entry;
  }
  *(void **)((int)this + 8) = entry;
  *(uint *)((int)entry + 0x39c) = id_;
  *(undefined4 *)((int)entry + 0x398) = *(undefined4 *)((int)this + (id_ % 5) * 4 + 0x10);
  *(void **)((int)this + (id_ % 5) * 4 + 0x10) = entry;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return (int)entry;
}

