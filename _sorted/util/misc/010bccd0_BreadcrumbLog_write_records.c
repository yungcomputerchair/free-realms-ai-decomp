// addr: 0x010bccd0
// name: BreadcrumbLog_write_records
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall BreadcrumbLog_write_records(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *extraout_EAX;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_8c;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
                    /* Builds/writes breadcrumb log records; uses explicit Breadcrumb.log string and
                       allocates records while iterating path/state data. */
  local_44 = 0xffffffff;
  puStack_48 = &LAB_01648c66;
  local_4c = ExceptionList;
  ExceptionList = &local_4c;
  FUN_010bbc20(DAT_01b839d8 ^ (uint)&stack0xffffff40);
  puVar9 = *(uint **)(param_2 + 4);
  puVar10 = (uint *)0x0;
  local_8c = 0;
  puVar6 = (uint *)span_end_or_zero(param_2);
  if (puVar9 != puVar6) {
    do {
      if (local_8c == 0) {
        puVar7 = Mem_Alloc(0x60);
        local_44 = 0;
        if (puVar7 == (undefined4 *)0x0) {
          puVar10 = (uint *)0x0;
        }
        else {
          init_large_path_node(puVar7);
          puVar10 = extraout_EAX;
        }
        *puVar10 = *puVar9;
        uVar2 = puVar9[2];
        uVar8 = puVar9[3];
        local_8c = puVar9[4];
        puVar10[4] = puVar9[1];
        uVar5 = _DAT_0175b420;
        puVar10[5] = uVar2;
        puVar10[6] = uVar8;
        puVar10[7] = uVar5;
        puVar10[0x17] = *(uint *)(param_1 + 0xc);
        puVar9 = puVar9 + 5;
        uVar2 = *puVar10;
        if (*(int *)(param_1 + 0xc) == 0) {
          *(uint **)(param_1 + 0x10) = puVar10;
        }
        else {
          *(uint **)(*(int *)(param_1 + 0xc) + 0x58) = puVar10;
        }
        *(uint **)(param_1 + 0xc) = puVar10;
        uVar8 = uVar2 & 0x3ff;
        puVar10[0x15] = uVar2;
        puVar10[0x14] = *(uint *)(param_1 + 0x18 + uVar8 * 4);
        *(uint **)(param_1 + 0x18 + uVar8 * 4) = puVar10;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      else {
        puVar6 = Mem_Alloc(0x18);
        if (puVar6 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        else {
          *puVar6 = 0xffffffff;
          puVar6[1] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
        }
        uVar2 = *puVar9;
        *puVar6 = uVar2;
        puVar6[1] = puVar9[1];
        puVar6[5] = puVar10[9];
        puVar9 = puVar9 + 2;
        if (puVar10[9] == 0) {
          puVar10[10] = (uint)puVar6;
        }
        else {
          *(uint **)(puVar10[9] + 0x10) = puVar6;
        }
        puVar10[9] = (uint)puVar6;
        puVar6[3] = uVar2;
        puVar6[2] = puVar10[(uVar2 & 7) + 0xc];
        puVar10[(uVar2 & 7) + 0xc] = (uint)puVar6;
        puVar10[0xb] = puVar10[0xb] + 1;
        local_8c = local_8c - 1;
      }
      local_44 = 0xffffffff;
      puVar6 = (uint *)span_end_or_zero(param_2);
    } while (puVar9 != puVar6);
  }
  puVar7 = *(undefined4 **)(param_1 + 0xc);
  do {
    do {
      puVar4 = puVar7;
      if (puVar4 == (undefined4 *)0x0) {
        ExceptionList = local_4c;
        return;
      }
      puVar7 = (undefined4 *)puVar4[0x17];
    } while (puVar4[0xb] != 0);
    FUN_00702ab0("Breadcrumb.log",
                 "Read roadmap node (id %d, at %.0f, %.0f, %.0f) with no edges.  Discarding.",
                 *puVar4,(double)(float)puVar4[4],(double)(float)puVar4[5],(double)(float)puVar4[6])
    ;
    puVar1 = (undefined4 *)(param_1 + 0x18 + (puVar4[0x15] & 0x3ff) * 4);
    puVar3 = (undefined4 *)*puVar1;
    while (puVar3 != (undefined4 *)0x0) {
      if (puVar3 == puVar4) {
        *puVar1 = puVar3[0x14];
        puVar3[0x14] = 0;
        puVar3[0x15] = 0;
        break;
      }
      puVar1 = puVar3 + 0x14;
      puVar3 = (undefined4 *)*puVar1;
    }
    if (puVar4[0x16] == 0) {
      *(undefined4 *)(param_1 + 0xc) = puVar4[0x17];
    }
    else {
      *(undefined4 *)(puVar4[0x16] + 0x5c) = puVar4[0x17];
    }
    if (puVar4[0x17] == 0) {
      *(undefined4 *)(param_1 + 0x10) = puVar4[0x16];
    }
    else {
      *(undefined4 *)(puVar4[0x17] + 0x58) = puVar4[0x16];
    }
    puVar4[0x17] = 0;
    puVar4[0x16] = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  } while( true );
}

