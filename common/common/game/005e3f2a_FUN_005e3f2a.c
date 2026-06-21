// addr: 0x005e3f2a
// name: FUN_005e3f2a
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_005e3f2a(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *this;
  void *pvVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint *table;
  uint unaff_EBX;
  char *pcVar8;
  undefined *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar1 = param_3;
  pvVar4 = (void *)(param_1 + 0x30);
  iVar2 = StdVector16_size_005db4ff(pvVar4);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_8 = &DAT_01bc7e28;
    local_20 = &DAT_01bc7e28;
    this = (void *)StdVector16_at_005db512(pvVar4,0);
    local_1c = StdVector_size(this);
    iVar2 = StdVector16_size_005db4ff(pvVar4);
    local_18 = iVar2;
    local_14 = StdVector8_size((void *)(param_1 + 0x50));
    local_10 = StdVector_size((void *)(param_1 + 0x60));
    FUN_004d83cb();
    FUN_004f3cc4(&local_8,"SInt16 %s_TransitionTable[%d][%d] =\n    {\n",*param_3 + 4,iVar2,local_1c
                );
    FUN_004e54dd(&local_8);
    param_3 = (int *)0x0;
    if (0 < iVar2) {
      do {
        FUN_004e5340("    {");
        local_c = 0;
        if (0 < local_1c) {
          do {
            local_24 = &DAT_0179fe9c;
            if (local_c == local_1c - 1U) {
              local_24 = &DAT_01770978;
            }
            uVar7 = local_c;
            pvVar4 = (void *)StdVector16_at_005db512((void *)(param_1 + 0x30),(uint)param_3);
            puVar5 = (undefined4 *)StdVectorDword_at_005db353(pvVar4,uVar7);
            FUN_004f3cc4(&local_20,local_24,*puVar5);
            FUN_004e54dd(&local_20);
            local_c = local_c + 1;
          } while ((int)local_c < local_1c);
        }
        FUN_004e554b(&DAT_017704d4);
        puVar6 = &DAT_0179fe98;
        if (param_3 == (int *)(iVar2 - 1U)) {
          puVar6 = &DAT_01770548;
        }
        FUN_004e554b(puVar6);
        FUN_004e54dd(&local_8);
        param_3 = (int *)((int)param_3 + 1);
      } while ((int)param_3 < iVar2);
    }
    FUN_004e554b("    };\n\n");
    FUN_004f3cc4(&local_8,"SInt16 %s_AcceptStates[%d] =\n    {\n    ",*piVar1 + 4,local_18);
    FUN_004e54dd(&local_8);
    param_3 = (int *)0x0;
    if (0 < local_18) {
      do {
        local_24 = &DAT_0179fe9c;
        if (param_3 == (int *)(local_18 - 1U)) {
          local_24 = &DAT_0179fe60;
        }
        puVar5 = (undefined4 *)StdVectorDword_at_005db353((void *)(param_1 + 0x40),(uint)param_3);
        FUN_004f3cc4(&local_8,local_24,*puVar5);
        FUN_004e54dd(&local_8);
        param_3 = (int *)((int)param_3 + 1);
      } while ((int)param_3 < local_18);
    }
    FUN_004e554b("    };\n\n");
    FUN_004f3cc4(&local_8,"GLexemeInfo %s_LexemeInfos[%d] =\n    {\n    ",*piVar1 + 4,local_14);
    FUN_004e54dd(&local_8);
    param_3 = (int *)0x0;
    if (0 < local_14) {
      do {
        puVar5 = (undefined4 *)StdVector8_at_005db567((void *)(param_1 + 0x50),(uint)param_3);
        FUN_004f3cc4(&local_8,"{%d, GLexemeInfo::",*puVar5);
        iVar2 = StdVector8_at_005db567((void *)(param_1 + 0x50),(uint)param_3);
        uVar7 = *(uint *)(iVar2 + 4) & 0xf0000000;
        if (uVar7 == 0) {
          pcVar8 = "ActionNone";
        }
        else if (uVar7 == 0x10000000) {
          pcVar8 = "ActionGoto";
        }
        else if (uVar7 == 0x20000000) {
          pcVar8 = "ActionPush";
        }
        else if (uVar7 == 0x30000000) {
          pcVar8 = "ActionPop";
        }
        else {
          pcVar8 = "ActionError";
        }
        FUN_004e554b(pcVar8);
        iVar2 = StdVector8_at_005db567((void *)(param_1 + 0x50),(uint)param_3);
        if ((*(uint *)(iVar2 + 4) & 0xfffffff) != 0) {
          iVar2 = StdVector8_at_005db567((void *)(param_1 + 0x50),(uint)param_3);
          FUN_004f3cc4(&local_20," | 0x0%06X",*(uint *)(iVar2 + 4) & 0xfffffff);
          FUN_004e54dd(&local_20);
        }
        pcVar8 = "},\n    ";
        if (param_3 == (int *)(local_14 - 1U)) {
          pcVar8 = "}\n";
        }
        FUN_004e554b(pcVar8);
        FUN_004e54dd(&local_8);
        param_3 = (int *)((int)param_3 + 1);
      } while ((int)param_3 < local_14);
    }
    FUN_004e554b("    };\n\n");
    FUN_004f3cc4(&local_8,"SInt16 %s_ExpressionStartStates[%d] =\n    {\n    ",*piVar1 + 4,local_10)
    ;
    FUN_004e54dd(&local_8);
    param_3 = (int *)0x0;
    if (0 < local_10) {
      do {
        local_24 = &DAT_0179fe9c;
        if (param_3 == (int *)(local_10 - 1U)) {
          local_24 = &DAT_0179fe60;
        }
        puVar5 = (undefined4 *)StdVectorDword_at_005db353((void *)(param_1 + 0x60),(uint)param_3);
        FUN_004f3cc4(&local_8,local_24,*puVar5);
        FUN_004e54dd(&local_8);
        param_3 = (int *)((int)param_3 + 1);
      } while ((int)param_3 < local_10);
    }
    FUN_004e554b("    };\n\n");
    FUN_004f3cc4(&local_8,"static SInt %s_CharTable[%d][2] =\n    {\n",*piVar1 + 4,
                 *(undefined4 *)(param_1 + 0x24));
    FUN_004e54dd(&local_8);
    for (table = *(uint **)(param_1 + 0x28); table != (uint *)(*(int *)(param_1 + 0x2c) + 1);
        table = (uint *)SparseIntTable_findNextUsedIndex((void *)(param_1 + 0xc),table,unaff_EBX)) {
      FUN_004f3cc4(&local_8,"    {%d, %d},\n",table,
                   *(undefined4 *)
                    (*(int *)(*(int *)(param_1 + 0x1c) + ((uint)table >> 7) * 4) +
                    (*(uint *)(param_1 + 0x10) & (uint)table) * 4));
      FUN_004e54dd(&local_8);
    }
    FUN_004e554b("    };\n\n");
    iVar2 = *piVar1 + 4;
    FUN_004f3cc4(&local_8,
                 "static GStaticDFA %s =\n    {\n    %d, %d,\n    (SInt16*)&%s_TransitionTable,\n    (SInt16*)&%s_AcceptStates,\n    %d,\n    (UInt*)&%s_CharTable,\n    %d,\n    (GLexemeInfo*)&%s_LexemeInfos,\n    %d,\n    (SInt16*)&%s_ExpressionStartStates\n    };"
                 ,iVar2,local_1c,local_18,iVar2,iVar2,*(undefined4 *)(param_1 + 0x24),iVar2,local_14
                 ,iVar2,local_10,iVar2);
    FUN_004e54dd(&local_8);
    FUN_004d83ba();
    FUN_004d83ba();
    uVar3 = 1;
  }
  return uVar3;
}

