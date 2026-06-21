// addr: 0x010b2790
// name: LightEntity_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall LightEntity_ctor(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a LightEntity ctor routine. Evidence: vftable/call-shape evidence
                       in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016478e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007648d0(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = (int)Deep::LightEntity::vftable;
  param_1[5] = param_2;
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00754710(*(undefined4 *)(param_2 + 8));
  }
  param_1[6] = iVar1;
  iVar1 = FUN_00754150(*(undefined4 *)(param_2 + 4));
  param_1[7] = iVar1;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xfffe;
    if (param_1[1] != 0) {
      FUN_00735a30();
    }
    (**(code **)(*param_1 + 0x38))();
  }
  FUN_00764c50(param_3);
  ExceptionList = local_c;
  return param_1;
}

