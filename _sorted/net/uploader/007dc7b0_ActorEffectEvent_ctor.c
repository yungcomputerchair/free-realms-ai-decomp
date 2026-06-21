// addr: 0x007dc7b0
// name: ActorEffectEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * ActorEffectEvent_ctor(void * this) */

void * __thiscall ActorEffectEvent_ctor(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs an ActorEffectEvent, initializes its EffectEventInterface
                       base/vtable slots and default event fields. Evidence is
                       EffectEventInterface::vftable and ActorEffectEvent::vftable assignments plus
                       zero/default initialization. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015627e3;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  ActorEvent_ctor(this,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  *(undefined ***)((int)this + 0x4c) = EffectEventInterface::vftable;
  *(undefined4 *)((int)this + 0x54) = in_stack_00000010;
  *(undefined ***)this = ActorEffectEvent::vftable;
  *(undefined ***)((int)this + 0x4c) = ActorEffectEvent::vftable;
  *(undefined4 *)((int)this + 0x50) = 0;
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
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  ExceptionList = local_1c;
  return this;
}

