// addr: 0x014b3370
// name: DisplayActionManager_showTimedIntAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall DisplayActionManager_showTimedIntAction(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *this;
  void *this_00;
  int durationMs;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a display action, sets a timer duration, adds an integer argument,
                       and submits it through DisplayActionManager. Exact action type is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a76cb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x49);
  DisplayActionBuilder_addIntArg(this_00,*(int *)(param_1 + 8));
  DisplayActionBuilder_addIntArg(this_00,*(int *)(param_1 + 4));
  DisplayActionBuilder_addIntArg(this_00,*(int *)(param_1 + 0xc));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(this_00);
  durationMs = *(int *)(param_1 + 0xc);
  DisplayActionManager_ensureSingleton();
  Timer_setDuration(this,durationMs);
  ExceptionList = local_c;
  return 1;
}

