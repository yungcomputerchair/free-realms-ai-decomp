// addr: 0x014dbcd0
// name: FUN_014dbcd0
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014dbcd0(void *param_1)

{
  bool bVar1;
  uint uVar2;
  void *this;
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ae39b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  this_00 = (undefined4 *)0x0;
  if (*(int *)((int)param_1 + 8) != 0) {
    GameCommand_execute(param_1);
    if (*(int *)((int)param_1 + 0x24) == 0) {
      (**(code **)(**(int **)((int)param_1 + 8) + 0x70))(*(undefined4 *)((int)param_1 + 4));
    }
    else {
      (**(code **)(**(int **)((int)param_1 + 8) + 0x74))
                (*(int *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 4));
    }
    bVar1 = Game_getFlag_14d(*(void **)((int)param_1 + 8));
    if (bVar1) {
      this = Mem_Alloc(0x28);
      uStack_4 = 0;
      if (this != (void *)0x0) {
        this_00 = GameCommand_OfferAdjournment_ctor(this,*(undefined4 **)((int)param_1 + 8),uVar2);
      }
      uStack_4 = 0xffffffff;
      set_field_4(this_00,*(uint *)((int)param_1 + 4));
      Game_broadcastCallbackResultExceptPlayer
                (*(void **)((int)param_1 + 8),*(int *)((int)param_1 + 4),this_00);
    }
  }
  ExceptionList = local_c;
  return 1;
}

