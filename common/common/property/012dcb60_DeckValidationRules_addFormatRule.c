// addr: 0x012dcb60
// name: DeckValidationRules_addFormatRule
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012dcd8d) */
/* WARNING: Removing unreachable block (ram,0x012dcbdd) */
/* WARNING: Removing unreachable block (ram,0x012dccb1) */
/* WARNING: Removing unreachable block (ram,0x012dce63) */
/* WARNING: Removing unreachable block (ram,0x012dcda6) */
/* WARNING: Removing unreachable block (ram,0x012dcbf2) */
/* WARNING: Removing unreachable block (ram,0x012dccca) */
/* WARNING: Removing unreachable block (ram,0x012dce78) */
/* Setting prototype: void DeckValidationRules_addFormatRule(void * rules, uint ruleId) */

void __thiscall DeckValidationRules_addFormatRule(void *this,void *rules,uint ruleId)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int *extraout_EAX;
  undefined4 *extraout_EAX_00;
  undefined4 *extraout_EAX_01;
  undefined4 *extraout_EAX_02;
  undefined1 *puVar5;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c [4];
  void *local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar3 = rules;
                    /* Ensures a deck validation rule id is present across several internal rule
                       maps/vectors, inserting default vector/string storage when the key is
                       missing. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01671370;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  PropertyIntTree_lowerBound(this,&local_24,(int *)&rules);
  iVar1 = extraout_EAX[1];
  iVar2 = *(int *)((int)this + 4);
  if (this != (void *)*extraout_EAX) {
    FUN_00d83c2d(uVar4);
  }
  if (iVar2 == iVar1) {
    local_4 = 0;
    local_10 = 0;
    local_14 = (void *)0x0;
    local_18 = (void *)0x0;
    rules = (void *)0x0;
    FUN_012b2960(&local_24,local_1c,0,local_1c,0);
    puVar5 = local_1c;
    rules = pvVar3;
    PropertyIntVectorMap_findOrCreateSlot(&rules);
    UIntVector_assign(puVar5);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    local_18 = (void *)0x0;
    local_14 = (void *)0x0;
    local_10 = 0;
  }
  rules = pvVar3;
  PropertyIntTree_lowerBound((void *)((int)this + 0xc),&local_24,(int *)&rules);
  local_20 = *(int *)((int)this + 0x10);
  iVar1 = extraout_EAX_00[1];
  if ((void *)((int)this + 0xc) != (void *)*extraout_EAX_00) {
    FUN_00d83c2d(uVar4);
  }
  if (local_20 == iVar1) {
    local_4 = 1;
    local_10 = 0;
    local_14 = (void *)0x0;
    local_18 = (void *)0x0;
    local_24 = 0;
    rules = (void *)0x0;
    FUN_012b2960(&local_24,local_1c,0,local_1c,0);
    puVar5 = local_1c;
    rules = pvVar3;
    PropertyIntVectorMap_findOrCreateSlot(&rules);
    UIntVector_assign(puVar5);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    local_18 = (void *)0x0;
    local_14 = (void *)0x0;
    local_10 = 0;
  }
  rules = pvVar3;
  PropertyIntTree_lowerBound((void *)((int)this + 0x18),&local_24,(int *)&rules);
  local_20 = *(int *)((int)this + 0x1c);
  iVar1 = extraout_EAX_01[1];
  if ((void *)((int)this + 0x18) != (void *)*extraout_EAX_01) {
    FUN_00d83c2d();
  }
  if (local_20 == iVar1) {
    local_4 = 2;
    local_10 = 0;
    local_14 = (void *)0x0;
    local_18 = (void *)0x0;
    local_24 = 0;
    rules = (void *)0x0;
    FUN_012b2960(&local_24,local_1c,0,local_1c,0);
    puVar5 = local_1c;
    rules = pvVar3;
    PropertyIntVectorMap_findOrCreateSlot(&rules);
    UIntVector_assign(puVar5);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    local_18 = (void *)0x0;
    local_14 = (void *)0x0;
    local_10 = 0;
  }
  rules = pvVar3;
  PropertyIntTree_lowerBound2((void *)((int)this + 0x24),&local_24,(int *)&rules);
  iVar1 = extraout_EAX_02[1];
  iVar2 = *(int *)((int)this + 0x28);
  if ((void *)((int)this + 0x24) != (void *)*extraout_EAX_02) {
    FUN_00d83c2d();
  }
  if (iVar2 == iVar1) {
    local_4 = 3;
    local_10 = 0;
    local_14 = (void *)0x0;
    local_18 = (void *)0x0;
    rules = (void *)0x0;
    FUN_012a9f10(&local_24,local_1c,0,local_1c,0);
    puVar5 = local_1c;
    rules = pvVar3;
    PropertyVectorTree_findOrInsert(&rules);
    StdVector28_assign(puVar5);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
      StdStringRange_destroy(local_18,local_14);
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return;
}

