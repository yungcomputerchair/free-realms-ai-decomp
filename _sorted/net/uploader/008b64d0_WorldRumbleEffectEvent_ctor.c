// addr: 0x008b64d0
// name: WorldRumbleEffectEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WorldRumbleEffectEvent_ctor(void * this, int arg1_, int arg2_, void *
   effectResource) */

void * __thiscall WorldRumbleEffectEvent_ctor(void *this,int arg1_,int arg2_,void *effectResource)

{
  int iVar1;
  uint in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs WorldRumbleEffectEvent from WorldEffectEvent, installs both
                       primary/secondary vtables, stores a referenced effect resource, and
                       increments its refcount. Vtable directly identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01580968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WorldEffectEvent_ctor(this,(void *)arg1_,(void *)arg2_,in_stack_00000010);
  local_4 = 0;
  *(undefined ***)this = WorldRumbleEffectEvent::vftable;
  *(undefined ***)((int)this + 0x44) = WorldRumbleEffectEvent::vftable;
  *(void **)((int)this + 0x90) = effectResource;
  iVar1 = *(int *)((int)effectResource + 8);
  *(int *)((int)effectResource + 8) = iVar1 + 1;
  if (iVar1 == 0) {
    (**(code **)(*(int *)effectResource + 0x24))();
  }
  *(undefined4 *)((int)this + 0x94) = 0;
  ExceptionList = local_c;
  return this;
}

