// addr: 0x01536b00
// name: OdbFile_findRecordIdInTree
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool OdbFile_findRecordIdInTree(void * this, uint key_, uint * outRecordId) */

bool __thiscall OdbFile_findRecordIdInTree(void *this,uint key_,uint *outRecordId)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up an ODB record by key in an internal tree and writes the record id at
                       node offset 0x28 when found. */
  stringTree_findMatchingRecord((void *)((int)this + 0x1c),(int)local_8,(int *)key_,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)((int)this + 0x20);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)((int)this + 0x1c))) {
    FUN_00d83c2d();
  }
  if (iVar2 == iVar3) {
    *outRecordId = 0;
    return false;
  }
  if (pvVar1 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (iVar2 == *(int *)((int)pvVar1 + 4)) {
    FUN_00d83c2d();
  }
  *outRecordId = *(uint *)(iVar2 + 0x28);
  return true;
}

