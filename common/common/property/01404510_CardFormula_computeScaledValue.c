// addr: 0x01404510
// name: CardFormula_computeScaledValue
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint CardFormula_computeScaledValue(void * this) */

uint __fastcall CardFormula_computeScaledValue(void *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *container;
  uint uVar4;
  int iVar5;
  
                    /* Computes a table-driven card/collection value using an input mode,
                       random/default collection handling, and per-type scaling arrays. Evidence is
                       CollectionDB_resolveDefaultCollection, CollectionDB_initSingleton, random
                       fallback, and indexed constant tables. */
  piVar2 = (int *)FUN_012583b0();
  iVar3 = *piVar2;
  iVar5 = 0;
  if (iVar3 - 1U < 4) {
    CollectionDB_initSingleton();
    CollectionDB_resolveDefaultCollection();
    if (container == (void *)0x0) {
      iVar5 = 1;
    }
    else {
      iVar5 = PropertyContainer_countRareCardChildren(container);
    }
    iVar1 = iVar3 + -1 + *(int *)((int)this + 0x20) * 4;
    uVar4 = iVar3 + 9;
    iVar5 = *(int *)(&DAT_018e41d8 + iVar1 * 4) - *(int *)(&DAT_018e4188 + iVar1 * 4) * iVar5;
  }
  else if (iVar3 == -1) {
    iVar3 = _rand();
    uVar4 = iVar3 % 5;
  }
  else {
    uVar4 = iVar3 % 100 - 1;
    uVar4 = ((int)uVar4 < 1) - 1 & uVar4;
  }
  return *(int *)(&DAT_018e4070 + (uVar4 + *(int *)((int)this + 0x20) * 0xe) * 4) + iVar5 &
         (*(int *)(&DAT_018e4070 + (uVar4 + *(int *)((int)this + 0x20) * 0xe) * 4) + iVar5 < 1) - 1;
}

