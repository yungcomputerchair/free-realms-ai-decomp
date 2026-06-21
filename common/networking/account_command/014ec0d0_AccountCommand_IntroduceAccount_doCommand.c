// addr: 0x014ec0d0
// name: AccountCommand_IntroduceAccount_doCommand
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandIntroduceAccount.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AccountCommandIntroduceAccount_doCommand(void * this) */

int __fastcall AccountCommand_IntroduceAccount_doCommand(void *this)

{
  uint uVar1;
  int extraout_EAX;
  void *pvVar2;
  undefined4 uVar3;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes IntroduceAccount for a single account by validating account service,
                       account, and property set, updating lobby strings/properties, and queuing a
                       notification. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b11fb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x44) == 0) {
    FUN_012f5a60("mPropertySet",
                 "..\\common\\networking\\account_command\\AccountCommandIntroduceAccount.cpp",0x48,
                 uVar1);
  }
  LobbyAccount_ensureSingleton();
  if (extraout_EAX == 0) {
    FUN_012f5a60("accountService",
                 "..\\common\\networking\\account_command\\AccountCommandIntroduceAccount.cpp",0x4a,
                 uVar1);
  }
  pvVar2 = (void *)FUN_012df9f0(*(undefined4 *)((int)this + 4));
  if (pvVar2 == (void *)0x0) {
    FUN_012f5a60("account",
                 "..\\common\\networking\\account_command\\AccountCommandIntroduceAccount.cpp",0x4d,
                 uVar1);
  }
  PropertySet_logProperties(*(void **)((int)this + 0x44));
  FUN_013a7570((void *)((int)this + 8));
  Account_setLobbyAttributeString(pvVar2,(void *)((int)this + 0x24));
  AccountInfo_setProperty3eValue(pvVar2,*(int *)((int)this + 0x40));
  Account_setFullPropertySet(pvVar2,*(void **)((int)this + 0x44));
  pvVar2 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  uStack_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x10);
  DisplayActionBuilder_addIntArg(this_00,*(int *)((int)this + 4));
  DisplayActionBuilder_addStringArg(this_00,(void *)((int)this + 8));
  FUN_012fa0c0(*(undefined4 *)((int)this + 0x44));
  DisplayActionBuilder_addStringArg(this_00,(void *)((int)this + 0x24));
  DisplayActionManager_ensureSingleton();
  uVar3 = FUN_012d3550(this_00);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

