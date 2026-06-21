// addr: 0x005fe7eb
// name: LexerDfaState_loadSerializedTables
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall LexerDfaState_loadSerializedTables(uint param_1,uint *param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint *puVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_8;
  
                    /* Loads serialized DFA table data into a LexerDfaState: copies transition rows,
                       accept states, sparse map entries, reset transitions, and final short tables.
                       Evidence is LexerDfaState_destroy/resetTransitions and
                       PagedSparseIntMap_setValue callees. */
  puVar3 = param_2;
  local_8 = param_1;
  LexerDfaTables_clear();
  LexerDfaState_destroy((void *)param_2[1]);
  param_2 = (uint *)0x0;
  if (puVar3[1] != 0) {
    uVar8 = *puVar3;
    do {
      pvVar4 = (void *)StdVector16_at_005db533((void *)(param_1 + 0x30),(uint)param_2);
      StdVectorPair_resize(pvVar4,uVar8);
      uVar7 = *puVar3;
      local_8 = 0;
      uVar8 = 0;
      if (uVar7 != 0) {
        do {
          sVar1 = *(short *)(puVar3[2] + (uVar7 * (int)param_2 + local_8) * 2);
          uVar8 = local_8;
          pvVar4 = (void *)StdVector16_at_005db533((void *)(param_1 + 0x30),(uint)param_2);
          piVar5 = StdVector_atElementPtr4(pvVar4,uVar8);
          local_8 = local_8 + 1;
          *piVar5 = (int)sVar1;
          uVar7 = *puVar3;
          uVar8 = uVar7;
        } while (local_8 < uVar7);
      }
      param_2 = (uint *)((int)param_2 + 1);
    } while (param_2 < puVar3[1]);
  }
  StdVectorPair_resize((void *)(param_1 + 0x40),puVar3[1]);
  uVar8 = 0;
  if (puVar3[1] != 0) {
    do {
      sVar1 = *(short *)(puVar3[3] + uVar8 * 2);
      piVar5 = StdVector_atElementPtr4((void *)(param_1 + 0x40),uVar8);
      uVar8 = uVar8 + 1;
      *piVar5 = (int)sVar1;
    } while (uVar8 < puVar3[1]);
  }
  param_2 = (uint *)0x0;
  piVar5 = (int *)puVar3[5];
  if (puVar3[4] != 0) {
    do {
      local_8 = piVar5[1];
      PagedSparseIntMap_setValue((void *)(param_1 + 0xc),*piVar5,(int *)&local_8);
      param_2 = (uint *)((int)param_2 + 1);
      piVar5 = piVar5 + 2;
    } while (param_2 < puVar3[4]);
  }
  LexerDfaState_resetTransitions((void *)(param_1 + 0x50),(void *)puVar3[6]);
  uVar8 = 0;
  if (puVar3[6] != 0) {
    do {
      puVar6 = (undefined4 *)StdVector8_at_005db588((void *)(param_1 + 0x50),uVar8);
      uVar2 = *(undefined4 *)(puVar3[7] + 4 + uVar8 * 8);
      *puVar6 = *(undefined4 *)(puVar3[7] + uVar8 * 8);
      uVar8 = uVar8 + 1;
      puVar6[1] = uVar2;
    } while (uVar8 < puVar3[6]);
  }
  StdVectorPair_resize((void *)(param_1 + 0x60),puVar3[8]);
  uVar8 = 0;
  if (puVar3[8] != 0) {
    do {
      sVar1 = *(short *)(puVar3[9] + uVar8 * 2);
      piVar5 = StdVector_atElementPtr4((void *)(param_1 + 0x60),uVar8);
      uVar8 = uVar8 + 1;
      *piVar5 = (int)sVar1;
    } while (uVar8 < puVar3[8]);
  }
  return 1;
}

