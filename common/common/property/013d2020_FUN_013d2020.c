// addr: 0x013d2020
// name: FUN_013d2020
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CardFormula_collectSecondaryEffectIds(void * this, void * outVector) */

void __thiscall CardFormula_collectSecondaryEffectIds(void *this,void *outVector)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an output vector and appends values from the tree at this+0x5c.
                        */
  puStack_8 = &LAB_0168b239;
  local_c = ExceptionList;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  *(undefined4 *)((int)outVector + 4) = 0;
  *(undefined4 *)((int)outVector + 8) = 0;
  *(undefined4 *)((int)outVector + 0xc) = 0;
  local_4 = 0;
  piVar1 = *(int **)((int)this + 0x5c);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (this == (void *)0xffffffa8) {
      FUN_00d83c2d(uVar6);
    }
    if (piVar2 == piVar1) break;
    if (this == (void *)0xffffffa8) {
      FUN_00d83c2d(uVar6);
    }
    if (piVar2 == (int *)*(int *)((int)this + 0x5c)) {
      FUN_00d83c2d(uVar6);
    }
    uVar3 = *(uint *)((int)outVector + 4);
    if ((uVar3 == 0) ||
       ((uint)((int)(*(int *)((int)outVector + 0xc) - uVar3) >> 2) <=
        (uint)((int)(*(int *)((int)outVector + 8) - uVar3) >> 2))) {
      uVar5 = *(uint *)((int)outVector + 8);
      if (uVar5 < uVar3) {
        FUN_00d83c2d(uVar6);
      }
      Vector_insertSingleAndReturnIterator_realloc(local_14,outVector,uVar5,piVar2 + 3);
      FUN_004d21f9();
    }
    else {
      puVar4 = *(undefined4 **)((int)outVector + 8);
      *puVar4 = piVar2[3];
      *(undefined4 **)((int)outVector + 8) = puVar4 + 1;
      FUN_004d21f9();
    }
  }
  ExceptionList = local_c;
  return;
}

