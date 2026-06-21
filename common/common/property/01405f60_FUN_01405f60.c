// addr: 0x01405f60
// name: FUN_01405f60
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CardFormula_clearObjectTree(void * this) */

void __fastcall CardFormula_clearObjectTree(void *this)

{
  undefined4 *puVar1;
  void *_Memory;
  int iVar2;
  undefined4 *puVar3;
  int local_8;
  undefined4 *local_4;
  
                    /* Destroys object pointers stored in a tree at this+0x0c, then clears the tree
                       header. */
  puVar1 = *(undefined4 **)((int)this + 0xc);
  local_4 = (undefined4 *)*puVar1;
  local_8 = (int)this + 8;
  while( true ) {
    puVar3 = local_4;
    iVar2 = local_8;
    if ((local_8 == 0) || (local_8 != (int)this + 8)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)puVar3[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar3[4])(1);
    }
    StdRbTreeIterator24_advance(&local_8);
  }
  _Memory = *(void **)(*(int *)((int)this + 0xc) + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    FUN_01299c80(*(undefined4 *)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(int *)(*(int *)((int)this + 0xc) + 4) = *(int *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(int *)(*(int *)((int)this + 0xc) + 8) = *(int *)((int)this + 0xc);
  return;
}

