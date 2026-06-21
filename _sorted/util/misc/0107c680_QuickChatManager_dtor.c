// addr: 0x0107c680
// name: QuickChatManager_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall QuickChatManager_dtor(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for QuickChatManager: installs QuickChatManager vtable and
                       destroys its owned container/base state. */
  puStack_8 = &LAB_0164010b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *param_1 = QuickChatManager::vftable;
  local_4 = 0;
  local_10 = param_1;
  FUN_00b8fca0(uVar1);
  ExceptionList = local_c;
  return;
}

