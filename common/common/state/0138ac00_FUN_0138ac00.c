// addr: 0x0138ac00
// name: FUN_0138ac00
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall FUN_0138ac00(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016838f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = (void *)(**(code **)(*param_1 + 0x15c))
                             (0x273,param_2,DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  if (0 < (int)pvVar2) {
    FUN_012fa910();
    local_c = (void *)0x0;
    FUN_01300680(2);
    (**(code **)(*param_1 + 0x10))(0x2db,&stack0xffffffd4);
    local_c = (void *)0xffffffff;
    FUN_01300cd0();
    pvStack_24 = pvVar2;
  }
  FUN_012fa910();
  local_c = (void *)0x1;
  uVar3 = (**(code **)(*(int *)param_1[0xc] + 0x54))();
  FUN_01300680(2);
  uStack_18 = uVar3;
  uVar3 = PlayElement_getId();
  Game_logGeneral((void *)param_1[0xc],"setting turn entered play on card %d",uVar3);
  (**(code **)(*param_1 + 0x10))(0x271,auStack_20);
  (**(code **)(*param_1 + 0x18))(0x199);
  *(undefined1 *)((int)param_1 + 0x69) = 1;
  uVar1 = (**(code **)(*(int *)param_1[0xc] + 0x180))(param_1);
  uStack_1c = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_24;
  return uVar1;
}

