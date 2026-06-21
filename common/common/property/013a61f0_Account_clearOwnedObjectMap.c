// addr: 0x013a61f0
// name: Account_clearOwnedObjectMap
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Account_clearOwnedObjectMap(void * this) */

void __fastcall Account_clearOwnedObjectMap(void *this)

{
  int *piVar1;
  int *piVar2;
  void *_Memory;
  
                    /* Clears an Account-owned tree/list of heap objects: iterates entries, invokes
                       each stored object's deleting destructor, then resets and frees tree nodes.
                        */
  piVar1 = *(int **)((int)this + 0x80);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (this == (void *)0xffffff84) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (this == (void *)0xffffff84) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)this + 0x80)) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)piVar2[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[4])(1);
    }
    FUN_013a4b20();
  }
  _Memory = *(void **)(*(int *)((int)this + 0x80) + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    FUN_013a53f0(*(undefined4 *)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(int *)(*(int *)((int)this + 0x80) + 4) = *(int *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x80);
  *(int *)(*(int *)((int)this + 0x80) + 8) = *(int *)((int)this + 0x80);
  return;
}

