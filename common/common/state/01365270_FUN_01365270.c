// addr: 0x01365270
// name: FUN_01365270
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_01365270(int param_1,undefined4 param_2,undefined4 param_3,void *param_4,void *param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  puStack_8 = &LAB_0167f5a8;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  local_4 = 0;
  piVar6 = (int *)FUN_01331340(local_14,&param_2);
  iVar1 = *piVar6;
  iVar2 = piVar6[1];
  iVar3 = *(int *)(param_1 + 0x204);
  if ((iVar1 == 0) || (iVar1 != param_1 + 0x200)) {
    FUN_00d83c2d(uVar5);
  }
  pvVar4 = param_5;
  pvVar7 = param_4;
  if (iVar2 != iVar3) {
    if ((param_5 < param_4) && (FUN_00d83c2d(uVar5), pvVar4 < pvVar7)) {
      FUN_00d83c2d(uVar5);
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0xfffffff8) {
        FUN_00d83c2d(uVar5);
      }
      if (pvVar7 == param_5) break;
      if (&stack0x00000000 == (undefined1 *)0xfffffff8) {
        FUN_00d83c2d();
      }
      if (param_5 <= pvVar7) {
        FUN_00d83c2d();
      }
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if (iVar2 == *(int *)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      FUN_0042c155(pvVar7);
      if (param_5 <= pvVar7) {
        FUN_00d83c2d();
      }
      pvVar7 = (void *)((int)pvVar7 + 4);
    }
  }
  local_4 = 0xffffffff;
  if (param_4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(param_4);
  }
  ExceptionList = local_c;
  return;
}

