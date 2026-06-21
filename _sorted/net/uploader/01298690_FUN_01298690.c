// addr: 0x01298690
// name: FUN_01298690
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01298690(void * record, int a_, int b_, int c_, void * vec2, bool
   flag_) */

void __thiscall FUN_01298690(void *this,void *record,int a_,int b_,int c_,void *vec2,bool flag_)

{
                    /* Initializes a small record with three scalar fields, a copied 2-word vector,
                       and two byte flags. No class evidence is visible. */
  *(void **)this = record;
  *(int *)((int)this + 8) = b_;
  *(int *)((int)this + 4) = a_;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)c_;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(c_ + 4);
  *(undefined1 *)((int)this + 0x14) = vec2._0_1_;
  *(undefined1 *)((int)this + 0x15) = 0;
  return;
}

