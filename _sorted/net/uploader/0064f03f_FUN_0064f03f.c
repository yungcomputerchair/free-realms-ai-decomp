// addr: 0x0064f03f
// name: FUN_0064f03f
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0064f03f(void * this, void * other) */

void __thiscall FUN_0064f03f(void *this,void *other)

{
                    /* Copy-constructs an unknown polymorphic object by copying a flag byte, two
                       dwords, and a 16-bit field. */
  *(undefined ***)this = &PTR_LAB_0175c4cc;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)((int)other + 4);
  *(undefined ***)this = &PTR_LAB_017b8684;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)other + 0xc);
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)((int)other + 0x10);
  return;
}

