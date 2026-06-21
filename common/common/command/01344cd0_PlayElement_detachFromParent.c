// addr: 0x01344cd0
// name: PlayElement_detachFromParent
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_detachFromParent(void * this) */

void __fastcall PlayElement_detachFromParent(void *this)

{
  int iVar1;
  void *this_00;
  
                    /* Detaches a PlayElement from parent/owner state during teardown: releases a
                       stored handle at +0x34 when active, asks the virtual parent slot for a
                       parent, and calls the relationship cleanup helper if present. Called by
                       Player/PlayArea/CommandObject destruction paths. */
  if (*(int *)((int)this + 0x30) != 0) {
    FUN_01357960(*(undefined4 *)((int)this + 0x34));
  }
  iVar1 = (**(code **)(*(int *)this + 0x30))();
  if (iVar1 != 0) {
    this_00 = (void *)(**(code **)(*(int *)this + 0x30))();
    PlayElement_copyKeywordMapTo(this_00,this);
  }
  return;
}

