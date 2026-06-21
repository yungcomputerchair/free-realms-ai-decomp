// addr: 0x00568510
// name: FUN_00568510
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00568510(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined1 local_3a4 [140];
  int local_318 [155];
  undefined1 local_ac [28];
  undefined1 local_90 [28];
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  undefined4 local_c;
  uint *local_8;
  
                    /* Builds/clips a render or layout batch for a rectangular viewport, iterating
                       visible entries and constructing temporary region data. No exact class
                       evidence. */
  iVar7 = (param_4[2] - *param_4) + 1;
  local_48 = (param_4[3] - param_4[1]) + 1;
  local_50 = iVar7;
  FUN_004c9ebe();
  local_10 = 0;
  iVar3 = FUN_0055227a();
  if (iVar3 != 0) {
    do {
      piVar4 = (int *)FUN_0055228d(local_10);
      puVar1 = (uint *)*piVar4;
      uVar5 = *puVar1;
      if ((uVar5 & 0x70000) != 0) {
        if ((uVar5 & 0xb0000000) != 0) {
          if (param_3 == 0) {
            uVar5 = uVar5 & 0x10000000;
          }
          else {
            if (param_3 != 1) {
              if ((param_3 == 2) && (-1 < (int)uVar5)) goto LAB_0056889b;
              goto LAB_005685a4;
            }
            uVar5 = uVar5 & 0x20000000;
          }
          if (uVar5 == 0) goto LAB_0056889b;
        }
LAB_005685a4:
        local_24 = 0;
        local_20 = 0;
        local_1c = 0x7fffffff;
        local_18 = 0x7fffffff;
        if ((short)puVar1[0x67] == 0) {
          local_20 = puVar1[0x66];
          local_24 = puVar1[0x65];
        }
        else {
          local_4c = CONCAT22(local_4c._2_2_,(short)puVar1[0x67]);
          (**(code **)(*param_1 + 0x18))(local_4c,param_1,&local_24);
        }
        if ((short)puVar1[0x6a] == 0) {
          local_18 = puVar1[0x69];
          local_1c = puVar1[0x68];
        }
        else {
          local_54 = CONCAT22(local_54._2_2_,(short)puVar1[0x6a]);
          (**(code **)(*param_1 + 0x18))(local_54,param_1,&local_1c);
        }
        if (((((int)local_24 <= iVar7) && ((int)local_20 <= local_48)) && (iVar7 <= (int)local_1c))
           && (local_48 <= (int)local_18)) {
          local_60 = puVar1[0x61];
          local_58 = puVar1[99];
          local_5c = puVar1[0x62];
          local_64 = puVar1[0x60];
          if ((short)puVar1[100] != 0) {
            local_44 = CONCAT22(local_44._2_2_,(short)puVar1[100]);
            (**(code **)(*param_1 + 0x18))(local_44,param_1,&local_64);
          }
          local_38 = local_38 & 0xffff0000;
          local_30 = local_30 & 0xffff0000;
          local_28 = local_28 & 0xffff0000;
          bVar2 = false;
          FUN_00567662(param_1,puVar1,param_4,&local_64,local_3a4,0,0,0,0,local_ac);
          local_8 = puVar1 + 0x12;
          piVar4 = local_318;
          local_40 = 9;
          do {
            if ((((char)piVar4[-0x10] != '\0') && (piVar4[-3] <= piVar4[-1])) &&
               ((piVar4[-2] <= *piVar4 && ((piVar4[-0xd] & 0x10000000U) == 0)))) {
              uVar5 = piVar4[-0xd] & 0x7000000;
              if (uVar5 == 0x1000000) {
                local_c = 0;
              }
              else if (uVar5 == 0x2000000) {
                local_c = 1;
              }
              else if (uVar5 == 0x4000000) {
                local_c = 2;
              }
              if (piVar4[-0xe] == 0) {
                pvVar6 = Mem_Alloc(0x1c);
                if (pvVar6 == (void *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = FUN_004c9ebe();
                }
                *local_8 = uVar5;
                if ((piVar4[-0xd] & 0x40000000U) == 0) {
                  if (piVar4[-0xf] != 0) {
                    if (!bVar2) {
                      local_3c = puVar1[0x78];
                      local_38 = CONCAT22(local_38._2_2_,(short)puVar1[0x79]);
                      local_2c = puVar1[0x7c];
                      local_28 = CONCAT22(local_28._2_2_,(short)puVar1[0x7d]);
                      local_34 = puVar1[0x7a];
                      local_30 = CONCAT22(local_30._2_2_,(short)puVar1[0x7b]);
                      if ((short)puVar1[0x7b] != 0) {
                        (**(code **)(*param_1 + 0x18))(local_30,param_1,&local_34);
                      }
                      if ((short)local_38 != 0) {
                        (**(code **)(*param_1 + 0x18))(local_38,param_1,&local_3c);
                      }
                      if ((short)local_28 != 0) {
                        (**(code **)(*param_1 + 0x18))(local_28,param_1,&local_2c);
                      }
                      bVar2 = true;
                    }
                    (**(code **)(*(int *)piVar4[-0xf] + 0x1ec))
                              (*local_8,local_3c,local_34,local_2c,1,piVar4 + -0xb);
                  }
                }
                else {
                  local_6c = piVar4[-9] - piVar4[-0xb];
                  local_68 = piVar4[-8] - piVar4[-10];
                  local_74 = 0;
                  local_70 = 0;
                  FUN_004c9f80(&local_74);
                }
                piVar4[-0xe] = *local_8;
              }
              if ((piVar4[-0xd] & 0x40000000U) == 0) {
                FUN_004c9ebe();
                thunk_FUN_00558eb5(param_1,local_90,piVar4 + -0x10,piVar4 + -3);
                FUN_004074c6(local_c,local_90);
                FUN_004c9f6e();
              }
              else {
                FUN_00407527(local_c,piVar4 + -3);
              }
            }
            local_8 = local_8 + 9;
            piVar4 = piVar4 + 0x13;
            local_40 = local_40 + -1;
            iVar7 = local_50;
          } while (local_40 != 0);
        }
      }
LAB_0056889b:
      local_10 = local_10 + 1;
      uVar5 = FUN_0055227a();
    } while (local_10 < uVar5);
  }
  FUN_004c9f6e();
  return 1;
}

