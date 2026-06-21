// addr: 0x014ef8c0
// name: AccountCommand_AddAchievement_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandAddAchievement.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_AddAchievement_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_AddAchievement_cloneInto(void *this,void *target)

{
  void *target_00;
  undefined4 uVar1;
  
                    /* Casts the target to AccountCommand_AddAchievement, clones base state, deletes
                       any existing achievement object on the target, and virtual-clones the source
                       achievement pointer. RTTI provides the class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_AddAchievement::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\account_command\\AccountCommandAddAchievement.cpp"
                 ,0x46);
  }
  AccountCommand_cloneInto(this,target_00);
  if (*(undefined4 **)((int)target_00 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)target_00 + 8))(1);
    *(undefined4 *)((int)target_00 + 8) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x38))();
    *(undefined4 *)((int)target_00 + 8) = uVar1;
  }
  return;
}

