// addr: 0x010bbdc0
// name: FUN_010bbdc0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_010bbdc0(void *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  void *this;
  uint key_;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  uint *local_5c;
  uint *local_58;
  int local_54;
  uint *local_50;
  void *local_4c;
  uint *local_48;
  uint *local_44;
  int local_40;
  undefined4 local_3c;
  uint *local_38;
  uint *local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Allocates and links 0x18-byte breadcrumb/path nodes while walking an indexed
                       structure and updating references. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01648a76;
  local_1c = ExceptionList;
  key_ = DAT_01b839d8 ^ (uint)&stack0xffffff90;
  ExceptionList = &local_1c;
  local_3c = param_4;
  local_4c = param_1;
  FUN_008d3f40();
  local_38 = lookup_1024_hash_canonical_node(param_1,param_3,key_);
  if (local_38 != (uint *)0x0) {
    local_48 = (uint *)0x0;
    local_44 = (uint *)0x0;
    local_40 = 0;
    local_5c = Mem_Alloc(0x18);
    if (local_5c == (uint *)0x0) {
      local_5c = (uint *)0x0;
    }
    else {
      *local_5c = param_2;
      local_5c[1] = 0;
      local_5c[2] = 0;
      local_5c[3] = 0;
      local_5c[4] = 0;
      local_5c[5] = 0;
    }
    local_5c[5] = 0;
    local_54 = 1;
    local_58 = local_5c;
    do {
      this = local_4c;
      local_50 = local_5c;
      local_14 = 0xffffffff;
      uVar4 = *local_5c;
      puVar5 = local_5c;
      if (uVar4 == param_3) {
        do {
          puVar7 = lookup_1024_hash_canonical_node(this,*puVar5,key_);
          FUN_009cb680(puVar7 + 4);
          puVar7 = puVar5 + 3;
          puVar5 = (uint *)*puVar7;
        } while ((uint *)*puVar7 != (uint *)0x0);
        list_pop_front_and_free(&local_5c);
        list_pop_front_and_free(&local_48);
        ExceptionList = local_1c;
        return 1;
      }
      puVar5 = *(uint **)((int)param_1 + (uVar4 & 0x3ff) * 4 + 0x18);
      while( true ) {
        if (puVar5 == (uint *)0x0) {
          ExceptionList = local_1c;
          return 0;
        }
        if (puVar5[0x15] == uVar4) break;
        puVar5 = (uint *)puVar5[0x14];
      }
      while (*puVar5 != uVar4) {
        puVar7 = puVar5 + 0x15;
        puVar5 = (uint *)puVar5[0x14];
        while( true ) {
          if (puVar5 == (uint *)0x0) {
            ExceptionList = local_1c;
            return 0;
          }
          if (puVar5[0x15] == *puVar7) break;
          puVar5 = (uint *)puVar5[0x14];
        }
      }
      if (puVar5 == (uint *)0x0) {
        ExceptionList = local_1c;
        return 0;
      }
      puVar5 = (uint *)puVar5[9];
      if (puVar5 != (uint *)0x0) {
LAB_010bbef0:
        local_14 = 0xffffffff;
        if (local_5c != (uint *)0x0) {
          puVar7 = local_5c;
          do {
            if (*puVar7 == *puVar5) {
              if ((float)puVar7[1] <= (float)local_50[1] + (float)puVar5[1]) goto LAB_010bc13b;
              puVar6 = (uint *)puVar7[5];
              if (puVar7[4] != 0) {
                *(uint **)(puVar7[4] + 0x14) = (uint *)puVar7[5];
                puVar6 = local_5c;
              }
              local_5c = puVar6;
              puVar6 = (uint *)puVar7[4];
              if (puVar7[5] != 0) {
                *(uint **)(puVar7[5] + 0x10) = (uint *)puVar7[4];
                puVar6 = local_58;
              }
              local_58 = puVar6;
              local_54 = local_54 + -1;
              puVar7[5] = 0;
              puVar7[4] = 0;
              fVar2 = (float)local_50[1];
              fVar3 = (float)puVar5[1];
              puVar7[3] = (uint)local_50;
              puVar7[1] = (uint)(fVar2 + fVar3);
              if (local_5c == (uint *)0x0) goto LAB_010bbff6;
              puVar6 = local_5c;
              goto LAB_010bbfe0;
            }
            puVar7 = (uint *)puVar7[5];
          } while (puVar7 != (uint *)0x0);
        }
        if (local_48 != (uint *)0x0) {
          puVar7 = local_48;
          do {
            if (*puVar7 == *puVar5) goto LAB_010bc13b;
            puVar7 = (uint *)puVar7[5];
          } while (puVar7 != (uint *)0x0);
        }
        local_34 = Mem_Alloc(0x18);
        if (local_34 == (uint *)0x0) {
          puVar7 = (uint *)0x0;
        }
        else {
          *local_34 = *puVar5;
          local_34[1] = 0;
          local_34[2] = 0;
          local_34[3] = 0;
          local_34[4] = 0;
          local_34[5] = 0;
          puVar7 = local_34;
        }
        puVar7[1] = (uint)((float)puVar5[1] + (float)local_50[1]);
        uVar4 = *puVar5;
        for (puVar6 = *(uint **)((int)local_4c + (uVar4 & 0x3ff) * 4 + 0x18); puVar6 != (uint *)0x0;
            puVar6 = (uint *)puVar6[0x14]) {
          if (puVar6[0x15] == uVar4) goto LAB_010bc070;
        }
LAB_010bc08c:
        puVar6 = (uint *)0x0;
        goto LAB_010bc08e;
      }
LAB_010bc146:
      puVar5 = local_48;
      local_14 = 0xffffffff;
      puVar7 = (uint *)local_50[5];
      if (local_50[4] != 0) {
        *(uint **)(local_50[4] + 0x14) = (uint *)local_50[5];
        puVar7 = local_5c;
      }
      local_5c = puVar7;
      if (local_50[5] == 0) {
        local_58 = (uint *)local_50[4];
      }
      else {
        *(uint *)(local_50[5] + 0x10) = local_50[4];
      }
      local_54 = local_54 + -1;
      bVar8 = local_48 == (uint *)0x0;
      local_50[4] = 0;
      local_50[5] = (uint)local_48;
      local_48 = local_50;
      if (bVar8) {
        local_44 = local_50;
      }
      else {
        puVar5[4] = (uint)local_50;
      }
      local_40 = local_40 + 1;
      param_1 = local_4c;
    } while (local_5c != (uint *)0x0);
    local_50 = local_5c;
    list_pop_front_and_free(&local_5c);
    list_pop_front_and_free(&local_48);
  }
  ExceptionList = local_1c;
  return 0;
  while (puVar6 = (uint *)puVar6[5], puVar6 != (uint *)0x0) {
LAB_010bbfe0:
    if ((float)puVar7[2] + (float)puVar7[1] < (float)puVar6[2] + (float)puVar6[1]) {
      puVar7[5] = (uint)puVar6;
      puVar7[4] = puVar6[4];
      puVar6[4] = (uint)puVar7;
      puVar6 = local_58;
      if (puVar7[4] != 0) {
        *(uint **)(puVar7[4] + 0x14) = puVar7;
        puVar7 = local_5c;
      }
      goto LAB_010bc136;
    }
  }
LAB_010bbff6:
  puVar7[4] = (uint)local_58;
  puVar6 = puVar7;
  if (local_58 != (uint *)0x0) {
    local_58[5] = (uint)puVar7;
    puVar7 = local_5c;
  }
  goto LAB_010bc136;
LAB_010bc070:
  while (*puVar6 != uVar4) {
    puVar1 = puVar6 + 0x15;
    puVar6 = (uint *)puVar6[0x14];
    while( true ) {
      if (puVar6 == (uint *)0x0) goto LAB_010bc08c;
      if (puVar6[0x15] == *puVar1) break;
      puVar6 = (uint *)puVar6[0x14];
    }
  }
LAB_010bc08e:
  local_30 = SQRT(((float)puVar6[7] - (float)local_38[7]) * ((float)puVar6[7] - (float)local_38[7])
                  + ((float)puVar6[6] - (float)local_38[6]) *
                    ((float)puVar6[6] - (float)local_38[6]) +
                  ((float)puVar6[5] - (float)local_38[5]) * ((float)puVar6[5] - (float)local_38[5])
                  + ((float)puVar6[4] - (float)local_38[4]) *
                    ((float)puVar6[4] - (float)local_38[4]));
  puVar7[2] = (uint)local_30;
  puVar7[3] = (uint)local_50;
  fStack_2c = local_30;
  fStack_28 = local_30;
  fStack_24 = local_30;
  if (local_5c != (uint *)0x0) {
    puVar6 = local_5c;
    do {
      if ((float)puVar7[1] + local_30 < (float)puVar6[2] + (float)puVar6[1]) {
        puVar7[5] = (uint)puVar6;
        puVar7[4] = puVar6[4];
        puVar6[4] = (uint)puVar7;
        puVar6 = local_58;
        if (puVar7[4] != 0) {
          *(uint **)(puVar7[4] + 0x14) = puVar7;
          puVar7 = local_5c;
        }
        goto LAB_010bc136;
      }
      puVar6 = (uint *)puVar6[5];
    } while (puVar6 != (uint *)0x0);
  }
  puVar7[4] = (uint)local_58;
  puVar6 = puVar7;
  if (local_58 != (uint *)0x0) {
    local_58[5] = (uint)puVar7;
    puVar7 = local_5c;
  }
LAB_010bc136:
  local_58 = puVar6;
  local_5c = puVar7;
  local_54 = local_54 + 1;
LAB_010bc13b:
  puVar5 = (uint *)puVar5[5];
  if (puVar5 == (uint *)0x0) goto LAB_010bc146;
  goto LAB_010bbef0;
}

