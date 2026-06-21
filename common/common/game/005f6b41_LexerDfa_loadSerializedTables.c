// addr: 0x005f6b41
// name: LexerDfa_loadSerializedTables
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall LexerDfa_loadSerializedTables(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined2 *puVar10;
  ushort *puVar11;
  int *piVar12;
  int local_c;
  int local_8;
  
                    /* Loads serialized lexer/DFA tables into a runtime object: row offsets,
                       accept/action records, token flags, boolean sets, and mapping entries, then
                       marks the object initialized. Evidence is checked vector ushort access, map
                       insertion, and table-copy loops over a serialized descriptor. */
  puVar4 = param_2;
  local_c = param_1;
  local_8 = param_1;
  uVar5 = FUN_005ee026();
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = param_2[2];
    *(undefined4 *)(param_1 + 0x44) = param_2[1];
    pvVar6 = Mem_Alloc(-(uint)((int)((ulonglong)(uint)param_2[1] * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_2[1] * 4));
    uVar5 = 0;
    *(void **)(param_1 + 0x4c) = pvVar6;
    iVar7 = param_2[3];
    if (*(int *)(param_1 + 0x44) != 0) {
      do {
        *(int *)(*(int *)(param_1 + 0x4c) + uVar5 * 4) = iVar7;
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + *(int *)(param_1 + 0x48) * 2;
      } while (uVar5 < *(uint *)(param_1 + 0x44));
    }
    *(undefined4 *)(param_1 + 0x54) = param_2[5];
    *(undefined4 *)(param_1 + 0x50) = param_2[4];
    pvVar6 = Mem_Alloc(-(uint)((int)((ulonglong)(uint)param_2[4] * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_2[4] * 4));
    uVar5 = 0;
    *(void **)(param_1 + 0x58) = pvVar6;
    iVar7 = param_2[6];
    if (*(int *)(param_1 + 0x50) != 0) {
      do {
        *(int *)(*(int *)(param_1 + 0x58) + uVar5 * 4) = iVar7;
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + *(int *)(param_1 + 0x54) * 2;
      } while (uVar5 < *(uint *)(param_1 + 0x50));
    }
    FUN_005f4102(param_2[7]);
    piVar1 = param_2 + 7;
    param_2 = (undefined4 *)0x0;
    if (*piVar1 != 0) {
      local_8 = 0;
      do {
        local_c = puVar4[8];
        puVar8 = (undefined1 *)StdVectorDword_at_00562388((void *)(param_1 + 0x60),(uint)param_2);
        iVar7 = local_8;
        *puVar8 = *(undefined1 *)(local_8 + local_c);
        puVar9 = (uint *)StdVectorDword_at_00562388((void *)(param_1 + 0x60),(uint)param_2);
        *puVar9 = *puVar9 ^ (*(int *)(iVar7 + 4 + puVar4[8]) << 8 ^ *puVar9) & 0x3fffff00;
        puVar9 = (uint *)StdVectorDword_at_00562388((void *)(param_1 + 0x60),(uint)param_2);
        *puVar9 = *puVar9 ^ (*(int *)(iVar7 + 8 + puVar4[8]) << 0x1e ^ *puVar9) & 0x40000000;
        puVar9 = (uint *)StdVectorDword_at_00562388((void *)(param_1 + 0x60),(uint)param_2);
        param_2 = (undefined4 *)((int)param_2 + 1);
        *puVar9 = *(int *)(iVar7 + 0xc + puVar4[8]) << 0x1f | *puVar9 & 0x7fffffff;
        local_8 = iVar7 + 0x10;
      } while (param_2 < (uint)puVar4[7]);
    }
    uVar5 = 0;
    FUN_005f40ae(puVar4[9]);
    if (puVar4[9] != 0) {
      do {
        iVar2 = puVar4[10];
        iVar7 = uVar5 * 4;
        puVar10 = (undefined2 *)CheckedVector_ushort_at(uVar5);
        uVar5 = uVar5 + 1;
        *puVar10 = *(undefined2 *)(iVar2 + iVar7);
      } while (uVar5 < (uint)puVar4[9]);
    }
    FUN_005f40ca(puVar4[0xb]);
    uVar5 = 0;
    if (puVar4[0xb] != 0) {
      do {
        puVar11 = (ushort *)CheckedVector_ushort_at_constA(uVar5);
        *puVar11 = *puVar11 ^ (byte)(*(byte *)(puVar4[0xc] + uVar5 * 4) ^ (byte)*puVar11) & 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)puVar4[0xb]);
    }
    FUN_005f40e6(puVar4[0xd]);
    uVar5 = 0;
    if (puVar4[0xd] != 0) {
      do {
        puVar11 = (ushort *)CheckedVector_ushort_at_constB(uVar5);
        *puVar11 = *puVar11 ^ (byte)(*(byte *)(puVar4[0xe] + uVar5 * 8) ^ (byte)*puVar11) & 1;
        puVar11 = (ushort *)CheckedVector_ushort_at_constB(uVar5);
        *puVar11 = *puVar11 ^
                   (byte)(*(char *)(puVar4[0xe] + 4 + uVar5 * 8) * '\x02' ^ (byte)*puVar11) & 2;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)puVar4[0xd]);
    }
    param_2 = (undefined4 *)0x0;
    if (puVar4[0xf] != 0) {
      do {
        piVar1 = (int *)(puVar4[0x10] + (int)param_2 * 8);
        local_c = *piVar1;
        piVar12 = IntDefaultMap_getOrInsert((void *)(param_1 + 0x30),&local_c);
        param_2 = (undefined4 *)((int)param_2 + 1);
        *piVar12 = piVar1[1];
      } while (param_2 < (uint)puVar4[0xf]);
    }
    uVar3 = *puVar4;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    uVar5 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar5;
}

