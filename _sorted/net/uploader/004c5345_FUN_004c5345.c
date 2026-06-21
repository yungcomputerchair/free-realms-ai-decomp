// addr: 0x004c5345
// name: FUN_004c5345
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_004c5345(void * this, void * other) */

void __thiscall FUN_004c5345(void *this,void *other)

{
                    /* Copy-constructs an unknown small polymorphic object by copying a flag byte
                       and one payload field after installing an anonymous vtable. */
  *(undefined ***)this = &PTR_LAB_0175c4cc;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)((int)other + 4);
  *(undefined ***)this = &PTR_LAB_0176f474;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  return;
}

