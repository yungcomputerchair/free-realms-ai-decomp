// addr: 0x004c4048
// name: FUN_004c4048
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_004c4048(void * this, void * other) */

void __thiscall FUN_004c4048(void *this,void *other)

{
                    /* Copy-constructs an unknown vtable-backed aggregate, copying base and five
                       payload fields from another instance. */
  *(undefined ***)this = &PTR_LAB_0176f410;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
  *(undefined ***)this = &PTR_LAB_0176f414;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)other + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)other + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)other + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)other + 0x18);
  return;
}

