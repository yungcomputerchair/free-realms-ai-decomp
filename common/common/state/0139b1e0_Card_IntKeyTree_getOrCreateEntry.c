// addr: 0x0139b1e0
// name: Card_IntKeyTree_getOrCreateEntry
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_IntKeyTree_getOrCreateEntry(void * this, int key_, void * outEntry)
    */

bool __thiscall Card_IntKeyTree_getOrCreateEntry(void *this,int key_,void *outEntry)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_30 [4];
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvVar2 = outEntry;
                    /* Finds an integer-keyed card record; if absent, constructs default vector/tree
                       data and inserts a new record, returning it through outEntry. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684ea0;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffb4;
  ExceptionList = &local_c;
  *(undefined4 *)outEntry = 0;
  piVar4 = (int *)FUN_0138eb10(local_3c,&key_);
  local_38 = *(int *)((int)this + 0xc4);
  iVar1 = piVar4[1];
  if ((*piVar4 == 0) || (*piVar4 != (int)this + 0xc0)) {
    FUN_00d83c2d(uVar3);
  }
  if (iVar1 == local_38) {
    local_2c = (void *)0x0;
    local_28 = 0;
    local_24 = 0;
    local_4 = 0;
    FUN_01395820(&key_,local_30);
    local_4._0_1_ = 1;
    FUN_0139a920(local_3c,local_20);
    uVar5 = Card_IntKeyTree_getOrInsertRecord(&key_);
    *(undefined4 *)pvVar2 = uVar5;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0138f140();
    local_4 = 0xffffffff;
    if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  else {
    uVar5 = Card_IntKeyTree_getOrInsertRecord(&key_);
    *(undefined4 *)pvVar2 = uVar5;
  }
  ExceptionList = local_c;
  return true;
}

