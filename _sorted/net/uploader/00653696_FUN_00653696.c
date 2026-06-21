// addr: 0x00653696
// name: FUN_00653696
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00653696(void * this, void * other) */

void __thiscall FUN_00653696(void *this,void *other)

{
                    /* Copy-constructs an unknown polymorphic object by copying a flag byte and two
                       payload fields. */
  *(undefined ***)this = &PTR_LAB_0175c4cc;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)((int)other + 4);
  *(undefined ***)this = &PTR_LAB_017b8b28;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)other + 0xc);
  return;
}

