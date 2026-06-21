// addr: 0x0152d380
// name: FUN_0152d380
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0152d380(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* EventCommand_SendEventPlayerFlags destructor body: resets vtable, clears an
                       internal tree, destroys base storage, and invokes base EventCommand cleanup.
                        */
  puStack_8 = &LAB_016ba8e3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = EventCommand_SendEventPlayerFlags::vftable;
  local_4 = 1;
  FUN_004ef7fa(*(undefined4 *)(param_1[3] + 4));
  *(undefined4 *)(param_1[3] + 4) = param_1[3];
  param_1[4] = 0;
  *(undefined4 *)param_1[3] = param_1[3];
  *(undefined4 *)(param_1[3] + 8) = param_1[3];
  local_4 = local_4 & 0xffffff00;
  FUN_00521a9c(uVar1);
  local_4 = 0xffffffff;
  EventCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

