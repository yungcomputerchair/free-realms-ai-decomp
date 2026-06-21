// addr: 0x01298130
// name: FUN_01298130
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01298130(void * record, int a_, int b_, int c_, void * vec4, bool
   flag_) */

void __thiscall FUN_01298130(void *this,void *record,int a_,int b_,int c_,void *vec4,bool flag_)

{
                    /* Initializes a small record with three scalar fields, a copied 4-word vector,
                       and two byte flags. No class or uploader evidence is present. */
  *(void **)this = record;
  *(int *)((int)this + 8) = b_;
  *(int *)((int)this + 4) = a_;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)c_;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(c_ + 4);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(c_ + 8);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(c_ + 0xc);
  *(undefined1 *)((int)this + 0x1c) = vec4._0_1_;
  *(undefined1 *)((int)this + 0x1d) = 0;
  return;
}

