// addr: 0x0133ad50
// name: FUN_0133ad50
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0133ad50(int *param_1)

{
  uint *outIter;
  bool bVar1;
  char cVar2;
  int *key;
  undefined4 *extraout_EAX;
  void *pvVar3;
  int value_;
  void *this;
  void *local_3c;
  int local_38;
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167bace;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  ExceptionList = &local_c;
  bVar1 = Game_getFlag_14d(param_1);
  if (bVar1) {
    cVar2 = Game_getFlag_318();
    if (cVar2 != '\0') {
      local_3c = Mem_Alloc(0x14);
      local_4 = 4;
      if (local_3c == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)FUN_012f9eb0();
      }
      local_4 = 0xffffffff;
      FUN_012f8c70(0x1adeb);
      value_ = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar3,value_);
      (**(code **)(*param_1 + 0x154))(pvVar3);
    }
  }
  else {
    outIter = (uint *)(param_1 + 0x4f);
    *(undefined1 *)((int)param_1 + 0x3f6) = 1;
    local_38 = param_1[0xfb];
    StdRbTreeInt_find(param_1 + 0xfa,local_34,outIter,key);
    if (((int *)*extraout_EAX == (int *)0x0) || ((int *)*extraout_EAX != param_1 + 0xfa)) {
      FUN_00d83c2d();
    }
    if (extraout_EAX[1] == local_38) {
      pvVar3 = PlayArea_findPlayerElementById(param_1,*outIter);
      unknown_getField30(pvVar3);
      pvVar3 = (void *)PlayElement_getId();
      local_3c = pvVar3;
      FUN_012fa9f0(0x240);
      this = (void *)0x0;
      local_4 = 0;
      FUN_012fa910();
      local_4._1_3_ = (uint3)((uint)local_4 >> 8);
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = 0;
      local_4._0_1_ = 2;
      FUN_0042c155(outIter);
      FUN_0042c155(&local_3c);
      FUN_01300680(6);
      FUN_005f1e5c(local_1c);
      local_3c = Mem_Alloc(0x38);
      local_4._0_1_ = 3;
      if (local_3c != (void *)0x0) {
        this = (void *)FUN_0141a550(param_1);
      }
      local_4._0_1_ = 2;
      set_field_4(this,*outIter);
      FUN_0141a630(local_28);
      FUN_0141a6e0(local_34);
      Game_dispatchCommandToAllPlayers(param_1,this);
      Game_buildStateDisplayActionForPlayer(*outIter,pvVar3);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_01300cd0();
      local_4 = 0xffffffff;
      FUN_01300cd0();
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

