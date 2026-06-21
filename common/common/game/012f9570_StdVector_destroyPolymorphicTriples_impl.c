// addr: 0x012f9570
// name: StdVector_destroyPolymorphicTriples_impl
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_destroyPolymorphicTriples_impl(void * vec) */

void __fastcall StdVector_destroyPolymorphicTriples_impl(void *vec)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
                    /* Destroys a vector whose 12-byte elements begin with a polymorphic object
                       pointer, calling each element's virtual destructor before freeing storage. */
  puVar2 = *(undefined4 **)((int)vec + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)((int)vec + 4) = 0;
    *(undefined4 *)((int)vec + 8) = 0;
    *(undefined4 *)((int)vec + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)((int)vec + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)vec + 4));
}

