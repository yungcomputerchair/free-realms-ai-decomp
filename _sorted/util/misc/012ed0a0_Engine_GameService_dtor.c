// addr: 0x012ed0a0
// name: Engine_GameService_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Engine_GameService_dtor(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for Engine::GameService; installs GameService vtable then
                       destroys the FRTWGameService/base state. */
  puStack_8 = &LAB_016736f8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *param_1 = Engine::GameService::vftable;
  local_4 = 0xffffffff;
  local_10 = param_1;
  Engine_FRTWGameService_dtor(uVar1);
  ExceptionList = local_c;
  return;
}

