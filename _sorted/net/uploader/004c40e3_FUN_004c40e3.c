// addr: 0x004c40e3
// name: FUN_004c40e3
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_004c40e3(void * this, void * other) */

void __thiscall FUN_004c40e3(void *this,void *other)

{
                    /* Copy-constructs a smaller unknown vtable-backed aggregate, copying a base
                       field and one payload field. */
  *(undefined ***)this = &PTR_LAB_0176f410;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
  *(undefined ***)this = &PTR_LAB_0176f418;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  return;
}

