// addr: 0x0095ac30
// name: MountRequestContext_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int MountRequestContext_ctor(int this_, int client_) */

int __thiscall MountRequestContext_ctor(void *this,int this_,int client_)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
                    /* Initializes mount-request context fields to -1, stores the client pointer,
                       and, when the index is valid, pulls three mount-related asset IDs through
                       helper 0076bfc0. */
  (**(code **)(*(int *)(this_ + 0x54) + 0x10))(this);
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(int *)((int)this + 8) = this_;
  *(undefined1 *)((int)this + 0x1c) = 0;
  iVar1 = (**(code **)(**(int **)(this_ + 0x734) + 0x10))(*(undefined4 *)(this_ + 0x504));
  iVar1 = *(int *)(iVar1 + 0x2b0);
  if ((-1 < this_) && (this_ < *(int *)(iVar1 + 0x4e8))) {
    iVar3 = this_ * 0x74;
    uVar2 = FUN_0076bfc0(*(undefined4 *)(*(int *)(iVar1 + 0x4e4) + 0x28 + iVar3));
    *(undefined4 *)((int)this + 0xc) = uVar2;
    uVar2 = FUN_0076bfc0(*(undefined4 *)(*(int *)(iVar1 + 0x4e4) + 4 + iVar3));
    *(undefined4 *)((int)this + 0x10) = uVar2;
    uVar2 = FUN_0076bfc0(*(undefined4 *)(*(int *)(iVar1 + 0x4e4) + 0x50 + iVar3));
    *(undefined4 *)((int)this + 0x14) = uVar2;
  }
  return (int)this;
}

