// addr: 0x014b7a50
// name: FUN_014b7a50
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_014b7a50(int *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  int ***pppiVar3;
  int ****ppppiVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  uint uVar5;
  int unaff_ESI;
  undefined1 local_34 [4];
  int ***apppiStack_30 [4];
  undefined4 uStack_20;
  uint uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Large versioned deserializer that reads many string fields and optional
                       fields; older versions copy through a temporary string buffer while newer
                       versions use FUN_013cfed0/FUN_01445070. No class identity is available. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a84c8;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_34;
  ExceptionList = &local_c;
  pppiVar3 = (int ***)(**(code **)(*param_1 + 0x10))
                                (param_2,local_34,DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  if (((char)pppiVar3 != '\0') &&
     (pppiVar3 = (int ***)FUN_01441e20(param_2), (char)pppiVar3 != '\0')) {
    if (unaff_ESI < 3) {
      uStack_1c = 0xf;
      uStack_20 = 0;
      apppiStack_30[0] = (int ***)((uint)apppiStack_30[0] & 0xffffff00);
      local_c = (void *)0x0;
      cVar1 = Deserializer_readString(param_2,local_34);
      ppppiVar4 = (int ****)apppiStack_30[0];
      if (uStack_1c < 0x10) {
        ppppiVar4 = apppiStack_30;
      }
      param_1[1] = (int)*ppppiVar4;
      param_1[2] = (int)ppppiVar4[1];
      param_1[3] = (int)ppppiVar4[2];
      pppiVar3 = ppppiVar4[3];
      param_1[4] = (int)pppiVar3;
      local_c = (void *)0xffffffff;
      if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
        _free(apppiStack_30[0]);
      }
      uStack_1c = 0xf;
      uStack_20 = 0;
      apppiStack_30[0] = (int ***)((uint)apppiStack_30[0] & 0xffffff00);
    }
    else {
      pppiVar3 = (int ***)FUN_013cfed0(&stack0xffffffc8,0x10);
      cVar1 = (char)pppiVar3;
    }
    if ((cVar1 != '\0') &&
       ((unaff_ESI < 2 || (pppiVar3 = (int ***)FUN_01445070(param_1 + 5), (char)pppiVar3 != '\0'))))
    {
      if (3 < unaff_ESI) {
        bVar2 = Deserializer_readString(param_2,param_1 + 8);
        pppiVar3 = (int ***)CONCAT31(extraout_var,bVar2);
        if (!bVar2) goto LAB_014b7a9a;
      }
      if (4 < unaff_ESI) {
        bVar2 = Deserializer_readString(param_2,param_1 + 0xf);
        pppiVar3 = (int ***)CONCAT31(extraout_var_00,bVar2);
        if (!bVar2) goto LAB_014b7a9a;
        bVar2 = Deserializer_readString(param_2,param_1 + 0x16);
        pppiVar3 = (int ***)CONCAT31(extraout_var_01,bVar2);
        if (!bVar2) goto LAB_014b7a9a;
        bVar2 = Deserializer_readString(param_2,param_1 + 0x1d);
        pppiVar3 = (int ***)CONCAT31(extraout_var_02,bVar2);
        if (!bVar2) goto LAB_014b7a9a;
      }
      if (5 < unaff_ESI) {
        bVar2 = Deserializer_readString(param_2,param_1 + 0x24);
        pppiVar3 = (int ***)CONCAT31(extraout_var_03,bVar2);
        if (!bVar2) goto LAB_014b7a9a;
      }
      if (6 < unaff_ESI) {
        bVar2 = Deserializer_readString(param_2,param_1 + 0x2b);
        pppiVar3 = (int ***)CONCAT31(extraout_var_04,bVar2);
        if (!bVar2) goto LAB_014b7a9a;
      }
      if (7 < unaff_ESI) {
        bVar2 = Deserializer_readString(param_2,param_1 + 0x32);
        pppiVar3 = (int ***)CONCAT31(extraout_var_05,bVar2);
        if (!bVar2) goto LAB_014b7a9a;
      }
      if (8 < unaff_ESI) {
        bVar2 = Deserializer_readString(param_2,param_1 + 0x39);
        pppiVar3 = (int ***)CONCAT31(extraout_var_06,bVar2);
        if (!bVar2) goto LAB_014b7a9a;
        if (unaff_ESI == 6) {
          bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffffc8);
          pppiVar3 = (int ***)CONCAT31(extraout_var_07,bVar2);
          if (!bVar2) goto LAB_014b7a9a;
        }
      }
      if (unaff_ESI < 10) {
LAB_014b7c9d:
        uVar5 = (**(code **)(*param_1 + 0x14))(param_2);
        ExceptionList = pvStack_14;
        return uVar5;
      }
      bVar2 = Deserializer_readString(param_2,param_1 + 0x40);
      pppiVar3 = (int ***)CONCAT31(extraout_var_08,bVar2);
      if (bVar2) {
        bVar2 = Deserializer_readString(param_2,param_1 + 0x47);
        pppiVar3 = (int ***)CONCAT31(extraout_var_09,bVar2);
        if (bVar2) goto LAB_014b7c9d;
      }
    }
  }
LAB_014b7a9a:
  ExceptionList = pvStack_14;
  return (uint)pppiVar3 & 0xffffff00;
}

