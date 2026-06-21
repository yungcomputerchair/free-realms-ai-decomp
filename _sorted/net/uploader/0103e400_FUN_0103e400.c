// addr: 0x0103e400
// name: FUN_0103e400
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0103e400(void *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint local_8;
  int local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar2 = DAT_01cb67b8;
  iVar3 = DAT_01cb67bc;
  if (param_2 != 0) {
    FUN_00702670(&local_8);
    iVar2 = param_2 + local_8;
    iVar3 = ((int)param_2 >> 0x1f) + local_4 + (uint)CARRY4(param_2,local_8);
  }
  FUN_0103df50(param_1);
  piVar1 = *(int **)((int)param_1 + 0x28);
  piVar1[1] = iVar3;
  *piVar1 = iVar2;
  return;
}

