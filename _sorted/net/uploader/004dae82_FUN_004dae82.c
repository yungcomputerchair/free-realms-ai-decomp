// addr: 0x004dae82
// name: FUN_004dae82
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_004dae82(void * this, void * other) */

void * __thiscall FUN_004dae82(void *this,void *other)

{
                    /* Copy-constructs a small reference-counted holder: installs an anonymous
                       vtable, AddRefs the referenced object, and copies a 16-bit field. */
  *(undefined ***)this = &PTR_FUN_01769604;
  if (*(int **)((int)other + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)other + 4) + 0xc))();
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)((int)other + 8);
  return this;
}

