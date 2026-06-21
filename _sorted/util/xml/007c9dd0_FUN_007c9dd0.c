// addr: 0x007c9dd0
// name: FUN_007c9dd0
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007c9dd0(int param_1,void *param_2)

{
  char *value;
  float fVar1;
  float fVar2;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  undefined2 extraout_var_01;
  undefined3 extraout_var;
  undefined3 uVar3;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  value = *(char **)(param_1 + 0x2c);
  if ((value != (char *)0x0) && (*value != '\0')) {
    TiXmlElement_SetAttribute(param_2,"boneName",value);
  }
  if (*(float *)(param_1 + 0x38) != DAT_01762a30) {
    FUN_00d53080("heading",(double)*(float *)(param_1 + 0x38));
  }
  if (*(float *)(param_1 + 0x3c) != DAT_01762a30) {
    FUN_00d53080("pitch",(double)*(float *)(param_1 + 0x3c));
  }
  if (*(float *)(param_1 + 0x40) != _DAT_0175b420) {
    FUN_00d53080("scale",(double)*(float *)(param_1 + 0x40));
  }
  fVar1 = *(float *)(param_1 + 0x84);
  fVar2 = *(float *)(param_1 + 0x88);
  uVar4 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x8c) >> 0x10);
  if (*(float *)(param_1 + 0x80) != DAT_01762a30) {
    FUN_00d53080("offsetX",(double)*(float *)(param_1 + 0x80));
    uVar4 = extraout_var_00;
  }
  if (fVar1 != DAT_01762a30) {
    FUN_00d53080("offsetY",(double)fVar1);
    uVar4 = extraout_var_01;
  }
  uVar3 = CONCAT21(uVar4,(fVar2 == DAT_01762a30) << 6 | (NAN(fVar2) || NAN(DAT_01762a30)) << 2 | 2U
                         | fVar2 < DAT_01762a30);
  if (fVar2 != DAT_01762a30) {
    FUN_00d53080("offsetZ",(double)fVar2);
    uVar3 = extraout_var;
  }
  return CONCAT31(uVar3,1);
}

