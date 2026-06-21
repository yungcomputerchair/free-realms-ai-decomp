// addr: 0x012cb590
// name: FUN_012cb590
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_012cb590(void * record, int a_, int b_, int c_, void * vec2, bool
   flag_) */

void __thiscall FUN_012cb590(void *this,void *record,int a_,int b_,int c_,void *vec2,bool flag_)

{
                    /* Initializes a generic small command/record structure with scalars, a two-word
                       vector, and flags. Class identity is unknown. */
  *(void **)this = record;
  *(int *)((int)this + 8) = b_;
  *(int *)((int)this + 4) = a_;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)c_;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(c_ + 4);
  *(undefined1 *)((int)this + 0x14) = vec2._0_1_;
  *(undefined1 *)((int)this + 0x15) = 0;
  return;
}

