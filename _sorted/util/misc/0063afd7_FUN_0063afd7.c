// addr: 0x0063afd7
// name: FUN_0063afd7
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0063afd7(int param_1,int param_2,int param_3,int *param_4,byte param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = param_3;
  if ((param_3 < 0) && ((*(byte *)(param_1 + 0x1c8) & 2) != 0)) {
    return 1;
  }
  bVar4 = param_5 & 0xef;
  if ((*(byte *)(param_1 + 0x1c8) & 0x80) == 0) {
LAB_0063b043:
    iVar3 = (**(code **)(**(int **)(param_1 + 0x1d0) + 0x11c))(param_1,6,param_2,0,0,0);
    if (iVar3 == 0) {
      param_2 = 0;
      goto LAB_0063b06c;
    }
  }
  else {
    FUN_006189ad(*(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x24),*(int *)(param_1 + 0x1d4) + 0x20)
    ;
    FUN_00627fb7(local_14,&param_2);
    cVar2 = FUN_0060d3e3(local_c);
    if (cVar2 != '\0') goto LAB_0063b043;
  }
  param_2 = 1;
LAB_0063b06c:
  iVar3 = FUN_0060d0b9(iVar1);
  if ((*(int *)(iVar3 + 4) < 0) && (param_2 == 0)) {
    cVar2 = FUN_0063abd1(iVar1,bVar4,&param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    *param_4 = *param_4 - param_2;
  }
  else {
    iVar3 = FUN_0060d0b9(iVar1);
    if ((*(int *)(iVar3 + 4) < 0) || (param_2 == 0)) {
      return 0xffffffff;
    }
    cVar2 = FUN_0063abd1(iVar1,bVar4 | 0x10,&param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    *param_4 = *param_4 + param_2;
  }
  return 1;
}

