// addr: 0x00de3860
// name: FUN_00de3860
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00de3860(void * this, int arg1_, int arg2_, int arg3_) */

void __thiscall FUN_00de3860(void *this,int arg1_,int arg2_,int arg3_)

{
                    /* Stores three fields at offsets 0x1e0..0x1e8 and clears two byte flags at
                       0x1ec/0x1ed. No evidence identifies the owning class. */
  *(undefined1 *)((int)this + 0x1ec) = 0;
  *(undefined1 *)((int)this + 0x1ed) = 0;
  *(int *)((int)this + 0x1e0) = arg1_;
  *(int *)((int)this + 0x1e4) = arg2_;
  *(int *)((int)this + 0x1e8) = arg3_;
  return;
}

