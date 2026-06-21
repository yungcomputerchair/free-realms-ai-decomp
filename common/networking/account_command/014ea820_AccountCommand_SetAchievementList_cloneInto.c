// addr: 0x014ea820
// name: AccountCommand_SetAchievementList_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandSetAchievementList.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetAchievementList_cloneInto(void * this, void * target)
    */

void __thiscall AccountCommand_SetAchievementList_cloneInto(void *this,void *target)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *target_00;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_c;
  undefined1 auStack_8 [8];
  
                    /* Casts the target to AccountCommand_SetAchievementList, clears/prepares the
                       target achievement vector, then iterates source achievement pointers and
                       virtual-clones each element into the target vector. RTTI identifies the
                       class. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_SetAchievementList::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandSetAchievementList.cpp",
                 0x46);
  }
  AccountCommand_cloneInto(this,target_00);
  AccountCommand_SetAchievementList_clearAchievements((int)target_00);
  if (*(int *)((int)this + 0xc) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 2;
  }
  FUN_013a8080(iVar5);
  puVar1 = *(undefined4 **)((int)this + 0x10);
  if (puVar1 < *(undefined4 **)((int)this + 0xc)) {
    FUN_00d83c2d();
  }
  puVar6 = *(undefined4 **)((int)this + 0xc);
  if (*(undefined4 **)((int)this + 0x10) < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (puVar6 == puVar1) break;
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x10) <= puVar6) {
      FUN_00d83c2d();
    }
    uStack_c = (**(code **)(*(int *)*puVar6 + 0x38))();
    uVar2 = *(uint *)((int)target_00 + 0xc);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)target_00 + 0x14) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)target_00 + 0x10) - uVar2) >> 2))) {
      uVar4 = *(uint *)((int)target_00 + 0x10);
      if (uVar4 < uVar2) {
        FUN_00d83c2d();
      }
      FUN_013a8180(auStack_8,(int)target_00 + 8,uVar4,&uStack_c);
    }
    else {
      puVar3 = *(undefined4 **)((int)target_00 + 0x10);
      *puVar3 = uStack_c;
      *(undefined4 **)((int)target_00 + 0x10) = puVar3 + 1;
    }
    if (*(undefined4 **)((int)this + 0x10) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 1;
  }
  return;
}

