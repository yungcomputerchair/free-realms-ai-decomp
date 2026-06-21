// addr: 0x0095c230
// name: PlayerEffectEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * PlayerEffectEvent_ctor(void * this) */

void * __thiscall PlayerEffectEvent_ctor(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000010;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs a PlayerEffectEvent, initializes EffectEventInterface base/vtable
                       slots and default effect fields such as id, transform defaults, and flags. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01595443;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_008b8160();
  *(undefined ***)((int)this + 0x50) = EffectEventInterface::vftable;
  *(undefined ***)this = PlayerEffectEvent::vftable;
  *(undefined ***)((int)this + 0x50) = PlayerEffectEvent::vftable;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = in_stack_00000010;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  uVar3 = uRam01cb54fc;
  uVar2 = uRam01cb54f8;
  uVar1 = uRam01cb54f4;
  *(undefined4 *)((int)this + 0x70) = _DAT_01cb54f0;
  *(undefined4 *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x78) = uVar2;
  *(undefined4 *)((int)this + 0x7c) = uVar3;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = _DAT_0175b420;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  ExceptionList = local_1c;
  return this;
}

