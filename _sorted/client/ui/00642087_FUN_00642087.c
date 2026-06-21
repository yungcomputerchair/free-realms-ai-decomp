// addr: 0x00642087
// name: FUN_00642087
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_00642087(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
                    /* Translates a UI/input event record into a small handled/flag result,
                       dispatching special cases by 16-bit event type and otherwise falling back to
                       a virtual/default handler. Exact event class is unknown. */
  sVar1 = *(short *)(param_2 + 0x1c);
  if (sVar1 == DAT_01bd5ec8) {
    iVar2 = FUN_00616fa4(*(undefined4 *)(param_2 + 4));
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_00641b55(iVar2,*(int *)(param_2 + 8) != 0,1);
  }
  else {
    if (sVar1 == DAT_01bd1d08) {
      iVar2 = FUN_0060d0b9(*(undefined4 *)(param_1 + 0x138));
      uVar3 = (-(uint)(*(int *)(iVar2 + 4) < 0) & 0xfffffff0) + 0x10 | 2;
      uVar4 = *(undefined4 *)(param_1 + 0x138);
    }
    else {
      if (sVar1 == DAT_01bd3488) {
        uVar3 = -(uint)(*(int *)(param_2 + 4) != 0) & 2 | 0x10;
      }
      else {
        if (sVar1 != DAT_01bd1660) {
          uVar3 = FUN_006a2091(param_2);
          return uVar3;
        }
        uVar3 = -(uint)(*(int *)(param_2 + 4) != 0) & 2;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x138);
    }
    uVar3 = FUN_0063abd1(uVar4,uVar3,0);
  }
  return uVar3 & 0xff;
}

