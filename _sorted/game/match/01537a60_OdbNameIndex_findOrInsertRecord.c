// addr: 0x01537a60
// name: OdbNameIndex_findOrInsertRecord
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int OdbNameIndex_findOrInsertRecord(void * this, void * record) */

int __thiscall OdbNameIndex_findOrInsertRecord(void *this,void *record)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = record;
                    /* Looks up a record by name in an ODB name index, inserts a new index entry
                       when absent, and returns a pointer to the stored record payload at node+0x28.
                       Caller names OdbLookup_load and OdbNameIndex_insertRecordId provide
                       class/function evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bc158;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  iVar3 = FUN_01536780(record);
  if (this == (void *)0x0) {
    FUN_00d83c2d(uVar2);
  }
  if (iVar3 != *(int *)((int)this + 4)) {
    if (*(uint *)(iVar3 + 0x24) < 0x10) {
      iVar4 = iVar3 + 0x10;
    }
    else {
      iVar4 = *(int *)(iVar3 + 0x10);
    }
    iVar4 = FUN_00f942a0(0,*(undefined4 *)((int)pvVar1 + 0x14),iVar4,*(undefined4 *)(iVar3 + 0x20));
    if (-1 < iVar4) goto LAB_01537b0a;
  }
  record = (void *)0x0;
  uVar5 = FUN_01536a00(pvVar1,&record);
  local_4 = 0;
  puVar6 = (undefined4 *)FUN_01537860(local_34,this,iVar3,uVar5);
  this = (void *)*puVar6;
  iVar3 = puVar6[1];
  local_4 = 0xffffffff;
  FUN_01513a90();
LAB_01537b0a:
  if (this == (void *)0x0) {
    FUN_00d83c2d(uVar2);
  }
  if (iVar3 == *(int *)((int)this + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_c;
  return iVar3 + 0x28;
}

