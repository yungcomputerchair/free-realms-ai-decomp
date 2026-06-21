// addr: 0x0076b9d0
// name: FUN_0076b9d0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void FUN_0076b9d0(void * this, int x_, int y_, int z_, float duration_) */

void __thiscall FUN_0076b9d0(void *this,int x_,int y_,int z_,float duration_)

{
  uint uVar1;
  
                    /* Updates state flags and stores current/previous vector-like values plus a
                       duration/timer field. The owning class is not identified. */
  uVar1 = *(uint *)((int)this + 4);
  if (((uVar1 & 1) == 0) || ((uVar1 & 2) == 0)) {
    uVar1 = uVar1 & 0xfffffffb;
  }
  else {
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x14);
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x1c);
    uVar1 = uVar1 | 4;
  }
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
  if (duration_ <= 0.0) {
    *(undefined4 *)((int)this + 8) = _DAT_0175b420;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    *(undefined4 *)((int)this + 8) = 0;
    *(float *)((int)this + 0xc) = duration_;
  }
  *(int *)((int)this + 0x10) = x_;
  *(int *)((int)this + 0x14) = y_;
  *(int *)((int)this + 0x1c) = z_;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
  return;
}

