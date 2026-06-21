// addr: 0x00567662
// name: FUN_00567662
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4
FUN_00567662(int *param_1,uint *param_2,uint *param_3,int *param_4,int param_5,undefined4 *param_6,
            uint *param_7,uint *param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined1 local_64 [44];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_14;
  uint local_10;
  uint *local_c;
  undefined1 local_5;
  
                    /* Builds or clips a render/layout span batch by intersecting source ranges and
                       copying visible spans into an output structure. Exact class evidence absent.
                        */
  puVar5 = param_2;
  LayoutCellRange_ctor(local_64,param_1,(int)param_2,(int *)param_3);
  puVar7 = param_6;
  iVar6 = param_5;
  local_c = puVar5 + 0xb;
  local_5 = 0;
  local_10 = 1;
  puVar12 = (undefined4 *)(param_5 + 0x68);
  do {
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0xffffffff;
    puVar12[9] = 0xffffffff;
    puVar12[-4] = local_c[-1];
    uVar8 = LayoutGrid_getCellBounds(local_64,local_10,puVar12 + -7);
    puVar5 = param_7;
    *(char *)(puVar12 + -7) = (char)uVar8;
    if ((char)uVar8 != '\0') {
      *(byte *)(puVar12 + -3) = (byte)*local_c;
      param_5 = puVar12[-1];
      puVar12[2] = puVar12[-2];
      puVar12[5] = puVar12[1];
      puVar12[3] = param_5;
      puVar12[4] = *puVar12;
      puVar12[6] = puVar12[2];
      puVar12[9] = puVar12[1];
      puVar12[7] = param_5;
      puVar12[8] = *puVar12;
      puVar12[0xb] = param_10;
      puVar12[10] = puVar7;
      puVar12[-5] = local_c[7];
      if (*(char *)(puVar12 + -3) != '\0') {
        local_5 = 1;
      }
    }
    local_10 = local_10 + 1;
    local_c = local_c + 9;
    puVar12 = puVar12 + 0x13;
  } while (local_10 < 10);
  if ((puVar7 != (undefined4 *)0x0) && (param_9 != 0)) {
    *puVar7 = *(undefined4 *)(param_9 + 0x24);
    *(short *)(puVar7 + 1) = (short)param_2[0x75];
    *(undefined1 *)((int)puVar7 + 6) = 1;
    uVar4 = *(undefined4 *)(param_9 + 0x28);
    puVar7[3] = *(undefined4 *)(param_9 + 0x2c);
    puVar7[2] = uVar4;
    *(short *)(puVar7 + 4) = (short)param_2[0x73];
    *(undefined1 *)((int)puVar7 + 0x12) = 1;
    puVar7[5] = param_8;
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = *(undefined4 *)(param_9 + 0x30);
      *(short *)(param_8 + 1) = (short)param_2[0x79];
      param_8[4] = *(undefined4 *)(param_9 + 0x34);
      *(short *)(param_8 + 5) = (short)param_2[0x7d];
      *(byte *)((int)param_8 + 6) = (byte)(*param_2 >> 0xe) & 1;
    }
    if ((*(char *)(iVar6 + 0x4c) != '\0') && (param_7 != (uint *)0x0)) {
      *param_7 = param_2[0x76];
      *(undefined1 *)((int)param_7 + 6) = 1;
      uVar8 = *(uint *)(param_9 + 0x2c);
      param_7[2] = *(uint *)(param_9 + 0x28);
      param_7[3] = uVar8;
      *(short *)(param_7 + 4) = (short)param_2[0x73];
      *(undefined1 *)((int)param_7 + 0x12) = 1;
      param_7[5] = (uint)param_8;
      sVar3 = (short)param_2[0x77];
      if (sVar3 != 0) {
        if (sVar3 == (short)param_2[0x75]) {
          *param_7 = *(uint *)(param_9 + 0x24);
        }
        else {
          param_5 = CONCAT22((short)(uVar8 >> 0x10),sVar3);
          (**(code **)(*param_1 + 0x18))(param_5,param_1,param_7);
        }
      }
      *(uint **)(iVar6 + 0x90) = puVar5;
    }
  }
  local_20 = param_3[2] - param_4[2];
  local_28 = *param_3 + *param_4;
  local_24 = param_3[1] + param_4[1];
  local_1c = param_3[3] - param_4[3];
  param_3 = (uint *)((local_20 - local_28) + 1);
  param_4 = (int *)((local_1c - local_24) + 1);
  if ((*param_2 & 8) != 0) {
    iVar13 = (int)param_3 - ((*(int *)(iVar6 + 0x88) - *(int *)(iVar6 + 0x80)) + 1);
    iVar11 = (int)param_4 - ((*(int *)(iVar6 + 0x8c) - *(int *)(iVar6 + 0x84)) + 1);
    iVar9 = iVar11 / 2;
    iVar1 = *(int *)(iVar6 + 0x200) + -1 + iVar9;
    iVar10 = iVar13 / 2;
    iVar2 = *(int *)(iVar6 + 0x248) + -1 + iVar10;
    iVar11 = (*(int *)(iVar6 + 0x2ec) - (iVar11 - iVar9)) + 1;
    iVar9 = (*(int *)(iVar6 + 0x29c) - (iVar13 - iVar10)) + 1;
    *(int *)(iVar6 + 0x294) = iVar9;
    *(int *)(iVar6 + 0x118) = iVar9;
    *(int *)(iVar6 + 0x1b0) = iVar9;
    *(int *)(iVar6 + 0x208) = iVar1;
    *(int *)(iVar6 + 0x2e4) = iVar11;
    *(int *)(iVar6 + 0x250) = iVar2;
    *(int *)(iVar6 + 0xd4) = iVar2;
    *(int *)(iVar6 + 0xd8) = iVar1;
    *(int *)(iVar6 + 0x124) = iVar1;
    *(int *)(iVar6 + 0x16c) = iVar2;
    *(int *)(iVar6 + 0x168) = iVar11;
    *(int *)(iVar6 + 0x1b4) = iVar11;
  }
  param_9 = 0;
  param_6 = (undefined4 *)0x0;
  local_10 = 0;
  param_7 = (uint *)0x0;
  param_1 = (int *)0x0;
  param_2 = (uint *)0x0;
  param_5 = (int)param_4;
  param_8 = param_3;
  param_10 = (int)param_4;
  local_14 = param_3;
  local_c = param_3;
  LayoutSpan_splitHorizontalGap
            ((char *)(iVar6 + 0x98),(char *)(iVar6 + 0xe4),(int *)&param_8,&param_9);
  LayoutSpan_splitVerticalGap
            ((char *)(iVar6 + 0x98),(char *)(iVar6 + 0x130),&param_10,(int *)&param_6);
  LayoutSpan_splitHorizontalGap
            ((char *)(iVar6 + 0x130),(char *)(iVar6 + 0x17c),(int *)&local_c,(int *)&local_10);
  LayoutSpan_splitVerticalGap
            ((char *)(iVar6 + 0xe4),(char *)(iVar6 + 0x17c),(int *)&param_4,(int *)&param_7);
  LayoutSpan_splitVerticalGap
            ((char *)(iVar6 + 0x1c8),(char *)(iVar6 + 0x2ac),&param_5,(int *)&param_2);
  LayoutSpan_splitHorizontalGap
            ((char *)(iVar6 + 0x214),(char *)(iVar6 + 0x260),(int *)&param_3,(int *)&param_1);
  if (*(char *)(iVar6 + 0x4c) == '\0') {
    local_30 = -1;
    local_2c = -1;
    local_38 = 0;
    local_34 = 0;
  }
  else {
    local_34 = (int)param_2 + local_24;
    local_38 = (int)param_1 + local_28;
    local_30 = local_38 + -1 + (int)param_3;
    local_2c = local_34 + -1 + param_5;
  }
  *(int *)(iVar6 + 0x80) = local_38;
  *(int *)(iVar6 + 0x84) = local_34;
  *(int *)(iVar6 + 0x88) = local_30;
  *(int *)(iVar6 + 0x8c) = local_2c;
  if (*(char *)(iVar6 + 0x98) == '\0') {
    local_38 = 0;
    local_34 = 0;
    local_30 = -1;
    local_2c = -1;
  }
  else {
    local_30 = (*(int *)(iVar6 + 0xd4) - *(int *)(iVar6 + 0xcc)) + local_28;
    local_2c = (*(int *)(iVar6 + 0xd8) - *(int *)(iVar6 + 0xd0)) + local_24;
    local_38 = local_28;
    local_34 = local_24;
  }
  *(int *)(iVar6 + 0xcc) = local_38;
  *(int *)(iVar6 + 0xd0) = local_34;
  *(int *)(iVar6 + 0xd4) = local_30;
  *(int *)(iVar6 + 0xd8) = local_2c;
  if (*(char *)(iVar6 + 0xe4) == '\0') {
    local_38 = 0;
    local_34 = 0;
    local_30 = -1;
    local_2c = -1;
  }
  else {
    local_38 = (*(int *)(iVar6 + 0x118) - *(int *)(iVar6 + 0x120)) + local_20;
    local_34 = local_24;
    local_30 = local_38 + (*(int *)(iVar6 + 0x120) - *(int *)(iVar6 + 0x118));
    local_2c = (*(int *)(iVar6 + 0x124) - *(int *)(iVar6 + 0x11c)) + local_24;
  }
  *(int *)(iVar6 + 0x118) = local_38;
  *(int *)(iVar6 + 0x11c) = local_34;
  *(int *)(iVar6 + 0x120) = local_30;
  *(int *)(iVar6 + 0x124) = local_2c;
  if (*(char *)(iVar6 + 0x130) == '\0') {
    local_38 = 0;
    local_34 = 0;
    local_30 = -1;
    local_2c = -1;
  }
  else {
    local_34 = (*(int *)(iVar6 + 0x168) - *(int *)(iVar6 + 0x170)) + local_1c;
    local_38 = local_28;
    local_30 = (*(int *)(iVar6 + 0x16c) - *(int *)(iVar6 + 0x164)) + local_28;
    local_2c = (*(int *)(iVar6 + 0x170) - *(int *)(iVar6 + 0x168)) + local_34;
  }
  *(int *)(iVar6 + 0x164) = local_38;
  *(int *)(iVar6 + 0x168) = local_34;
  *(int *)(iVar6 + 0x16c) = local_30;
  *(int *)(iVar6 + 0x170) = local_2c;
  if (*(char *)(iVar6 + 0x17c) == '\0') {
    local_38 = 0;
    local_34 = 0;
    local_30 = -1;
    local_2c = -1;
  }
  else {
    local_34 = (*(int *)(iVar6 + 0x1b4) - *(int *)(iVar6 + 0x1bc)) + local_1c;
    local_38 = (*(int *)(iVar6 + 0x1b0) - *(int *)(iVar6 + 0x1b8)) + local_20;
    local_2c = (*(int *)(iVar6 + 0x1bc) - *(int *)(iVar6 + 0x1b4)) + local_34;
    local_30 = local_38 + (*(int *)(iVar6 + 0x1b8) - *(int *)(iVar6 + 0x1b0));
  }
  *(int *)(iVar6 + 0x1b0) = local_38;
  *(int *)(iVar6 + 0x1b4) = local_34;
  *(int *)(iVar6 + 0x1b8) = local_30;
  *(int *)(iVar6 + 0x1bc) = local_2c;
  if (*(char *)(iVar6 + 0x214) == '\0') {
    local_38 = 0;
    local_34 = 0;
    local_30 = -1;
    local_2c = -1;
  }
  else {
    local_30 = (*(int *)(iVar6 + 0x250) - *(int *)(iVar6 + 0x248)) + local_28;
    local_34 = (int)param_6 + local_24;
    local_2c = local_34 + -1 + param_10;
    local_38 = local_28;
  }
  *(int *)(iVar6 + 0x248) = local_38;
  *(int *)(iVar6 + 0x24c) = local_34;
  *(int *)(iVar6 + 0x250) = local_30;
  *(int *)(iVar6 + 0x254) = local_2c;
  if (*(char *)(iVar6 + 0x1c8) == '\0') {
    local_38 = 0;
    local_34 = 0;
    local_30 = -1;
    local_2c = -1;
  }
  else {
    local_38 = param_9 + local_28;
    local_30 = local_38 + -1 + (int)param_8;
    local_2c = (*(int *)(iVar6 + 0x208) - *(int *)(iVar6 + 0x200)) + local_24;
    local_34 = local_24;
  }
  *(int *)(iVar6 + 0x1fc) = local_38;
  *(int *)(iVar6 + 0x200) = local_34;
  *(int *)(iVar6 + 0x204) = local_30;
  *(int *)(iVar6 + 0x208) = local_2c;
  if (*(char *)(iVar6 + 0x260) == '\0') {
    local_38 = 0;
    local_34 = 0;
    local_30 = -1;
    local_2c = -1;
  }
  else {
    local_34 = local_24 + (int)param_7;
    local_38 = (local_20 - *(int *)(iVar6 + 0x29c)) + *(int *)(iVar6 + 0x294);
    local_30 = local_38 + (*(int *)(iVar6 + 0x29c) - *(int *)(iVar6 + 0x294));
    local_2c = local_34 + -1 + (int)param_4;
  }
  *(int *)(iVar6 + 0x294) = local_38;
  *(int *)(iVar6 + 0x298) = local_34;
  *(int *)(iVar6 + 0x29c) = local_30;
  *(int *)(iVar6 + 0x2a0) = local_2c;
  if (*(char *)(iVar6 + 0x2ac) == '\0') {
    local_38 = 0;
    local_34 = 0;
    local_30 = -1;
    local_2c = -1;
  }
  else {
    local_34 = (*(int *)(iVar6 + 0x2e4) - *(int *)(iVar6 + 0x2ec)) + local_1c;
    local_38 = local_10 + local_28;
    local_30 = local_38 + -1 + (int)local_c;
    local_2c = (*(int *)(iVar6 + 0x2ec) - *(int *)(iVar6 + 0x2e4)) + local_34;
  }
  *(int *)(iVar6 + 0x2e0) = local_38;
  *(int *)(iVar6 + 0x2e4) = local_34;
  *(int *)(iVar6 + 0x2ec) = local_2c;
  *(int *)(iVar6 + 0x2e8) = local_30;
  return CONCAT31((int3)((uint)local_2c >> 8),local_5);
}

