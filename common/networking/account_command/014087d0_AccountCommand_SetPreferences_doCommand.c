// addr: 0x014087d0
// name: AccountCommand_SetPreferences_doCommand
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandSetPreferences.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AccountCommandSetPreferences_doCommand(void * this) */

int __fastcall AccountCommand_SetPreferences_doCommand(void *this)

{
  void *map;
  void *pvVar1;
  undefined4 extraout_EAX;
  undefined4 uVar2;
  int key_;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes SetPreferences by validating mPropertySet, looking up the target
                       account, applying the property set, and queuing an account service event. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016919db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (void *)0x0;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mPropertySet",
                 "..\\common\\networking\\account_command\\AccountCommandSetPreferences.cpp",0x28,
                 DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  }
  LobbyAccount_ensureSingleton();
  pvVar1 = LobbyServiceAccountMap_findValue(map,key_);
  if (pvVar1 == (void *)0x0) {
    WAErrorLog_write("AccountCommand_SetPreferences: Failed to find account for %d");
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  Account_applyPreferencesPropertySet(pvVar1,*(void **)((int)this + 8));
  pvVar1 = Mem_Alloc(0x14);
  uStack_4 = 0;
  if (pvVar1 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x12);
  DisplayActionBuilder_addIntArg(this_00,*(int *)((int)this + 4));
  FUN_012fa0c0(*(undefined4 *)((int)this + 8));
  DisplayActionManager_ensureSingleton();
  uVar2 = FUN_012d3550(this_00);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

