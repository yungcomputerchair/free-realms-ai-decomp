// addr: 0x012d1ea0
// name: ClientApplication_clearPolymorphicTripleList
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientApplication_clearPolymorphicTripleList(void * this) */

void __fastcall ClientApplication_clearPolymorphicTripleList(void *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
                    /* Clears a ClientApplication-owned list at offsets +0x14/+0x18, destroying each
                       node payload with StdVector_destroyPolymorphicTriples before freeing nodes.
                       Evidence is the caller ClientApplication_dtor and list reset logic. */
  puVar1 = *(undefined4 **)((int)this + 0x14);
  puVar3 = (undefined4 *)*puVar1;
  while( true ) {
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) {
      puVar1 = *(undefined4 **)((int)this + 0x14);
      pvVar2 = (void *)*puVar1;
      *puVar1 = puVar1;
      *(int *)(*(int *)((int)this + 0x14) + 4) = *(int *)((int)this + 0x14);
      *(undefined4 *)((int)this + 0x18) = 0;
      if (pvVar2 != *(void **)((int)this + 0x14)) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar2);
      }
      return;
    }
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)this + 0x14)) {
      FUN_00d83c2d();
    }
    pvVar2 = (void *)puVar3[2];
    if (pvVar2 != (void *)0x0) break;
    if (puVar3 == *(undefined4 **)((int)this + 0x14)) {
      FUN_00d83c2d();
    }
    puVar3 = (undefined4 *)*puVar3;
  }
  StdVector_destroyPolymorphicTriples(pvVar2);
                    /* WARNING: Subroutine does not return */
  _free(pvVar2);
}

