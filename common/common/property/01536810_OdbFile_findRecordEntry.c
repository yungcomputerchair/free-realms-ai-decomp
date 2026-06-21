// addr: 0x01536810
// name: OdbFile_findRecordEntry
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool OdbFile_findRecordEntry(void * this, uint key, uint * recordOffset, uint
   * recordSize) */

bool __thiscall OdbFile_findRecordEntry(void *this,uint key,uint *recordOffset,uint *recordSize)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up an ODB record entry by key and, if found, returns two fields from
                       the tree node through output parameters. It returns false and zeros the
                       outputs when the lower-bound iterator reaches the end node. */
  OdbFile_RecordTree_lowerBound((void *)((int)this + 0x28),local_8,&key,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)((int)this + 0x2c);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)((int)this + 0x28))) {
    FUN_00d83c2d();
  }
  if (iVar2 == iVar3) {
    *recordOffset = 0;
    *recordSize = 0;
    return false;
  }
  if (pvVar1 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (iVar2 == *(int *)((int)pvVar1 + 4)) {
    FUN_00d83c2d();
  }
  *recordSize = *(uint *)(iVar2 + 0x10);
  if (iVar2 == *(int *)((int)pvVar1 + 4)) {
    FUN_00d83c2d();
  }
  *recordOffset = *(uint *)(iVar2 + 0x14);
  return true;
}

