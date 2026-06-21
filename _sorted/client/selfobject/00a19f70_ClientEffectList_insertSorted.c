// addr: 0x00a19f70
// name: ClientEffectList_insertSorted
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientEffectList_insertSorted(void * this, void * entry) */

void __thiscall ClientEffectList_insertSorted(void *this,void *entry)

{
  int iVar1;
  
                    /* Finds the sorted insertion point for an entry using a two-dword key at
                       offsets +0x20/+0x24 and delegates to the list insertion helper. Called by
                       SelfObject_ParseFromBlob for effect-like records. */
  iVar1 = *(int *)((int)this + 0x34f9c);
  if (iVar1 == 0) {
    FUN_00a19b00(0,entry);
    return;
  }
  while (*(int *)((int)entry + 0x24) <= *(int *)(iVar1 + 0x24)) {
    if (((*(int *)(iVar1 + 0x24) <= *(int *)((int)entry + 0x24)) &&
        (*(uint *)(iVar1 + 0x20) <= *(uint *)((int)entry + 0x20))) ||
       (iVar1 = *(int *)(iVar1 + 0x30), iVar1 == 0)) break;
  }
  FUN_00a19b00(iVar1,entry);
  return;
}

