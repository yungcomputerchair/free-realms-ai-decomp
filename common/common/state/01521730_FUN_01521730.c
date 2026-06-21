// addr: 0x01521730
// name: FUN_01521730
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01521730(int *param_1,int param_2)

{
  int *out;
  int *out_00;
  int *out_01;
  uint uVar1;
  uint uVar2;
  char extraout_AL;
  bool bVar3;
  uint3 extraout_var;
  uint3 uVar5;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  uint3 extraout_var_08;
  uint3 extraout_var_09;
  int iVar4;
  int unaff_EBX;
  int local_18;
  uint local_14;
  uint local_10 [2];
  undefined1 local_8 [4];
  void *pvStack_4;
  
                    /* Generic game/lobby/deserialization helper with insufficient direct naming
                       evidence; behavior is broader than a specific state method. */
  uVar1 = param_1[5];
  if (uVar1 < (uint)param_1[4]) {
    FUN_00d83c2d();
  }
  uVar2 = param_1[4];
  if ((uint)param_1[5] < uVar2) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_8,param_1 + 3,uVar2,param_1 + 3,uVar1);
  uVar1 = param_1[9];
  out = param_1 + 7;
  if (uVar1 < (uint)param_1[8]) {
    FUN_00d83c2d();
  }
  uVar2 = param_1[8];
  if ((uint)param_1[9] < uVar2) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_8,out,uVar2,out,uVar1);
  uVar1 = param_1[0xd];
  out_00 = param_1 + 0xb;
  if (uVar1 < (uint)param_1[0xc]) {
    FUN_00d83c2d();
  }
  local_14 = param_1[0xc];
  if ((uint)param_1[0xd] < local_14) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_8,out_00,local_14,out_00,uVar1);
  local_10[0] = param_1[0x11];
  out_01 = param_1 + 0xf;
  if (local_10[0] < (uint)param_1[0x10]) {
    FUN_00d83c2d();
  }
  local_14 = param_1[0x10];
  if ((uint)param_1[0x11] < local_14) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_8,out_01,local_14,out_01,local_10[0]);
  (**(code **)(*param_1 + 0x10))(param_2,&local_18);
  uVar5 = extraout_var;
  if (extraout_AL != '\0') {
    bVar3 = Deserializer_readIntegerWithHooks(param_1,pvStack_4);
    uVar5 = extraout_var_00;
    if (bVar3) {
      if (param_2 < 2) {
        bVar3 = Deserializer_readInteger(pvStack_4,(int *)local_10);
        uVar5 = extraout_var_01;
        if (!bVar3) goto LAB_01521824;
        bVar3 = Deserializer_readInteger(pvStack_4,(int *)&stack0xffffffdc);
        uVar5 = extraout_var_02;
        if (!bVar3) goto LAB_01521824;
        local_14 = CONCAT31(local_14._1_3_,unaff_EBX != 0);
        bVar3 = Deserializer_readInteger(pvStack_4,(int *)&stack0xffffffdc);
        uVar5 = extraout_var_03;
        if (!bVar3) goto LAB_01521824;
        bVar3 = Deserializer_readInteger(pvStack_4,&local_18);
        uVar5 = extraout_var_04;
        if (!bVar3) goto LAB_01521824;
        CommandPayload_writeFourFields(local_10[0],local_14,unaff_EBX != 0,local_18);
      }
      bVar3 = Deserializer_readInteger(pvStack_4,param_1 + 2);
      uVar5 = extraout_var_05;
      if (bVar3) {
        if (param_2 < 2) {
LAB_0152192d:
          iVar4 = (**(code **)(*param_1 + 0x14))(pvStack_4);
          return iVar4;
        }
        bVar3 = Deserializer_readIntegerVector(&stack0xffffffd8,param_1 + 3);
        uVar5 = extraout_var_06;
        if (bVar3) {
          bVar3 = Deserializer_readIntegerVector(&stack0xffffffd8,out);
          uVar5 = extraout_var_07;
          if (bVar3) {
            bVar3 = Deserializer_readIntegerVector(&stack0xffffffd8,out_00);
            uVar5 = extraout_var_08;
            if (bVar3) {
              bVar3 = Deserializer_readIntegerVector(&stack0xffffffd8,out_01);
              uVar5 = extraout_var_09;
              if (bVar3) goto LAB_0152192d;
            }
          }
        }
      }
    }
  }
LAB_01521824:
  return (uint)uVar5 << 8;
}

