// addr: 0x013d4110
// name: InstanceIDVector_contains
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool InstanceIDVector_contains(void * this, void * id) */

bool __thiscall InstanceIDVector_contains(void *this,void *id)

{
  uint uVar1;
  uint uVar2;
  
                    /* Checks whether an InstanceID-like record exists in a vector range stored at
                       offsets 0x24..0x28. It delegates to the range finder that compares the three
                       InstanceID integer fields. */
  uVar1 = *(uint *)((int)this + 0x28);
  if (uVar1 < *(uint *)((int)this + 0x24)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 0x24);
  if (*(uint *)((int)this + 0x28) < uVar2) {
    FUN_00d83c2d();
  }
  uVar2 = InstanceIDVector_find(uVar2,uVar1,id);
  uVar1 = *(uint *)((int)this + 0x28);
  if (uVar1 < *(uint *)((int)this + 0x24)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xffffffe0) {
    FUN_00d83c2d();
  }
  return uVar2 != uVar1;
}

