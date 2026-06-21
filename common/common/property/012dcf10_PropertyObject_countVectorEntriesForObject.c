// addr: 0x012dcf10
// name: PropertyObject_countVectorEntriesForObject
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: int PropertyObject_countVectorEntriesForObject(void * property_object) */

int PropertyObject_countVectorEntriesForObject(void *property_object)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  void *this;
  uint uVar4;
  int iVar5;
  int in_stack_00000008;
  undefined1 auStack_3c [4];
  int *local_38 [2];
  undefined1 auStack_30 [4];
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a temporary PropertyTree21 from a property object's virtual data,
                       finds the node for the supplied object pointer, and returns the count of
                       vector entries stored in that node. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016713a8;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  if (property_object == (void *)0x0) {
LAB_012dd0d5:
    iVar5 = 0;
  }
  else {
    PropertyTree21_ctor((int)local_38);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_4 = 2;
    iVar5 = *(int *)property_object;
    ArchetypeDB_getInstance();
    uVar4 = Archetype_getField3c(this);
    (**(code **)(iVar5 + 0x54))(&local_2c,uVar4,uVar3);
    ArchetypeIndex_collectType2Matches(auStack_30,auStack_3c,&local_20,property_object);
    piVar2 = local_38[0];
    piVar1 = (int *)*local_38[0];
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x3c) {
        FUN_00d83c2d();
      }
      if (piVar1 == piVar2) {
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_2c = (void *)0x0;
        local_28 = 0;
        local_24 = 0;
        puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
        if (pvStack_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_1c);
        }
        pvStack_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        puStack_8 = (undefined1 *)0xffffffff;
        PropertyTree21_clearAndFreeHeader((int)auStack_3c);
        goto LAB_012dd0d5;
      }
      if (&stack0x00000000 == (undefined1 *)0x3c) {
        FUN_00d83c2d();
      }
      if (piVar1 == local_38[0]) {
        FUN_00d83c2d();
      }
      if (piVar1[3] == in_stack_00000008) break;
      PropertyTreeIterator21_increment((int *)&stack0xffffffbc);
    }
    if (piVar1 == local_38[0]) {
      FUN_00d83c2d();
    }
    if (piVar1[5] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = piVar1[6] - piVar1[5] >> 2;
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = (void *)0x0;
    local_28 = 0;
    local_24 = 0;
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    if (pvStack_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_1c);
    }
    pvStack_1c = (void *)0x0;
    local_18 = 0;
    local_14 = 0;
    puStack_8 = (undefined1 *)0xffffffff;
    PropertyTree21_clearAndFreeHeader((int)auStack_3c);
  }
  ExceptionList = local_c;
  return iVar5;
}

