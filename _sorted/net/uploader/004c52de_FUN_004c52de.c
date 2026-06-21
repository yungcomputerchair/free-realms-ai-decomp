// addr: 0x004c52de
// name: FUN_004c52de
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_004c52de(void * this, void * other) */

void __thiscall FUN_004c52de(void *this,void *other)

{
  undefined4 uVar1;
  
                    /* Copy-constructs an unknown polymorphic aggregate by copying a flag byte,
                       vtable, and four payload fields. */
  *(undefined ***)this = &PTR_LAB_0175c4cc;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)((int)other + 4);
  *(undefined ***)this = &PTR_LAB_0176f45c;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  uVar1 = *(undefined4 *)((int)other + 0x14);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)other + 0x10);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)other + 0xc);
  return;
}

