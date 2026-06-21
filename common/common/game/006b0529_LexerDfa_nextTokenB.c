// addr: 0x006b0529
// name: LexerDfa_nextTokenB
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall LexerDfa_nextTokenB(int param_1)

{
  void *this;
  byte bVar1;
  uint *puVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
                    /* Runs another generated DFA lexer and returns a static token result, tracking
                       input position, line/column, accept states, and lexer state stack
                       transitions. It shares the same DFA token loop shape as 006b0093 but writes
                       to a different static result. */
  if ((_DAT_01bdf218 & 1) == 0) {
    _DAT_01bdf218 = _DAT_01bdf218 | 1;
    _DAT_01bdf208 = 1;
    _DAT_01bdf20c = &DAT_01bc7e28;
    _atexit(FUN_01746877);
  }
  while( true ) {
    FUN_006aae49();
    if (**(uint **)(param_1 + 0x10) <= *(uint *)(param_1 + 0xc)) {
      iVar11 = 1;
      goto LAB_006b076c;
    }
    if (*(int *)(param_1 + 0x1c) == 0) break;
    psVar5 = (short *)StdVectorDword_at_005db353
                                ((void *)(*(int *)(param_1 + 0x1c) + 0x60),*(uint *)(param_1 + 0x30)
                                );
    sVar3 = *psVar5;
    local_8 = 0xffffffff;
    uVar8 = *(uint *)(param_1 + 4);
    puVar2 = *(uint **)(param_1 + 8);
    if (*(int *)(param_1 + 0x34) == 0) {
      do {
        uVar6 = ChunkedIndexMap_getValueOrInvalid
                          (*(void **)(param_1 + 0x1c),(void *)(int)sVar3,
                           (ushort)**(byte **)(param_1 + 0xc));
        sVar3 = (short)uVar6;
        if (sVar3 == -1) break;
        psVar5 = (short *)StdVectorDword_at_005db353
                                    ((void *)(*(int *)(param_1 + 0x1c) + 0x40),(int)sVar3);
        if (*psVar5 == 0) {
          sVar4 = FUN_006acf7f();
        }
        else {
          local_8 = (uint)*psVar5;
          sVar4 = FUN_006acf7f();
          local_c = *(undefined4 *)(param_1 + 0xc);
          local_10 = *(undefined4 *)(param_1 + 0x10);
        }
      } while (sVar4 != 0);
    }
    else {
      local_14 = *(undefined4 *)(param_1 + 0x40);
      local_18 = *(undefined4 *)(param_1 + 0x44);
      do {
        uVar6 = ChunkedIndexMap_getValueOrInvalid
                          (*(void **)(param_1 + 0x1c),(void *)(int)sVar3,
                           (ushort)**(byte **)(param_1 + 0xc));
        sVar3 = (short)uVar6;
        if (sVar3 == -1) break;
        if (**(char **)(param_1 + 0xc) == '\n') {
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        else if (**(char **)(param_1 + 0xc) == '\t') {
          uVar6 = *(uint *)(param_1 + 0x48);
          if ((int)uVar6 < 0) {
            *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar6;
          }
          else {
            *(uint *)(param_1 + 0x44) =
                 (uVar6 - *(uint *)(param_1 + 0x44) % uVar6) + *(uint *)(param_1 + 0x44);
          }
        }
        else {
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        }
        psVar5 = (short *)StdVectorDword_at_005db353
                                    ((void *)(*(int *)(param_1 + 0x1c) + 0x40),(int)sVar3);
        if (*psVar5 == 0) {
          sVar4 = FUN_006acf7f();
        }
        else {
          local_8 = (uint)*psVar5;
          sVar4 = FUN_006acf7f();
          local_c = *(undefined4 *)(param_1 + 0xc);
          local_10 = *(undefined4 *)(param_1 + 0x10);
          local_14 = *(undefined4 *)(param_1 + 0x40);
          local_18 = *(undefined4 *)(param_1 + 0x44);
        }
      } while (sVar4 != 0);
    }
    if (local_8 == 0xffffffff) {
      if (((*(uint *)(param_1 + 0xc) < **(uint **)(param_1 + 0x10)) ||
          (*(uint *)(param_1 + 0xc) != uVar8)) || (*(uint **)(param_1 + 0x10) != puVar2)) {
        *(uint **)(param_1 + 0x10) = puVar2;
        iVar11 = 0;
        *(uint *)(param_1 + 0xc) = uVar8;
        if (*(int *)(param_1 + 0x34) != 0) {
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x3c);
        }
      }
      else {
        iVar11 = 1;
      }
      goto LAB_006b076c;
    }
    *(undefined4 *)(param_1 + 0xc) = local_c;
    *(undefined4 *)(param_1 + 0x10) = local_10;
    if (*(int *)(param_1 + 0x34) != 0) {
      *(undefined4 *)(param_1 + 0x40) = local_14;
      *(undefined4 *)(param_1 + 0x44) = local_18;
    }
    piVar7 = (int *)StdVector8_at_005db588((void *)(*(int *)(param_1 + 0x1c) + 0x50),local_8);
    iVar11 = *piVar7;
    uVar8 = piVar7[1] & 0xf0000000;
    if (uVar8 == 0x10000000) {
LAB_006b0757:
      *(uint *)(param_1 + 0x30) = piVar7[1] & 0xfffffff;
    }
    else {
      if (uVar8 == 0x20000000) {
        FUN_0042c155(param_1 + 0x30);
        goto LAB_006b0757;
      }
      if (uVar8 == 0x30000000) {
        this = (void *)(param_1 + 0x20);
        iVar9 = StdVector_size(this);
        if (iVar9 == 0) {
          *(undefined4 *)(param_1 + 0x30) = 0;
          iVar11 = 0;
          goto LAB_006b076c;
        }
        iVar9 = StdVector_size(this);
        puVar10 = StdVector_atElementPtr4(this,iVar9 + -1);
        *(undefined4 *)(param_1 + 0x30) = *puVar10;
        iVar9 = StdVector_size(this);
        if (iVar9 != 0) {
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -4;
        }
      }
    }
    if (iVar11 != 0) goto LAB_006b076c;
  }
  bVar1 = **(byte **)(param_1 + 0xc);
  if ((((((bVar1 == 0x2b) || (bVar1 == 0x2e)) || (bVar1 == 0x7c)) ||
       (((bVar1 == 0x2a || (bVar1 == 0x28)) ||
        ((bVar1 == 0x29 || ((bVar1 == 0x5b || (bVar1 == 0x5d)))))))) || (bVar1 == 0x7b)) ||
     ((((bVar1 == 0x7d || (bVar1 == 0x2d)) || (bVar1 == 0x5e)) || (bVar1 == 0x3f)))) {
    iVar11 = bVar1 + 2;
  }
  else {
    iVar11 = 0x65;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    if (bVar1 == 10) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else if (bVar1 == 9) {
      uVar8 = *(uint *)(param_1 + 0x48);
      if ((int)uVar8 < 0) {
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar8;
      }
      else {
        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) % uVar8 + *(uint *)(param_1 + 0x44);
      }
    }
    else {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
  }
  FUN_006acf7f();
LAB_006b076c:
  FUN_006acf15(iVar11,param_1);
  return &DAT_01bdf208;
}

