// addr: 0x00957850
// name: OverHeadElement_sub_00957850
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
OverHeadElement_sub_00957850
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* Identifies a OverHeadElement sub_00957850 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  uVar1 = DAT_01762a30;
  *param_1 = OverHeadElement::vftable;
  param_1[4] = 0;
  param_1[5] = *param_2;
  param_1[6] = *param_3;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  uVar2 = _DAT_0175b420;
  param_1[0xc] = *param_4;
  param_1[0xd] = param_4[1];
  param_1[0xe] = param_4[2];
  param_1[0xf] = param_4[3];
  param_1[0x10] = *param_5;
  param_1[0x11] = *param_6;
  uVar1 = *param_7;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x12] = uVar1;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  param_1[0x14] = uVar2;
  uVar3 = uRam01cb53dc;
  uVar2 = uRam01cb53d8;
  uVar1 = uRam01cb53d4;
  param_1[0x18] = _DAT_01cb53d0;
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  return;
}

