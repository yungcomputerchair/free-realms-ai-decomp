// addr: 0x005f4ad7
// name: LexerDfa_nextToken
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall LexerDfa_nextToken(int param_1)

{
  void *this;
  byte bVar1;
  uint *puVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
                    /* Runs a DFA over the input stream to return the next token record, tracking
                       line/column, accepting states, fallback single-character tokens, and lexer
                       state stack transitions. Evidence is transition table lookups, accepted-token
                       tracking, and special handling for regex punctuation characters. */
  if ((_DAT_01bcfbe0 & 1) == 0) {
    _DAT_01bcfbe0 = _DAT_01bcfbe0 | 1;
    _DAT_01bcfbd8 = 1;
  }
  while( true ) {
    FUN_005df3f2();
    if (**(uint **)(param_1 + 0x10) <= *(uint *)(param_1 + 0xc)) {
      _DAT_01bcfbd8 = 1;
      iVar12 = _DAT_01bcfbd8;
      goto LAB_005f4d09;
    }
    if (*(int *)(param_1 + 0x1c) == 0) break;
    psVar6 = (short *)StdVectorDword_at_005db353
                                ((void *)(*(int *)(param_1 + 0x1c) + 0x60),*(uint *)(param_1 + 0x30)
                                );
    sVar4 = *psVar6;
    local_8 = 0xffffffff;
    uVar9 = *(uint *)(param_1 + 4);
    puVar2 = *(uint **)(param_1 + 8);
    if (*(int *)(param_1 + 0x34) == 0) {
      do {
        uVar7 = ChunkedIndexMap_getValueOrInvalid
                          (*(void **)(param_1 + 0x1c),(void *)(int)sVar4,
                           (ushort)**(byte **)(param_1 + 0xc));
        sVar4 = (short)uVar7;
        if (sVar4 == -1) break;
        psVar6 = (short *)StdVectorDword_at_005db353
                                    ((void *)(*(int *)(param_1 + 0x1c) + 0x40),(int)sVar4);
        if (*psVar6 == 0) {
          sVar5 = FUN_005e7e86();
        }
        else {
          local_8 = (uint)*psVar6;
          sVar5 = FUN_005e7e86();
          local_c = *(undefined4 *)(param_1 + 0xc);
          local_10 = *(undefined4 *)(param_1 + 0x10);
        }
      } while (sVar5 != 0);
    }
    else {
      local_14 = *(undefined4 *)(param_1 + 0x40);
      local_18 = *(undefined4 *)(param_1 + 0x44);
      do {
        uVar7 = ChunkedIndexMap_getValueOrInvalid
                          (*(void **)(param_1 + 0x1c),(void *)(int)sVar4,
                           (ushort)**(byte **)(param_1 + 0xc));
        sVar4 = (short)uVar7;
        if (sVar4 == -1) break;
        if (**(char **)(param_1 + 0xc) == '\n') {
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        else if (**(char **)(param_1 + 0xc) == '\t') {
          uVar7 = *(uint *)(param_1 + 0x48);
          if ((int)uVar7 < 0) {
            *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar7;
          }
          else {
            *(uint *)(param_1 + 0x44) =
                 (uVar7 - *(uint *)(param_1 + 0x44) % uVar7) + *(uint *)(param_1 + 0x44);
          }
        }
        else {
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        }
        psVar6 = (short *)StdVectorDword_at_005db353
                                    ((void *)(*(int *)(param_1 + 0x1c) + 0x40),(int)sVar4);
        if (*psVar6 == 0) {
          sVar5 = FUN_005e7e86();
        }
        else {
          local_8 = (uint)*psVar6;
          sVar5 = FUN_005e7e86();
          local_c = *(undefined4 *)(param_1 + 0xc);
          local_10 = *(undefined4 *)(param_1 + 0x10);
          local_14 = *(undefined4 *)(param_1 + 0x40);
          local_18 = *(undefined4 *)(param_1 + 0x44);
        }
      } while (sVar5 != 0);
    }
    if (local_8 == 0xffffffff) {
      if (((*(uint *)(param_1 + 0xc) < **(uint **)(param_1 + 0x10)) ||
          (*(uint *)(param_1 + 0xc) != uVar9)) || (*(uint **)(param_1 + 0x10) != puVar2)) {
        *(uint **)(param_1 + 0x10) = puVar2;
        *(uint *)(param_1 + 0xc) = uVar9;
        iVar12 = 0;
        if (*(int *)(param_1 + 0x34) != 0) {
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x3c);
        }
      }
      else {
        iVar12 = 1;
      }
      goto LAB_005f4d09;
    }
    *(undefined4 *)(param_1 + 0xc) = local_c;
    *(undefined4 *)(param_1 + 0x10) = local_10;
    if (*(int *)(param_1 + 0x34) != 0) {
      *(undefined4 *)(param_1 + 0x40) = local_14;
      *(undefined4 *)(param_1 + 0x44) = local_18;
    }
    piVar8 = (int *)StdVector8_at_005db588((void *)(*(int *)(param_1 + 0x1c) + 0x50),local_8);
    iVar12 = *piVar8;
    uVar9 = piVar8[1] & 0xf0000000;
    if (uVar9 == 0x10000000) {
LAB_005f4cf0:
      *(uint *)(param_1 + 0x30) = piVar8[1] & 0xfffffff;
    }
    else {
      if (uVar9 == 0x20000000) {
        FUN_0042c155(param_1 + 0x30);
        goto LAB_005f4cf0;
      }
      if (uVar9 == 0x30000000) {
        this = (void *)(param_1 + 0x20);
        iVar10 = StdVector_size(this);
        if (iVar10 == 0) {
          *(undefined4 *)(param_1 + 0x30) = 0;
          _DAT_01bcfbd8 = 0;
          iVar12 = _DAT_01bcfbd8;
          goto LAB_005f4d09;
        }
        iVar10 = StdVector_size(this);
        puVar11 = StdVector_atElementPtr4(this,iVar10 + -1);
        *(undefined4 *)(param_1 + 0x30) = *puVar11;
        iVar10 = StdVector_size(this);
        if (iVar10 != 0) {
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -4;
        }
      }
    }
    if (iVar12 != 0) goto LAB_005f4d09;
  }
  bVar1 = **(byte **)(param_1 + 0xc);
  if ((((((bVar1 == 0x2b) || (bVar1 == 0x2e)) || (bVar1 == 0x7c)) ||
       (((bVar1 == 0x2a || (bVar1 == 0x28)) ||
        ((bVar1 == 0x29 || ((bVar1 == 0x5b || (bVar1 == 0x5d)))))))) || (bVar1 == 0x7b)) ||
     ((((bVar1 == 0x7d || (bVar1 == 0x2d)) || (bVar1 == 0x5e)) || (bVar1 == 0x3f)))) {
    iVar12 = bVar1 + 2;
  }
  else {
    iVar12 = 0x65;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    if (bVar1 == 10) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else if (bVar1 == 9) {
      uVar9 = *(uint *)(param_1 + 0x48);
      if ((int)uVar9 < 0) {
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar9;
      }
      else {
        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) % uVar9 + *(uint *)(param_1 + 0x44);
      }
    }
    else {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
  }
  FUN_005e7e86();
LAB_005f4d09:
  _DAT_01bcfbd8 = iVar12;
  cVar3 = FUN_005e7dfb();
  _DAT_01bcfbdc = (short)cVar3;
  return &DAT_01bcfbd8;
}

