// addr: 0x012f6c00
// name: FUN_012f6c00
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyIdTable_appendFixed256(void * this, void * outVector) */

void __thiscall PropertyIdTable_appendFixed256(void *this,void *outVector)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_8 [8];
  
                    /* Appends 256 32-bit entries from this+0x208 into the supplied vector after
                       preparing a 256-entry table. */
  uVar1 = *(uint *)((int)outVector + 8);
  if (uVar1 < *(uint *)((int)outVector + 4)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)outVector + 4);
  if (*(uint *)((int)outVector + 8) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_8,outVector,uVar2,outVector,uVar1);
  FUN_012f6b00(0x100);
  puVar4 = (undefined4 *)((int)this + 0x208);
  iVar5 = 0x100;
  do {
    uVar1 = *(uint *)((int)outVector + 4);
    if ((uVar1 == 0) ||
       ((uint)((int)(*(int *)((int)outVector + 0xc) - uVar1) >> 2) <=
        (uint)((int)(*(int *)((int)outVector + 8) - uVar1) >> 2))) {
      uVar2 = *(uint *)((int)outVector + 8);
      if (uVar2 < uVar1) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_8,outVector,uVar2,puVar4);
    }
    else {
      puVar3 = *(undefined4 **)((int)outVector + 8);
      *puVar3 = *puVar4;
      *(undefined4 **)((int)outVector + 8) = puVar3 + 1;
    }
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

