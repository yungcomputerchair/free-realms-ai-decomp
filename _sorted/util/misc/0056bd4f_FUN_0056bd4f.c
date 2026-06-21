// addr: 0x0056bd4f
// name: FUN_0056bd4f
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_0056bd4f(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
                    /* Sets up viewport/clip rectangles and delegates to FUN_00568510 for
                       rendering/layout generation. No exact class evidence. */
  piVar7 = param_3;
  local_18 = param_3[0x4b];
  iVar6 = 0;
  local_14 = FUN_0064ffc0(0);
  param_3 = (int *)CONCAT13((piVar7[0x18] & 2U) != 0,param_3._0_3_);
  (**(code **)(*piVar7 + 0x31c))(&local_38);
  uVar4 = get_active_rect_from_resource(piVar7,&local_28);
  if ((char)uVar4 == '\0') {
    local_20 = -1;
    local_1c = -1;
    local_28 = 0;
    local_24 = 0;
    local_40 = 0;
  }
  else {
    piVar5 = (int *)FUN_0065d17f(local_10);
    iVar6 = *piVar5;
    local_40 = piVar5[1];
    local_28 = local_28 + -piVar7[0x25];
    local_20 = local_20 + -piVar7[0x25];
    local_24 = local_24 + -piVar7[0x26];
    local_1c = local_1c + -piVar7[0x26];
  }
  if ((param_3._3_1_ == '\0') && (cVar3 = (**(code **)(*piVar7 + 0x32c))(), cVar3 == '\0')) {
    local_c = 0;
    local_8 = 0;
    param_3 = (int *)0x0;
    uVar4 = local_14 & 0x3000000;
    if ((uVar4 == 0) || ((local_14 & 0x10000000) == 0)) {
      param_3 = (int *)(uint)((local_18 & 0x1000000) != 0);
      if ((local_18 & 0x2000000) != 0) {
        local_8 = 1;
      }
    }
    else if (uVar4 == 0x2000000) {
      local_8 = 2;
    }
    else if (uVar4 == 0x1000000) {
      param_3 = (int *)0x2;
    }
  }
  else {
    local_c = 3;
    local_8 = 3;
    param_3 = (int *)0x3;
  }
  if ((piVar7[0x19] & 0x4000000U) == 0) {
    param_3 = (int *)((int)param_3 + 4);
    local_8 = local_8 + 4;
    local_c = local_c + 4;
  }
  if ((*(byte *)(piVar7 + 0x4b) & 1) == 0) {
    iVar2 = (int)param_3 + 8;
    local_8 = local_8 + 8;
    local_c = local_c + 8;
    local_64 = local_34;
    local_5c = local_24 + -1 + iVar6;
    local_3c = local_1c - local_40;
    iVar6 = local_3c + 1;
    local_4c = local_2c;
    local_44 = local_5c + 1;
    local_68 = local_38;
    local_60 = local_30;
    local_58 = local_38;
    local_50 = local_30;
    local_48 = local_38;
    local_40 = local_30;
    local_54 = iVar6;
    if (((local_34 < local_24) && (local_38 <= local_30 + 1)) && (local_34 <= local_44)) {
      param_3 = (int *)0x0;
      piVar5 = piVar7 + 9;
      local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)(&PTR_DAT_01b12578)[iVar2]);
      (**(code **)(*piVar5 + 0x18))(local_18,piVar5,&param_3);
      if (param_3 != (int *)0x0) {
        FUN_00568510(piVar5,param_1,param_2,&local_68);
      }
    }
    if ((local_2c <= local_1c) || (local_50 + 1 < local_58)) goto LAB_0056c032;
    bVar8 = SBORROW4(local_4c + 1,iVar6);
    iVar6 = (local_4c + 1) - iVar6;
  }
  else {
    local_68 = local_38;
    local_60 = iVar6 + -1 + local_28;
    local_40 = local_20 - local_40;
    iVar6 = local_40 + 1;
    local_50 = local_30;
    local_48 = local_60 + 1;
    local_64 = local_34;
    local_5c = local_2c;
    local_54 = local_34;
    local_4c = local_2c;
    local_44 = local_34;
    local_3c = local_2c;
    local_58 = iVar6;
    if (((local_38 < local_28) && (local_38 <= local_48)) && (local_34 <= local_2c + 1)) {
      ppuVar1 = &PTR_DAT_01b12578 + (int)param_3;
      param_3 = (int *)0x0;
      piVar5 = piVar7 + 9;
      local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)*ppuVar1);
      (**(code **)(*piVar5 + 0x18))(local_18,piVar5,&param_3);
      if (param_3 != (int *)0x0) {
        FUN_00568510(piVar5,param_1,param_2,&local_68);
      }
    }
    if ((local_30 <= local_20) || (local_50 + 1 < iVar6)) goto LAB_0056c032;
    bVar8 = SBORROW4(local_4c + 1,local_54);
    iVar6 = (local_4c + 1) - local_54;
  }
  if (bVar8 == iVar6 < 0) {
    param_3 = (int *)0x0;
    piVar5 = piVar7 + 9;
    local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)(&PTR_DAT_01b12578)[local_8]);
    (**(code **)(*piVar5 + 0x18))(local_18,piVar5,&param_3);
    if (param_3 != (int *)0x0) {
      FUN_00568510(piVar5,param_1,param_2,&local_58);
    }
  }
LAB_0056c032:
  if ((local_48 <= local_40 + 1) && (local_44 <= local_3c + 1)) {
    param_3 = (int *)0x0;
    piVar7 = piVar7 + 9;
    local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)(&PTR_DAT_01b12578)[local_c]);
    (**(code **)(*piVar7 + 0x18))(local_18,piVar7,&param_3);
    if (param_3 != (int *)0x0) {
      FUN_00568510(piVar7,param_1,param_2,&local_48);
    }
  }
  return 1;
}

