// addr: 0x004135fc
// name: FUN_004135fc
// subsystem: common/client/event
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_004135fc(int param_1,int *param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint local_30;
  uint local_2c;
  int *local_28;
  uint *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ushort local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_10 = param_1 + 0x1e0;
  uVar5 = 0;
  local_5 = 0;
  local_c = 0;
  iVar2 = FUN_0040a545();
  if (iVar2 != 0) {
    do {
      puVar3 = (ushort *)FUN_0040a57c(local_c);
      uVar4 = *(uint *)(puVar3 + 4);
      if ((uVar4 & 0xf) == 0) goto LAB_00413686;
      if ((uVar4 & 1) == 0) {
        if (((uVar4 & 2) == 0) || (puVar3[0x14] != (ushort)param_3[7])) goto LAB_00413664;
      }
      else if (puVar3[0x14] == (ushort)param_3[7]) {
LAB_00413664:
        if ((uVar4 & 4) == 0) {
          if (((uVar4 & 8) == 0) || (*(int **)(puVar3 + 0x16) != param_2)) goto LAB_00413686;
        }
        else if (*(int **)(puVar3 + 0x16) == param_2) {
LAB_00413686:
          if ((uVar4 & 0xfff00) == 0) goto LAB_00413783;
          if ((uVar4 & 0x100) == 0) {
            if (((uVar4 & 0x200) == 0) || (*(uint *)(puVar3 + 8) != param_3[1])) goto LAB_004136b7;
          }
          else if (*(uint *)(puVar3 + 8) == param_3[1]) {
LAB_004136b7:
            if ((uVar4 & 0x400) == 0) {
              if (((uVar4 & 0x800) == 0) || (*(uint *)(puVar3 + 10) != param_3[2]))
              goto LAB_004136dd;
            }
            else if (*(uint *)(puVar3 + 10) == param_3[2]) {
LAB_004136dd:
              if ((uVar4 & 0x7f800) == 0) goto LAB_00413783;
              if ((uVar4 & 0x1000) == 0) {
                if (((uVar4 & 0x2000) == 0) || (*(uint *)(puVar3 + 0xc) != param_3[3]))
                goto LAB_0041370e;
              }
              else if (*(uint *)(puVar3 + 0xc) == param_3[3]) {
LAB_0041370e:
                if ((uVar4 & 0x4000) == 0) {
                  if ((-1 < (short)uVar4) || (*(uint *)(puVar3 + 0xe) != param_3[4]))
                  goto LAB_00413733;
                }
                else if (*(uint *)(puVar3 + 0xe) == param_3[4]) {
LAB_00413733:
                  if ((uVar4 & 0x10000) == 0) {
                    if (((uVar4 & 0x20000) == 0) || (*(uint *)(puVar3 + 0x10) != param_3[5]))
                    goto LAB_0041375b;
                  }
                  else if (*(uint *)(puVar3 + 0x10) == param_3[5]) {
LAB_0041375b:
                    if ((uVar4 & 0x40000) == 0) {
                      if (((uVar4 & 0x80000) == 0) || (*(uint *)(puVar3 + 0x12) != param_3[6]))
                      goto LAB_00413783;
                    }
                    else if (*(uint *)(puVar3 + 0x12) == param_3[6]) {
LAB_00413783:
                      if ((*(int **)(puVar3 + 2) != (int *)0x0) &&
                         (((ushort)param_3[7] != DAT_01bc2c64 || (param_2 != *(int **)(puVar3 + 2)))
                         )) {
                        local_14 = 0;
                        local_5 = (byte)(uVar4 >> 0x14) & 1;
                        puVar6 = &local_2c;
                        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                          *puVar6 = 0;
                          puVar6 = puVar6 + 1;
                        }
                        local_30 = 0;
                        if ((uVar4 & 0x2000000) == 0) {
                          if ((uVar4 & 0x1000000) == 0) {
                            local_30 = 0x22;
                            local_14 = DAT_01bc2c64;
                            local_2c = (uint)*puVar3;
                            local_28 = param_2;
                            local_24 = (uint *)0x0;
                            local_20 = 0;
                            local_18 = 0;
                            local_1c = 0;
                            if (param_2 != (int *)0x0) {
                              (**(code **)(*param_2 + 0xc))();
                            }
                            if (((local_30 & 0x1c0) == 0x100) && (local_24 != (uint *)0x0)) {
                              (**(code **)(*local_24 + 0x10))(0);
                            }
                            local_30 = local_30 & 0xfffffe3f;
                            local_24 = param_3;
                          }
                          else {
                            uVar1 = *puVar3;
                            puVar6 = &local_2c;
                            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                              *puVar6 = 0;
                              puVar6 = puVar6 + 1;
                            }
                            local_30 = 0;
                            local_14 = uVar1;
                          }
                        }
                        else {
                          FUN_004d93dc(param_3);
                        }
                        uVar5 = (**(code **)(**(int **)(puVar3 + 2) + 0x110))(&local_30);
                        if ((local_30 >> 0x14 & 1) != 0) {
                          *param_3 = *param_3 | 0x100000;
                          local_5 = 1;
                        }
                        if ((*(uint *)(puVar3 + 4) & 0x200000) != 0) {
                          if ((local_30 & 0x24924) != 0) {
                            FUN_004d93a3();
                          }
                          break;
                        }
                        if ((local_30 & 0x24924) != 0) {
                          FUN_004d93a3();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_c = local_c + 1;
      uVar4 = FUN_0040a545();
    } while (local_c < uVar4);
    if (local_5 != 0) {
      return uVar5;
    }
  }
  uVar5 = FUN_00507a2e(param_3);
  return uVar5;
}

