// addr: 0x013144f0
// name: FUN_013144f0
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013144f0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_10;
  undefined4 *local_c;
  int local_8;
  undefined4 *local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_c = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)local_c[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)local_c[1];
    do {
      if ((int)puVar2[3] < *param_3) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        local_c = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  local_10 = param_1;
  if ((local_c == *(undefined4 **)(param_1 + 4)) || (*param_3 < (int)local_c[3])) {
    local_8 = param_1;
    local_4 = *(undefined4 **)(param_1 + 4);
    piVar4 = &local_8;
  }
  else {
    piVar4 = &local_10;
  }
  iVar1 = piVar4[1];
  *param_2 = *piVar4;
  param_2[1] = iVar1;
  return;
}

