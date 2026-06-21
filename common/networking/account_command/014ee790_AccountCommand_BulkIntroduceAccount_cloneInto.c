// addr: 0x014ee790
// name: AccountCommand_BulkIntroduceAccount_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandBulkIntroduceAccount.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_BulkIntroduceAccount_cloneInto(void * this, void * source)
    */

void __thiscall AccountCommand_BulkIntroduceAccount_cloneInto(void *this,void *source)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint src;
  void *target;
  void *pvVar5;
  int *piVar6;
  void *pvStack_1c;
  void *local_18;
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Copies a BulkIntroduceAccount from another NetworkCommand after an RTTI cast,
                       duplicating vector and owned property-set entries. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b184b;
  local_c = ExceptionList;
  src = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  local_18 = this;
  target = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &AccountCommand_BulkIntroduceAccount::RTTI_Type_Descriptor,0);
  if (target == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandBulkIntroduceAccount.cpp",
                 0x6f);
  }
  AccountCommand_cloneInto(this,target);
  FUN_005f1e5c((int)this + 8);
  StdVector28_assign((int)this + 0x18);
  StdVector28_assign((int)this + 0x28);
  piVar1 = *(int **)((int)this + 0x50);
  if (piVar1 < *(int **)((int)this + 0x4c)) {
    FUN_00d83c2d();
  }
  piVar6 = *(int **)((int)this + 0x4c);
  pvVar5 = this;
  if (*(int **)((int)this + 0x50) < piVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if ((this == (void *)0xffffffb8) || ((int)this + 0x48 != (int)pvVar5 + 0x48)) {
      FUN_00d83c2d();
    }
    if (piVar6 == piVar1) break;
    pvStack_1c = Mem_Alloc(0x10);
    uStack_4 = 0;
    if (pvStack_1c == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = PropertySet_ctor(pvStack_1c);
    }
    uStack_4 = 0xffffffff;
    pvStack_1c = pvVar5;
    if (this == (void *)0xffffffb8) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0x50) <= piVar6) {
      FUN_00d83c2d();
    }
    PropertySet_copyPropertiesFrom(*piVar6);
    uVar2 = *(uint *)((int)target + 0x4c);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)target + 0x54) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)target + 0x50) - uVar2) >> 2))) {
      uVar4 = *(uint *)((int)target + 0x50);
      if (uVar4 < uVar2) {
        FUN_00d83c2d();
      }
      FUN_014cb2c0(auStack_14,(int)target + 0x48,uVar4,&pvStack_1c);
    }
    else {
      puVar3 = *(undefined4 **)((int)target + 0x50);
      *puVar3 = pvVar5;
      *(undefined4 **)((int)target + 0x50) = puVar3 + 1;
    }
    if (*(int **)((int)this + 0x50) <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
    pvVar5 = local_18;
  }
  StdVectorDword_assignFromVector((void *)((int)target + 0x38),(int)pvVar5 + 0x38,src);
  ExceptionList = local_c;
  return;
}

