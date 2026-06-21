// addr: 0x0075dbd0
// name: TransformedGrid_emitBorderVertices
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void TransformedGrid_emitBorderVertices(void * grid, void * vertexSink) */

void __thiscall TransformedGrid_emitBorderVertices(void *this,void *grid,void *vertexSink)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int unaff_EDI;
  float fVar18;
  float local_3c;
  int local_38;
  float local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  
                    /* Computes grid-cell spans using floor/ceil, asks a sink for vertex storage,
                       and fills transformed border line vertices with color values. */
  local_3c = _DAT_0175b420 / *(float *)((int)this + 0x60);
  local_1c = grid;
  CRT_floor((double)(local_3c * *(float *)((int)this + 0x50)));
  iVar12 = FUN_00d83c90();
  local_14 = iVar12;
  CRT_floor((double)(local_3c * *(float *)((int)this + 0x54)));
  local_38 = FUN_00d83c90();
  local_34 = local_3c * *(float *)((int)this + 0x58);
  FUN_00d843f0((double)local_34);
  iVar13 = FUN_00d83c90();
  iVar12 = (iVar13 - iVar12) + 1;
  local_18 = iVar12;
  FUN_00d843f0((double)(*(float *)((int)this + 0x5c) / *(float *)((int)this + 0x60)));
  iVar14 = FUN_00d83c90();
  iVar13 = 0;
  iVar14 = (iVar14 - local_38) + 1;
  (**(code **)*local_1c)(0x7834fa29,3,(iVar14 + iVar12) * 2,&local_3c);
  fVar11 = _DAT_0175b420;
  if (iVar13 != 0) {
    iVar17 = iVar12;
    if (0 < iVar12) {
      iVar16 = 0;
      do {
        fVar18 = (float)iStack_2c * *(float *)((int)this + 0x60);
        if (*(float *)((int)this + 0x58) <= fVar18) {
          fVar18 = *(float *)((int)this + 0x58);
        }
        if (fVar18 < *(float *)((int)this + 0x50)) {
          fVar18 = *(float *)((int)this + 0x50);
        }
        fVar2 = *(float *)((int)this + 0x54);
        fVar3 = *(float *)((int)this + 0x24);
        fVar4 = *(float *)((int)this + 0x28);
        fVar5 = *(float *)((int)this + 0x14);
        fVar6 = *(float *)((int)this + 0x18);
        fVar7 = *(float *)((int)this + 0x34);
        fVar8 = *(float *)((int)this + 0x38);
        fVar9 = *(float *)((int)this + 0x44);
        fVar10 = *(float *)((int)this + 0x48);
        *(float *)(iVar13 + iVar16) =
             *(float *)((int)this + 0x20) * fVar2 + *(float *)((int)this + 0x10) * fVar18 +
             *(float *)((int)this + 0x30) * 0.0 + *(float *)((int)this + 0x40) * fVar11;
        *(float *)(iVar13 + 4 + iVar16) =
             fVar3 * fVar2 + fVar5 * fVar18 + fVar7 * 0.0 + fVar9 * fVar11;
        *(float *)(iVar13 + iVar16 + 8) =
             fVar4 * fVar2 + fVar6 * fVar18 + fVar8 * 0.0 + fVar10 * fVar11;
        fVar2 = *(float *)((int)this + 0x5c);
        fVar3 = *(float *)((int)this + 0x24);
        fVar4 = *(float *)((int)this + 0x28);
        fVar5 = *(float *)((int)this + 0x14);
        fVar6 = *(float *)((int)this + 0x18);
        fVar7 = *(float *)((int)this + 0x34);
        fVar8 = *(float *)((int)this + 0x38);
        fVar9 = *(float *)((int)this + 0x44);
        fVar10 = *(float *)((int)this + 0x48);
        pfVar1 = (float *)(iVar16 + 0x10 + iVar13);
        *pfVar1 = *(float *)((int)this + 0x20) * fVar2 + *(float *)((int)this + 0x10) * fVar18 +
                  *(float *)((int)this + 0x30) * 0.0 + *(float *)((int)this + 0x40) * fVar11;
        pfVar1[1] = fVar3 * fVar2 + fVar5 * fVar18 + fVar7 * 0.0 + fVar9 * fVar11;
        pfVar1[2] = fVar4 * fVar2 + fVar6 * fVar18 + fVar8 * 0.0 + fVar10 * fVar11;
        if (iStack_2c == 0) {
          uVar15 = *(undefined4 *)((int)this + 0x68);
        }
        else {
          uVar15 = *(undefined4 *)((int)this + 100);
        }
        *(undefined4 *)(iVar16 + 0xc + iVar13) = uVar15;
        *(undefined4 *)(iVar16 + 0x1c + iVar13) = uVar15;
        iStack_2c = iStack_2c + 1;
        iVar16 = iVar16 + 0x20;
        iVar12 = iVar12 + -1;
        iVar17 = iStack_30;
      } while (iVar12 != 0);
    }
    fVar11 = _DAT_0175b420;
    iVar13 = iVar13 + iVar17 * 0x20;
    if (0 < iVar14) {
      iVar12 = 0;
      do {
        fVar18 = (float)unaff_EDI * *(float *)((int)this + 0x60);
        if (*(float *)((int)this + 0x5c) <= fVar18) {
          fVar18 = *(float *)((int)this + 0x5c);
        }
        if (fVar18 < *(float *)((int)this + 0x54)) {
          fVar18 = *(float *)((int)this + 0x54);
        }
        fVar2 = *(float *)((int)this + 0x50);
        fVar3 = *(float *)((int)this + 0x14);
        fVar4 = *(float *)((int)this + 0x18);
        fVar5 = *(float *)((int)this + 0x24);
        fVar6 = *(float *)((int)this + 0x28);
        fVar7 = *(float *)((int)this + 0x34);
        fVar8 = *(float *)((int)this + 0x38);
        fVar9 = *(float *)((int)this + 0x44);
        fVar10 = *(float *)((int)this + 0x48);
        *(float *)(iVar13 + iVar12) =
             *(float *)((int)this + 0x10) * fVar2 + *(float *)((int)this + 0x20) * fVar18 +
             *(float *)((int)this + 0x30) * 0.0 + *(float *)((int)this + 0x40) * fVar11;
        *(float *)(iVar13 + 4 + iVar12) =
             fVar3 * fVar2 + fVar5 * fVar18 + fVar7 * 0.0 + fVar9 * fVar11;
        *(float *)(iVar13 + iVar12 + 8) =
             fVar4 * fVar2 + fVar6 * fVar18 + fVar8 * 0.0 + fVar10 * fVar11;
        fVar2 = *(float *)((int)this + 0x58);
        fVar3 = *(float *)((int)this + 0x14);
        fVar4 = *(float *)((int)this + 0x18);
        fVar5 = *(float *)((int)this + 0x24);
        fVar6 = *(float *)((int)this + 0x28);
        fVar7 = *(float *)((int)this + 0x34);
        fVar8 = *(float *)((int)this + 0x38);
        fVar9 = *(float *)((int)this + 0x44);
        fVar10 = *(float *)((int)this + 0x48);
        pfVar1 = (float *)(iVar12 + 0x10 + iVar13);
        *pfVar1 = *(float *)((int)this + 0x10) * fVar2 + *(float *)((int)this + 0x20) * fVar18 +
                  *(float *)((int)this + 0x30) * 0.0 + *(float *)((int)this + 0x40) * fVar11;
        pfVar1[1] = fVar3 * fVar2 + fVar5 * fVar18 + fVar7 * 0.0 + fVar9 * fVar11;
        pfVar1[2] = fVar4 * fVar2 + fVar6 * fVar18 + fVar8 * 0.0 + fVar10 * fVar11;
        if (unaff_EDI == 0) {
          uVar15 = *(undefined4 *)((int)this + 0x68);
        }
        else {
          uVar15 = *(undefined4 *)((int)this + 100);
        }
        *(undefined4 *)(iVar12 + 0xc + iVar13) = uVar15;
        *(undefined4 *)(iVar12 + 0x1c + iVar13) = uVar15;
        unaff_EDI = unaff_EDI + 1;
        iVar12 = iVar12 + 0x20;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  return;
}

