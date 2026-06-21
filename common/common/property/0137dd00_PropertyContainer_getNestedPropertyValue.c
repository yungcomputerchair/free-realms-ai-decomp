// addr: 0x0137dd00
// name: PropertyContainer_getNestedPropertyValue
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PropertyContainer_getNestedPropertyValue(void * this, void * out_value,
   int property_id, int child_id) */

uint __thiscall
PropertyContainer_getNestedPropertyValue(void *this,void *out_value,int property_id,int child_id)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined4 *extraout_EAX;
  int *extraout_EAX_00;
  undefined4 uVar8;
  undefined1 local_34 [8];
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Retrieves a property value either by delegating through a remapped archetype
                       object or by finding nested property-tree entries and copying the stored
                       value to the output. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01682039;
  local_c = ExceptionList;
  piVar6 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffb0);
  ExceptionList = &local_c;
  uVar8 = *(undefined4 *)((int)this + 8);
  ArchetypeDB_getInstance();
  cVar5 = FUN_012aeb10(uVar8);
  if (cVar5 == '\x01') {
    uVar8 = *(undefined4 *)((int)this + 0xc);
    iVar7 = *(int *)((int)this + 8) + -300000;
    ArchetypeDB_getInstance();
    piVar6 = (int *)ArchetypeDB_getArchetype(iVar7,uVar8);
    if (piVar6 == (int *)0x0) {
      local_28 = (void *)0x0;
      local_24 = 0;
      local_20 = 0;
      local_4 = 1;
      FUN_005f15f0(local_2c);
      local_4 = local_4 & 0xffffff00;
      if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
    }
    else {
      (**(code **)(*piVar6 + 0xdc))(out_value,property_id,child_id);
    }
  }
  else {
    PropertyTree_lowerBoundSmallNode((void *)((int)this + 0x28),local_34,&property_id);
    pvVar1 = (void *)*extraout_EAX;
    iVar7 = extraout_EAX[1];
    iVar2 = *(int *)((int)this + 0x2c);
    if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)((int)this + 0x28))) {
      FUN_00d83c2d();
    }
    if (iVar7 != iVar2) {
      if (pvVar1 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar7 == *(int *)((int)pvVar1 + 4)) {
        FUN_00d83c2d();
      }
      PropertyTree21_lowerBound((void *)(iVar7 + 0x10),local_2c,&child_id,piVar6);
      iVar2 = *extraout_EAX_00;
      iVar3 = extraout_EAX_00[1];
      if (iVar7 == *(int *)((int)pvVar1 + 4)) {
        FUN_00d83c2d();
      }
      iVar4 = *(int *)(iVar7 + 0x14);
      if ((iVar2 == 0) || (iVar2 != iVar7 + 0x10)) {
        FUN_00d83c2d();
      }
      if (iVar3 != iVar4) {
        if (iVar2 == 0) {
          FUN_00d83c2d();
        }
        if (iVar3 == *(int *)(iVar2 + 4)) {
          FUN_00d83c2d();
        }
        FUN_005f15f0(iVar3 + 0x10);
        ExceptionList = local_c;
        return (uint)out_value;
      }
    }
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 2;
    FUN_005f15f0(local_1c);
    local_4 = local_4 & 0xffffff00;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return (uint)out_value;
}

