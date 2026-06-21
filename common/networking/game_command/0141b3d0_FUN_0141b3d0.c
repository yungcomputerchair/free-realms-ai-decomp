// addr: 0x0141b3d0
// name: FUN_0141b3d0
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0141b3d0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_20 [8];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693998;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar3 = StateMachine_getCurrentState(uVar2);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  iVar4 = GameCommandStateList_dtor(local_18);
  local_4 = 0;
  iVar1 = param_1 + 0x18;
  if (iVar1 != iVar4) {
    FUN_005152ac(local_20,iVar1,**(undefined4 **)(param_1 + 0x1c),iVar1,
                 *(undefined4 **)(param_1 + 0x1c));
    FUN_012415a0(iVar4);
  }
  local_4 = 0xffffffff;
  FUN_00521a9c();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  ExceptionList = local_c;
  return;
}

