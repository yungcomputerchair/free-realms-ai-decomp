// addr: 0x01336060
// name: Game_buildStateDisplayActionForPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_buildStateDisplayActionForPlayer(int *param_1,void *param_2,void *param_3)

{
  int iVar1;
  undefined4 *extraout_EAX;
  int *piVar2;
  int value_;
  undefined4 uVar3;
  void *this;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Finds player-specific default/state data in int-keyed maps, creates a display
                       action, adds integer arguments/current state, and updates a default map
                       entry. Exact event name is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167b506;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = param_1[0xfb];
  piVar2 = param_1 + 0xfa;
  StdRbTreeInt_find(piVar2,local_14,&param_2,(int *)(DAT_01b839d8 ^ (uint)&stack0xffffffdc));
  if (((int *)*extraout_EAX == (int *)0x0) || ((int *)*extraout_EAX != piVar2)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar1) {
    piVar2 = IntDefaultMap_getOrInsert(piVar2,(int *)&param_2);
    iVar1 = (int)param_3;
    *piVar2 = (int)param_3;
    if (*(char *)((int)param_1 + 0x3f6) == '\0') {
      param_3 = Mem_Alloc(0x14);
      this = (void *)0x0;
      local_4 = 0;
      if (param_3 != (void *)0x0) {
        this = (void *)FUN_012f9eb0();
      }
      local_4 = 0xffffffff;
      FUN_012f8c70(0xa1);
      value_ = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(this,value_);
      DisplayActionBuilder_addIntArg(this,0x2233d);
      DisplayActionBuilder_addIntArg(this,(int)param_2);
      DisplayActionBuilder_addIntArg(this,iVar1);
      (**(code **)(*param_1 + 0x154))(this);
      if (param_1[0xfc] == 2) {
        param_2 = Mem_Alloc(0x14);
        local_4 = 1;
        if (param_2 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_012f9eb0();
        }
        local_4 = 0xffffffff;
        FUN_012f8c70(0x1ade7);
        (**(code **)(*param_1 + 0x154))(uVar3);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

